# Create venv for qmk tool

python3 -m venv ~/venv_qmk 
chmod -x ~/venv_qmk/bin/activate
~/venv_qmk/bin/activate


# Compile and flash

qmk compile -kb splitkb/kyria/rev2 -km shaba
qmk flash -kb splitkb/kyria/rev2 -km shaba


# Old, possibly not needed anymore with qmk tool (previously used dfu-programmer)

if [[ ! -f "/etc/udev/rules.d/50-qmk.rules" ]]; then
    echo "Copying udev rules to /etc/udev/rules.d/, need sudo."
    set -x
    sudo cp util/udev/50-qmk.rules /etc/udev/rules.d/

    sudo udevadm control --reload-rules
    sudo udevadm trigger
fi
