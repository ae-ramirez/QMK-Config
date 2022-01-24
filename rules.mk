# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Add path for combo dictionary management
VPATH += /home/al/qmk_firmware/keyboards/gboards/

# Build Options
#   change yes to no to disable
#

######## CUSTOM ##############
COMBO_ENABLE = yes          # Enable chord-like combinations
# KEY_OVERRIDE_ENABLE = yes   # Enable overriding mod-key combinations
# TAP_DANCE_ENABLE = yes

######## DEFAULT #############
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
UNICODE_ENABLE = yes        # Unicode
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes        # Use shared split_common code

