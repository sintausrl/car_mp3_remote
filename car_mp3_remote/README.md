# Example: rmt_nec_tx_rx

This example uses the remote control (RMT) peripheral to receive codes for the NEC infrared remote protocol.
ESP32 board is Esp32 Development Board. The IR sensor is AX-1838HS. The remote control is "Car mp3".

Configuration (pin numbers, etc.) can be modified in top of the main/car_mp3_remote.c file.

By default, this example use GPIO19 (RMT_RX_GPIO_NUM) as RX GPIO pins connected to HX1838 OUT pin (pin 1). Other connection is:
  HX1838 VCC pin (pin 3) to Esp32 Development Board 3V3 pin
  HX1838 GND pin (pin 2) to Esp32 Development Board GND pin
