#!/bin/bash
set -e

# Проверяем, что go доступен
if ! command -v go &> /dev/null; then
    echo "Go not found. Please install Go and ensure it's in your PATH."
    exit 1
fi

GO=$(command -v go)

# Путь к проекту
PROJECT_DIR="$(pwd)"
OUTPUT_DIR="$PROJECT_DIR/build"

# Создаём директорию для сборки, если не существует
mkdir -p "$OUTPUT_DIR"

# Переходим в папку с wireguard-go
cd Sources/WireGuardKitGo

# Собираем статическую библиотеку для iOS/macOS
echo "Building wireguard-go..."
$GO build -o "$OUTPUT_DIR/libwg-go.a" -buildmode=c-archive

echo "wireguard-go built successfully at $OUTPUT_DIR/libwg-go.a"
exit 0

