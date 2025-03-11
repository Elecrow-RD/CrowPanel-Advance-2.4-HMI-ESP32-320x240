1, Product picture

![ESP32 Advance HMI 2.4inch display](https://www.elecrow.com/media/catalog/product/cache/9e67447b006ee4d9559353b91d12add5/e/s/esp32_advance_hmi_2.4inch_display_1.jpg)

2, Product version number

|      | Hardware | Software | Remark |
| ---- | -------- | -------- | ------ |
| 1    | V1.0     | V1.0     | latest |

3, product information

| **Main Chip-****ESP32-S3-WROOM-1-N16R8**     |                                                              |
| -------------------------------------------- | ------------------------------------------------------------ |
| CPU/SoC                                      | high-performance Xtensa 32-bit LX7 dual-core processor, with a  up to 240MHz |
| System Memory                                | 512KB SRAM、8M PSRAM                                         |
| Memory                                       | 16M Flash，384KB ROM                                         |
| Development Language                         | MicroPython、C/C++                                           |
| Development Environment                      | ESP-IDF、Arduino IDE、LVGL、PlatformIO、Micro Python         |
| **Screen**                                   |                                                              |
| Size                                         | 2.4 inch                                                     |
| Diver IC                                     | ST7789                                                       |
| Resolution                                   | 800*480                                                      |
| Display Panel                                | IPS Panel                                                    |
| Touch Panel                                  | Capacitive Single Touch                                      |
| Viewing Angle                                | 178°                                                         |
| Brightness                                   | 400 cd/m²(Typ.)                                              |
| Color Depth                                  | 16-bit                                                       |
| **Wireless Communication - Onboard Antenna** |                                                              |
| WiFi                                         | Support 2.4GHz, 802.11a/b/g/n                                |
| Bluetooth                                    | Support Bluetooth 5.0 and BLE                                |
| Other                                        | **Zigbee、nRF2401、Matter、Thread and Wi-Fi 6 (Optional)**   |
| **Interface/Function**                       |                                                              |
| Interface                                    | USB port, UART, I2C, SD card slot, battery socket, speaker port, microphone, etc. |
| Function                                     | Audio amplifier, volume control, battery charge management, USB to UART, etc. |
| **Button/LED Indicator**                     |                                                              |
| Reset Button                                 | Yes, press to reset device                                   |
| Boot Button                                  | Yes, press and hold the power button to burn the program     |
| PWR                                          | Power indicator                                              |
| CHG                                          | Lithium battery charging status, completion indication       |
| **Other**                                    |                                                              |
| Installation method                          | Back hanging, fixed hole                                     |
| Operating temperature                        | -20~70 °C                                                    |
| Storage temperature                          | -30~80 °C                                                    |
| Power Input                                  | 5V/2A, USB or UART terminal                                  |
| Dimensions                                   | 77.1*51.8*15.8*mm                                            |

4, Use the driver module

| Name   | dependency library                      |
| ------ | --------------------------------------- |
| LVGL   | lvgl/lvgl@8.3.3                         |
| ST7789 | Adafruit GFX Library<br/>version=1.11.0 |

5,Quick Start



6,Folder structure.



7,Pin definition

#define SD_MOSI 6
#define SD_MISO 4
#define SD_SCK 5
#define SD_CS 7 



cfg.pin_sclk = 42;  // SPIのSCLK

cfg.pin_mosi = 39;  // SPIのCLK

cfg.pin_miso = -1;  // SPIのMISO

cfg.pin_dc = 41; 

#define TOUCH_GT911_SCL 16
#define TOUCH_GT911_SDA 15