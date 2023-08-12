#define CDPCFG_PIN_BAT 35
#define CDPCFG_BAT_MULDIV 200 / 100

#define CDPCFG_PIN_LED1 25
#ifdef CDPCFG_RADIO_SX126X
#define CDPCFG_LORA_CLASS SX1262
#define CDPCFG_PIN_LORA_MOSI 27
#define CDPCFG_PIN_LORA_SCLK 5
#define CDPCFG_PIN_LORA_MISO 19
#define CDPCFG_PIN_LORA_RST 23
#define CDPCFG_PIN_LORA_DIO1 33
#define CDPCFG_PIN_LORA_BUSY 32
#else
#define CDPCFG_PIN_LORA_DIO1 -1
#define CDPCFG_PIN_LORA_RST 14
#endif
// LoRa configuration
#define CDPCFG_PIN_LORA_CS 18
#define CDPCFG_PIN_LORA_DIO0 26

//GPS configuration
#define CDPCFG_GPS_RX 34
#define CDPCFG_GPS_TX 12

// OLED display settings
#define CDPCFG_PIN_OLED_CLOCK 22
#define CDPCFG_PIN_OLED_DATA 21
#define CDPCFG_PIN_OLED_RESET 16
#define CDPCFG_PIN_OLED_ROTATION U8G2_R0
