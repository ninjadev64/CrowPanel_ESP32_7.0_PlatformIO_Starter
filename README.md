# Elecrow CrowPanel ESP32 7.0-inch PlatformIO starter

This repository contains a starter PlatformIO project with the Arduino framework, for using the [CrowPanel 7.0-inch ESP32 display](https://www.elecrow.com/wiki/esp32-display-702727-intelligent-touch-screen-wi-fi26ble-800480-hmi-display.html) with LVGL and LovyanGFX.

### Instructions

1. Install the [Microsoft C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) and [PlatformIO](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) Visual Studio Code extensions.
	- VSCodium users can download the .vsix files and install them manually from the Extensions tab.
2. Clone this repository and open it in your IDE.
3. Attempt to build the project to download board definitions and dependencies. This can be done by either
	- clicking the "Build" option in the PlatformIO sidebar tab, or
	- clicking the tick in the bottom toolbar.
4. Move the LVGL demos directory so it is included for compilation.
	- `cd .pio/libdeps/esp32-s3-devkitc-1-n8-elecrow/lvgl/`
	- `mv demos/ src/demos/`
5. Attempt to build the project again. This time, it should succeed.
6. Connect your device and upload the project by either
	- clicking the "Upload" option in the PlatformIO sidebar tab, or
	- clicking the arrow in the bottom toolbar.
7. You should see the LVGL demo application appear on your device, and coordinates logged to the serial monitor when the screen is touched.
8. You can modify the `lgfx.cpp` file by removing parts related to LVGL to use the display through LovyanGFX without LVGL.

### Credits

This repo is derived from [Elecrow's PlatformIO sample](https://www.elecrow.com/wiki/esp32-display-702727-intelligent-touch-screen-wi-fi26ble-800480-hmi-display.html#platformio), with some help from [Mike Warriner's starter repo](https://github.com/MikeWarriner/CrowPanel7inch), with modifications to be a starter for a more code-based project rather than one created with SquareLine Studio or EEZ Studio.
