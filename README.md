# RoRo60: A custom 60% PCB for "Pete" 📉

The **RoRo60** is the compact 60% sibling of the RoRo80, specifically designed for the **"Pete"** enthusiast group. Like its bigger brother, it’s a tribute to Germany's favorite debt counselor, Peter Zwegat. It offers a reliable, versatile RP2040-based platform for those who want to save space on their desk.

Hotswap:
<img width="2539" height="957" alt="RoRo60_Hotswap" src="https://github.com/user-attachments/assets/99964ca5-8daa-4544-85cc-b34ea726812f" />

Solder:
<img width="2378" height="879" alt="RoRo60_Solder" src="https://github.com/user-attachments/assets/c3b8b98d-08c0-4ee8-837c-410035aade13" />

## Two Flavors: Hotswap & Solder
The RoRo60 comes in two different versions to suit your build preference. Note that they differ significantly in features and layout support:

| Feature | Hotswap Version | Solder Version |
| :--- | :--- | :--- |
| **Switches** | Kailh Hotswap Sockets | Solder |
| **LEDs / Indicators** | **None** (No LEDs at all) | Caps-Lock LED / **RGB Underglow** |
| **Bottom Row** | 7U Tsangan Only | 7U Tsangan and Standard Bottom Row |

## Features
* **Form Factor:** 60% PCB
* **Compatibility:** Standard Tray Mount & O-Ring (Gummy-mount) compatible
* **Chipset:** RP2040
* **Connectivity:** Dual Support — Use either the onboard **USB-C port** or a **JST-header** for Daughterboards
* **Software:** Full QMK & VIAL Support

## Firmware & Flashing
The RoRo60 uses the UF2 bootloader. **Both versions (Solder & Hotswap) share the exact same pinout and use the same firmware file.** 
1. **First time:** Plug the PCB in. A drive named `RPI-RP2` will appear.
2. **Flash:** Drag and drop the `firmware.uf2` file into that drive.
3. **Subsequent times:** Hold the **BOOT** button, press **RESET** twice, then release **BOOT**.

> [!TIP]
> You can find the firmwares in the `/firmware` folder of this repository.
> *Note: LED features in the firmware will only have an effect on the Solder version.*

## Supported Layouts
* **Hotswap:** 7U Tsangan Bottom Row, Stepped/Normal Caps, Split Backspace, Split Left/Right Shift.
* **Solder:** Adds support for Standard Bottom Row (6.25U) and underglow or capslock indicator led.

## Inside the RoRo60 Hotswap
Here's a look at the PCB design from KiCad. It's where all the magic happens!
<img width="1713" height="681" alt="KiCad_Design" src="https://github.com/user-attachments/assets/03227c75-eafd-48a6-8de4-fb80ceca13b0" />

## The Story behind "Pete"
The "Pete" series was born in 2022 within our local enthusiast group. While Peter Zwegat stands for financial recovery, the RoRo60 stands for the exact opposite: deep-diving into the keyboard rabbit hole. 

The project was named after **Roman and Rohaly**, two friends of the Pete Group who pushed for a custom PCB design. This open-source version is a reliable, easy-to-configure tool for everyone in the community.

---

## Open Source
This project is part of the open-source keyboard movement. Thanks to Gnarsch for making the RoRo60 hotswap version based on my original solder version!

WE LOVE OPEN SOURCE.

## Questions?
Feel free to open an issue or message me directly!

**Shoutout to the Pete-Group!** 📉❤️
