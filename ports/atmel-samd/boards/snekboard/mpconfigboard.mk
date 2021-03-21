USB_VID = 0x239A
USB_PID = 0x804E
USB_PRODUCT = "snekboard"
USB_MANUFACTURER = "keithp.com"

CHIP_VARIANT = SAMD21G18A
CHIP_FAMILY = samd21

SPI_FLASH_FILESYSTEM = 1
EXTERNAL_FLASH_DEVICES = "W25Q16JV_IQ"
LONGINT_IMPL = MPZ

CIRCUITPY_BITBANGIO = 0
CIRCUITPY_BITMAPTOOLS = 0
CIRCUITPY_GAMEPAD = 0
CIRCUITPY_I2CPERIPHERAL = 0
CIRCUITPY_MSGPACK = 0
CIRCUITPY_VECTORIO = 0
CIRCUITPY_BUSDEVICE = 0

CFLAGS_INLINE_LIMIT = 60

SUPEROPT_GC = 0

CFLAGS_BOARD = --param max-inline-insns-auto=15
ifeq ($(TRANSLATION), zh_Latn_pinyin)
RELEASE_NEEDS_CLEAN_BUILD = 1
CFLAGS_INLINE_LIMIT = 35
endif
ifeq ($(TRANSLATION), ja)
RELEASE_NEEDS_CLEAN_BUILD = 1
CFLAGS_INLINE_LIMIT = 35
endif
ifeq ($(TRANSLATION), de_DE)
RELEASE_NEEDS_CLEAN_BUILD = 1
CFLAGS_INLINE_LIMIT = 35
SUPEROPT_VM = 0
endif