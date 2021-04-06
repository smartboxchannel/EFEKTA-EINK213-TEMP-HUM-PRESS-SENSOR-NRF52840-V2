// ###################           Mini wither station with electronic ink display 2.9 Inch | nRF52            ############### //
//                                                                                                                           //
//        @filename   :   EFEKTA_THPEINK290_0.29.ino                                                                         //
//        @brief en   :   Wireless, battery-operated temperature,humidity and pressure sensor(SHT20, SI7020, HTU21D, BME280) //
//                        with electronic ink display(Good Display GDEH029A1). The extended version adds the MAX44009 light  //
//                        sensor, an active bizzer Works on nRF52.                                                           //
//        @brief ru   :   Беcпроводной, батарейный датчик температуры, влажности и давления(SHT20, SI7020, HTU21D, BME280)   //
//                        с дисплеем на электронных чернилах(Good Display GDEH029A1). В расширенной версии добавлен          //
//                        датчик света MAX44009, активный биззер. Работает на nRF52832, nRF52840.                            //
//        @author     :   Andrew Lamchenko aka Berk                                                                          //
//                                                                                                                           //
//        Copyright (C) EFEKTALAB 2020                                                                                       //
//        Copyright (c) 2014-2015 Arduino LLC.  All right reserved.                                                          //
//        Copyright (c) 2016 Arduino Srl.  All right reserved.                                                               //
//        Copyright (c) 2017 Sensnology AB. All right reserved.                                                              //
//        Copyright (C) Waveshare     August 10 2017                                                                         //
//                                                                                                                           //
// ######################################################################################################################### //


//#define MY_DEBUG
//#define LANG_RU // If this is not used the English localization will be displayed.
//#define MARBLE_CASE // otherwise if not activated then CARBON_CASE
#define SN "EFEKTA MultiSensor eInk"
#define SV "0.89"
#define MY_RADIO_NRF5_ESB
#define MY_NRF5_ESB_PA_LEVEL (0x8UL)
//#define MY_PASSIVE_NODE
//#define MY_NODE_ID 151
//#define MY_NRF5_ESB_MODE (NRF5_1MBPS)
#define MY_NRF5_ESB_MODE (NRF5_250KBPS)

#define LIGHTSENS
#define SEND_RESET_REASON
#define MY_RESET_REASON_TEXT
