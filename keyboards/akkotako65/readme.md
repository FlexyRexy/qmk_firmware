# akkotako65

![akkotako65](imgur.com image replace me!)

This keyboard was created by Brandon Flexman, Colton Yates, Sam Warr, Sofia McNary, and Kevin James. The firmware for this keyboard was originally created by Sam Warr, with this version being forked by Brandon Flexman 
for a slightly different keymap and additional keyboard features. This keyboard features two rotary encoders, an Elite-C microcontroller, Akko Cream Yellow switches, a custom PCB, and 3mm RGB neopixel LEDs.

* Keyboard Maintainer: [Brandon Flexman](https://github.com/FlexyRexy)
* Hardware Supported: Elite-C (ATMega32U4), EC11 Rotary Encoders, 10k-ohm resistors, Akko Cream Yellow Switches.
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make akkotako65:default

Flashing example for this keyboard:

    make akkotako65:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Features:
* 67 keys
* 2 rotary encoders *(to be implemented)*
* WS2812B RGB underglow *(to be implemented)*
* Elite-C Pro Micro microcontroller
* USB-C
* QMK Bootloader

## Do-It-Yourself

Steps to making your own QMK firmware:
1. Start by designing your own layout with [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/)
2. Then *copy the raw data* * and paste it into [Keyboard Firmware Builder](https://kbfirmware.com/), and map the matrix and MCU pins
3. Since the firmware builder uses outdated QMK firmware, you will need to just hit "Save configuration" and then run `qmk import-kbfirmware /path/to/export.json` and QMK will generate the *necessary files*** (I know, more fine print) for you to use in the QMK firmware
4. Build with `qmk compile -kb <your-keyboard> -km default`
5. Flash with `qmk flash -kb <your-keyboard> -km default`
6. Test keyboard with [QMK Configurator Tool](https://config.qmk.fm/#/test)

*The input for KFB is very very picky, so make sure it follows this format:

```
["Esc","!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{w:2},"Backspace","Cal"],
[{w:1.5},"Tab","Q","W","E","R","T","Y","U","I","O","P","{\n[","}\n]",{w:1.5},"|\n\\","`\n~"],
[{w:1.75},"Caps Lock","A","S","D","F","G","H","J","K","L",":\n;","\"\n'",{w:2.25},"Enter","Menu"],
[{w:2.25},"Shift","Z","X","C","V","B","N","M","<\n,",">\n.","?\n/",{w:1.75},"Shift","Up","Fn"],
[{w:1.25},"Ctrl",{w:1.25},"Win",{w:1.25},"Alt",{w:7.25},"","Fn","Ctrl","Left","Down","Right"]
```
This is a bad example that KLE outputs by default and won't work out of the box with KFB:
```
[{p:"R1"},"Esc",{p:""},"!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{w:2},"Backspace","Cal"],
[{p:"R2",w:1.5},"Tab",{p:""},"Q","W","E","R","T","Y","U","I","O","P","{\n[","}\n]",{w:1.5},"|\n\\","`\n~"],
[{p:"R3",w:1.75},"Caps Lock",{p:""},"A","S","D","F","G","H","J","K","L",":\n;","\"\n'",{w:2.25},"Enter","Menu"],
[{p:"R4",w:2.25},"Shift",{p:""},"Z","X","C","V","B","N","M","<\n,",">\n.","?\n/",{w:1.75},"Shift","Up","Fn"],
[{p:"SPACE",w:1.25},"Ctrl",{p:"",w:1.25},"Win",{w:1.25},"Alt",{a:7,w:7.25},"",{a:4},"Fn","Ctrl","Left","Down","Right"]
```
Delete any extra stuff (most likely a and p flags) other than the necessary {w:#} flags

** The `qmk import-kbfirmware` utility absolutely sucks and will sometimes mess up a few keys in the layout as well as screwing up pin assignments. Save yourself hours of headbanging and double check these two things if it isn't working as expected.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Before flashing, enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

After flashing, the bootloader can now be entered by pressing the lower FN key and Esc simultaneously.

![layer1.png](keymaps/default/layer1.png)
