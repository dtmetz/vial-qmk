VIA_ENABLE = yes
VIAL_ENABLE = yes

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = yes         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = yes           # Audio output
ENCODER_ENABLE = yes
LTO_ENABLE = yes
SPLIT_KEYBOARD = yes

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

POINTING_DEVICE_ENABLE = yes	# Enable Pimoroni Trackball on master (+2304)
POINTING_DEVICE_DRIVER = pimoroni_trackball

HAPTIC_ENABLE = no				# Enable Pimoroni Haptic Bzzz LRA (+1192)
HAPTIC_DRIVER += DRV2605L
