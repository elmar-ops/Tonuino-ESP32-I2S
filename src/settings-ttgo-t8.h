#include "Arduino.h"

//######################### INFOS ####################################
/* This is not a develboard-specific config-file. It's intended for your own use.
   It's been originally derived from lolin32, but just change it according your needs!
*/

//################## GPIO-configuration ##############################
// Please note: GPIOs 34, 35, 36, 39 are input-only and don't have pullup-resistors.
// So if connecting a button to these, make sure to add a 10k-pullup-resistor for each button.
// Further infos: https://randomnerdtutorials.com/esp32-pinout-reference-gpios/
#ifdef SD_MMC_1BIT_MODE
    // uSD-card-reader (via SD-MMC 1Bit)
    //
    // SD_MMC uses fixed pins
    //  MOSI    15
    //  SCK     14
    //  MISO    2   // hardware pullup may required
#else
    // uSD-card-reader (if SPI is used; these GPIOs can be changed)
    #define SPISD_CS                        13          // GPIO for chip select (SD)
    #ifndef SINGLE_SPI_ENABLE
        #define SPISD_MOSI                  15          // GPIO for master out slave in (SD) => not necessary for single-SPI
        #define SPISD_MISO                  2          // GPIO for master in slave ou (SD) => not necessary for single-SPI
        #define SPISD_SCK                   14          // GPIO for clock-signal (SD) => not necessary for single-SPI
    #endif
#endif

// RFID (via SPI)
#define RST_PIN                         22          // Used for hard power-down (RST connected to GND) LED GREEN
#define RFID_CS                         21          // GPIO for chip select (RFID)
#define RFID_MOSI                       23          // GPIO for master out slave in (RFID)
#define RFID_MISO                       19          // GPIO for master in slave out (RFID)
#define RFID_SCK                        18          // GPIO for clock-signal (RFID)

#ifdef RFID_READER_TYPE_PN5180
    #define RFID_BUSY                   99          // PN5180 BUSY PIN
    #define RFID_RST                    22          // PN5180 RESET PIN
#endif

// I2S (DAC)
#define I2S_DOUT                        25          // Digital out (I2S)
#define I2S_BCLK                        27          // BCLK (I2S)
#define I2S_LRC                         26          // LRC (I2S)


// Rotary encoder
#define DREHENCODER_CLK                 99          // If you want to reverse encoder's direction, just switch GPIOs of CLK with DT (in software or hardware)
#define DREHENCODER_DT                  99          // Info: Lolin D32 / Lolin D32 pro 35 are using 35 for battery-voltage-monitoring!
#define DREHENCODER_BUTTON              99          // Button is used to switch Tonuino on and off

// Control-buttons
#define PAUSEPLAY_BUTTON                34           // 34 needs external pullup!            
#define NEXT_BUTTON                     36           // 36 needs external pullup!       
#define PREVIOUS_BUTTON                 39           // 39 needs external pullup!       

// (optional) Power-control
#define POWER                           99          // GPIO used to drive transistor-circuit, that switches off peripheral devices while ESP32-deepsleep

// (optional) Neopixel
#define LED_PIN                         12          // GPIO for Neopixel-signaling

// (optinal) Headphone-detection
#ifdef HEADPHONE_ADJUST_ENABLE
    #define HP_DETECT                   22          // GPIO that detects, if there's a plug in the headphone jack or not
#endif

// (optional) Monitoring of battery-voltage via ADC
#ifdef MEASURE_BATTERY_VOLTAGE
    #define VOLTAGE_READ_PIN            35          // GPIO used to monitor battery-voltage. Change to 35 if you're using Lolin D32 or Lolin D32 pro as it's hard-wired there!
    float referenceVoltage = 3.4;                  // Voltage between 3.3V and GND-pin at the develboard in battery-mode (disconnect USB!)
    float offsetVoltage = 0.1;                      // If voltage measured by ESP isn't 100% accurate, you can add an correction-value here
#endif

// (optional) For measuring battery-voltage a voltage-divider is necessary. Their values need to be configured here.
#ifdef MEASURE_BATTERY_VOLTAGE
    uint8_t rdiv1 = 100;                               // Rdiv1 of voltage-divider (kOhms) (measure exact value with multimeter!)
    uint16_t rdiv2 = 100;                              // Rdiv2 of voltage-divider (kOhms) (measure exact value with multimeter!) => used to measure voltage via ADC!
#endif