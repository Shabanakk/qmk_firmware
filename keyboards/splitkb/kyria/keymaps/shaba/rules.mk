# -------------------------------------------------------------------
# DEBUGGING
# -------------------------------------------------------------------

# Allows connecting to the keyboard with the "qmk console" command. Keyboard must additionally
# be switched into debug mode with the DB_TOGG key in order for dprintf() to be shown.
CONSOLE_ENABLE=yes

# Makes get_keycode_string(kc) print pretty strings, costs a lot of space.
KEYCODE_STRING_ENABLE = yes

# Save some space
# Audio control and System control
EXTRAKEY_ENABLE = no # -660 bytes (some keys won't work)
