# RoRo60: A custom 60% PCB for "Pete" 📉

The **RoRo60** is the compact 60% sibling of the RoRo80, specifically designed for the **"Pete"** enthusiast group. Like its bigger brother, it’s a tribute to Germany's favorite debt counselor, Peter Zwegat—offering high-end hotswap features for those who want to save space (and maybe a bit of money).

<img width="2539" height="957" alt="image" src="https://github.com/user-attachments/assets/99964ca5-8daa-4544-85cc-b34ea726812f" />

## Features
* **Form Factor:** 60% Hotswap PCB
* **Compatibility:** Standard Tray Mount & O-Ring (Gummy-mount) compatible
* **Chipset:** RP2040 (Dual-core ARM Cortex M0+)
* **Connectivity:** Dual Support — Use either the onboard **USB-C port** or a **JST-header** for Daughterboards
* **Software:** Full QMK & VIAL Support

## Firmware & Flashing
The RoRo60 uses the UF2 bootloader for effortless flashing.

1. **First time:** Plug the PCB in. A drive named `RPI-RP2` will appear.
2. **Flash:** Drag and drop the `roro60_vial.uf2` file into that drive.
3. **Subsequent times:** Hold the **BOOT** button, press **RESET** twice, then release **BOOT** to enter flashing mode again.

> [!TIP]
> You can find the latest VIAL firmware in the `/firmware` folder of this repository.

## Supported Layouts
The RoRo60 is designed for the cleanest look and most popular enthusiast configurations:

* **Hotswap** convenience
* **Bottom Row:** 7U Tsangan ONLY
* **Caps Lock:** Support for both Stepped and Normal Caps Lock
* **Split Support:** Split Backspace, Split Left Shift, and Split Right Shift

## USB-C Port OR JST
If you want to use the JST Port, just don't solder the USB-C Port

## The Story behind "Pete"
The "Pete" series was born in 2022 within our local enthusiast group. While Peter Zwegat stands for financial recovery, the RoRo60 stands for the exact opposite: deep-diving into the keyboard rabbit hole. It’s a reliable, versatile RP2040-based PCB designed by enthusiasts, for enthusiasts.

---

## Open Source
This project is part of the open-source keyboard movement. Files will be released to the public soon!

## Questions?
Feel free to open an issue or message me directly!

**Shoutout to the Pete-Group!** 📉❤️
