# SMA Inverter to MQTT via ESP32

This project uses an ESP32 to connect to an SMA SunnyBoy inverter, using Bluetooth, and regularly publish generation data via MQTT. There is also an option to publish the required topics to allow Home Assistant to automatically detect the various sensors.

It was originally forked from https://github.com/delhatch/ESP32_to_SMA, but I also heavily referenced https://github.com/SBFspot/SBFspot.

This is working for me - but the code is some what of a mess and could do with some (lots of) cleaning up.

All my development and testing was done on an SMA Sunny Boy SB 5000TL-21 (manufactured in 2021).

## Setup

All required configuration is done in the `site_details.h` file, to create this, copy the `site_details-example.h` file to `site_details.h` and update all of the constants accordingly.

The project is developed and designed for use in VScode/PlatformIO. It may work in Arduino, but I would _highly_ recommend using PlatformIO as it'll also automatically get the libraries etc that are required.

## Flashing the image

The image initially needs to be flashed via Serial, update your `platformio.ini` accordingly to match your setup.

Once the first image is uploaded, and it's connected to the network, you can update using OTA updades:

- Build the `firmware.bin` file (PlatfromIO Build)
- Run `curl` to upload the new file, for example: `curl -F "image=@.pio/build/lolin_d32/firmware.bin" http://1.2.3.4/update`
- Or browse to http://192.168.0.25/update

If you have any questions, please create a GitHub issue and I'll try to help.
