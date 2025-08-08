package wireguardkitgo

import "fmt"

// Config — простой экспортируемый тип для примера
type Config struct {
	Name string
}

// SayHello — простая экспортируемая функция для проверки
func SayHello(name string) string {
	return fmt.Sprintf("Hello, %s!", name)
}

