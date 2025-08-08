package wireguardkitgo

import (
	"golang.zx2c4.com/wireguard/conn"
	"golang.zx2c4.com/wireguard/device"
	"golang.zx2c4.com/wireguard/tun"
)

// DeviceWrapper — экспортируемый тип для управления WireGuard устройством
type DeviceWrapper struct {
	device *device.Device
}

// NewDeviceWrapper создаёт новый DeviceWrapper
func NewDeviceWrapper(tunDevice tun.Device, bind conn.Bind, logger *device.Logger) *DeviceWrapper {
	return &DeviceWrapper{device: device.NewDevice(tunDevice, bind, logger)}
}

// Up поднимает устройство
func (d *DeviceWrapper) Up() error {
	return d.device.Up()
}

// Down опускает устройство
func (d *DeviceWrapper) Down() error {
	return d.device.Down()
}

// SetPrivateKey устанавливает приватный ключ
func (d *DeviceWrapper) SetPrivateKey(sk string) error {
	var key device.NoisePrivateKey
	if err := key.FromHex(sk); err != nil {
		return err
	}
	return d.device.SetPrivateKey(key)
}
