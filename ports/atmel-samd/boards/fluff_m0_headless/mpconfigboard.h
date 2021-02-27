#define MICROPY_HW_BOARD_NAME "Fluff M0 Headless"
#define MICROPY_HW_MCU_NAME "samd21e18"

#define MICROPY_PORT_A        (PORT_PA24 | PORT_PA25)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1

#define SAMD21_BOD33_LEVEL (6)
