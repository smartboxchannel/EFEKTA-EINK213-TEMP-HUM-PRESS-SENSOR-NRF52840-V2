# EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR-NRF52
Micro weather station. Wireless temperature, humidity, pressure, weather forecast and light sensor. Designed on the nRF52840 wireless radio module. The temperature, humidity and pressure sensor BME280, SHT20, SHT21, SI7020, SI7021, HTU20D, HTU21D is used. Light sensor MAX44009. The device is powered by a CR2450 battery. Power consumption when transmitting data is 8mA, in sleep mode is 4.7uA.

#### GDEH0213B72 (GDEH0213B73, Waveshare V2): https://ali.ski/05GbQ

(250x122,2.13inch E-Ink raw display panel Without PCB Communicate via SPI interface)

#### MS88SF3: https://ali.ski/I_UNg

(New FCC CE RoHs Certificated Compact (18.5×12.5×2mm) and Flexible ultra-low power wireless BLE 5.0 Module based on nRF52840 SoCs)

#### Don't donate to me, it doesn't work in this world: https://paypal.me/efektalab , just buy

#### Sale: https://www.tindie.com/products/diyberk/multisensor-with-an-e-ink-display-213-inch/

Video: 

More info at http://efektalab.com/eink213

---

![EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR (MINI WEATHER STATION ON NRF52](https://github.com/smartboxchannel/EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR-NRF52/blob/main/Images/0010.jpg) 


---


---

### Instruction

#### First of all, I recommend installing the Arduino IDE portable (optional, but desirable)

https://www.arduino.cc/en/Guide/PortableIDE

#### 1. Install the latest arduino-nRF5 library (https://github.com/sandeepmistry/arduino-nRF5)

#### 2. Install the latest version of the MySensors library (https://github.com/mysensors/MySensors)

#### 3. Download the archive of this project to your computer

#### 4. Add support for devices of this project to the arduino-nRF5 library, the description is in the README.md file (https://github.com/smartboxchannel/EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR-NRF52/blob/main/for_sandeepmistry_nRF5/README.md)

#### 5. Add support for interrupts via gpiote, for this go to the ... packages \ sandeepmistry \ hardware \ nRF5 \ 0.7.0 \ cores \ nRF5 folder, and in the WInterrupts.c file, before the void GPIOTE_IRQHandler () function, add the line: \_\_attribute\_\_ ((weak ))

#### 6. Add the libraries in the archive () https://github.com/smartboxchannel/EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR-NRF52/tree/main/CODE/Arduino/libraries  of this project to the libraries folder on your computer ( path: ...\Documents\Arduino\libraries )

#### 7. Create an EINK213ED1 folder on your computer under the Arduino directory (Documents \ Arduino). Add the files of this project located in the Arduino section (https://github.com/smartboxchannel/EFEKTA-EINK213-TEMP-HUM-PRESS-SENSOR-NRF52/tree/main/CODE/Arduino) to the created EINK213ED1 folder

#### 8. Open the EINK213ED1.ino file in the Arduino IDE program, go to the MyConfig.h tab and configure according to your board version and settings of your MySensors network.

#### 9. In the main menu of the Arduino IDE go to Tools-> Boards-> Nordic Semiconductors nRF5 Boards, in the list that opens, select the EFEKTA MWS213 V2 nRF52840 board. In the menu of the selected board, select the type of clock crystal (external), also select the Reset: Enable item.

#### 10. Click on the icon - check and then download
