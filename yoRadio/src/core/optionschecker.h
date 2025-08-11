#ifndef optionschecker_h
#define optionschecker_h

#if (REAL_LEDBUILTIN != -1) && (REAL_LEDBUILTIN == TFT_RST)
#  error LED_BUILTIN IS THE SAME AS TFT_RST. Check it in myoptions.h
#endif

#ifndef IGNORE_BOARD_CHECKS
#if !(defined(ARDUINO_ESP32_DEV) || defined(ARDUINO_ESP32S3_DEV) || defined(ARDUINO_ESP32C3_DEV))
#  error ONLY MODULES "ESP32 Dev Module", "ESP32 Wrover Module" AND "ESP32 S3 Dev Module" ARE SUPPORTED. PLEASE SELECT ONE OF THEM IN THE MENU >> TOOLS >> BOARD
#endif
#endif  // IGNORE_BOARD_CHECKS

#endif


