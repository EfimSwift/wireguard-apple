#!/bin/bash
set -e

# Путь к Go
GO=/usr/local/go/bin/go
if [ ! -x "$GO" ]; then
    echo "Go not found at $GO. Please install Go (e.g., brew install go) and ensure it's in PATH."
    exit 1
fi

# Путь к проекту
PROJECT_DIR="$(pwd)"
OUTPUT_DIR="$PROJECT_DIR/build"

# Создаём директорию для сборки
mkdir -p "$OUTPUT_DIR"

# Собираем wireguard-go
cd Sources/WireGuardKitGo
$GO build -o "$OUTPUT_DIR/libwg-go.a" -buildmode=c-archive
if [ $? -ne 0 ]; then
    echo "Failed to build wireguard-go"
    exit 1
fi

echo "wireguard-go built successfully at $OUTPUT_DIR/libwg-go.a"
exit 0


