#!/bin/bash

set -eu

if [[ ! -f "/etc/udev/rules.d/50-qmk.rules" ]]; then 
    echo "Copying udev rules to /etc/udev/rules.d/, need sudo."
    set -x
    sudo cp util/udev/50-qmk.rules /etc/udev/rules.d/
    
    sudo udevadm control --reload-rules
    sudo udevadm trigger
fi

set -x

dfu-programmer atmega32u4 erase --force
dfu-programmer atmega32u4 flash --force ./splitkb_kyria_rev2_shaba.hex 
dfu-programmer atmega32u4 reset
