# Atmel XMega A3BU Xplained

Experimentations against the XMega Xplained board.

## Requirements

On OSX, install the AVR compiler toolchain and a DFU programmer:

```
$ xcode-select --install
$ brew tap osx-cross/avr
$ brew install avr-gcc
$ brew install dfu-programmer
```

## Programming

Compile the project:

```
$ cd gcc
gcc $ make
...
Finished building target: firmware.elf
"avr-objcopy" -O binary "firmware.elf" "firmware.bin"
"avr-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures \
        "firmware.elf" "firmware.hex"
"avr-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "firmware.elf" \
        "firmware.eep" || exit 0
"avr-objdump" -h -S "firmware.elf" > "firmware.lss"
"avr-size" "firmware.elf"
   text	   data	    bss	    dec	    hex	filename
   2612	     14	     39	   2665	    a69	firmware.elf
```

This produces:

```
gcc $ ls -l firmware.*
-rwxr-xr-x  1 erik  staff    2626 Jan 16 16:13 firmware.bin
-rwxr-xr-x  1 erik  staff       0 Jan 16 16:13 firmware.eep
-rwxr-xr-x  1 erik  staff  232232 Jan 16 16:13 firmware.elf
-rw-r--r--  1 erik  staff    7410 Jan 16 16:13 firmware.hex
-rw-r--r--  1 erik  staff   57667 Jan 16 16:13 firmware.lss
-rw-r--r--  1 erik  staff   91438 Jan 16 16:13 firmware.map
```

Connect the board over USB and flash it through the bootloader:

```
gcc $ make dfu
```
