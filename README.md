# RoRo60: A custom 60% PCB for "Pete" 📉

The **RoRo60** is the compact 60% sibling of the RoRo80, specifically designed for the **"Pete"** enthusiast group. Like its bigger brother, it’s a tribute to Germany's favorite debt counselor, Peter Zwegat—offering high-end hotswap features for those who want to save space (and maybe a bit of money).

Hotswap:
<img width="2539" height="957" alt="image" src="https://github.com/user-attachments/assets/99964ca5-8daa-4544-85cc-b34ea726812f" />

Solder:
<img width="2378" height="879" alt="image" src="https://github.com/user-attachments/assets/c3b8b98d-08c0-4ee8-837c-410035aade13" />

## Features
* **Form Factor:** 60% Hotswap PCB
* **Compatibility:** Standard Tray Mount & O-Ring (Gummy-mount) compatible
* **Chipset:** RP2040 (Dual-core ARM Cortex M0+)
* **Connectivity:** Dual Support — Use either the onboard **USB-C port** or a **JST-header** for Daughterboards
* **Software:** Full QMK & VIAL Support

## Firmware & Flashing
The RoRo60 uses the UF2 bootloader for effortless flashing.

1. **First time:** Plug the PCB in. A drive named `RPI-RP2` will appear.
2. **Flash:** Drag and drop the `firmware.uf2` file into that drive.
3. **Subsequent times:** Hold the **BOOT** button, press **RESET** twice, then release **BOOT** to enter flashing mode again.

> [!TIP]
> You can find the firmwares in the `/firmware` folder.
> Info: Solder and Hotswap PCB share the same pinout, which means they share the same firmware. Just the LED feature of both firmwares is only available in the solder version.

## Supported Layouts
The RoRo60 is designed for the cleanest look and most popular enthusiast configurations:

* **Hotswap** convenience
* **Bottom Row:** 7U Tsangan ONLY
* **Caps Lock:** Support for both Stepped and Normal Caps Lock
* **Split Support:** Split Backspace, Split Left Shift, and Split Right Shift

## Inside the RoRo60 Hotswap
Here's a look at the PCB design from KiCad. It's where all the magic happens!
<img width="1713" height="681" alt="image" src="https://github.com/user-attachments/assets/03227c75-eafd-48a6-8de4-fb80ceca13b0" />

## The Story behind "Pete"
The "Pete" series was born in 2022 within our local enthusiast group. While Peter Zwegat stands for financial recovery, the RoRo60 stands for the exact opposite: deep-diving into the keyboard rabbit hole. It’s a reliable, versatile RP2040-based PCB designed by enthusiasts, for enthusiasts.

---

## Open Source
This project is part of the open-source keyboard movement. Thanks to Gnarsch for making the RoRo60 hotswap version based on my original solder version!

## Questions?
Feel free to open an issue or message me directly!

**Shoutout to the Pete-Group!** 📉❤️
