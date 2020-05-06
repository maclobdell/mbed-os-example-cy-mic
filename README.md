# PSoC 6 MCU: PDM-to-PCM Example for Mbed OS

This example demonstrates how to use the pulse-density modulation/pulse-code modulation (PDM/PCM) hardware block in PSoC® 6 MCU with a digital microphone.

## Overview
This code example shows how to use a digital microphone with the PDM/PCM block. It measures the sound intensity (volume), and turns ON an LED when the volume exceeds a threshold. You can reset the threshold by pressing a switch; you can use this to capture the environment noise and set a new threshold above the noise. A debug UART reports the current volume.

## Base project
This example was ported from [ModusToolbox PSoC6 PDM-PCM Example](https://github.com/cypresssemiconductorco/mtb-example-psoc6-pdm-pcm). It is based on version v1.0.0 which uses Cypress Peripheral Driver Library (PDL), not the newer Cypress Hardware Abstraction Layer (HAL).

## Requirements

- [Mbed CLI](https://github.com/ARMmbed/mbed-cli)

## Supported Kits (Target Names)
- CY8CPROTO-062-4343W [PSoC 6 Wi-Fi BT Prototyping Kit](https://www.cypress.com/CY8CPROTO-062-4343W) (CY8CPROTO_062_4343W)

## Hardware Setup

This example uses the board's default configuration. See the kit user guide to ensure that the board is configured correctly.

**Note**: The PSoC 6 BLE Pioneer Kit and the PSoC 6 WiFi-BT Pioneer Kit ship with KitProg2 installed. ModusToolbox software requires KitProg3. Before using this code example, make sure that the board is upgraded to KitProg3. The tool and instructions are available in the [Firmware Loader](https://github.com/cypresssemiconductorco/Firmware-loader) GitHub repository. If you do not upgrade, you will see an error like "unable to find CMSIS-DAP device" or "KitProg firmware is out of date".

## Software Setup

Install a terminal emulator if you don't have one. Instructions in this document use [Tera Term](https://ttssh2.osdn.jp/index.html.en).

## Using the Code Example in Mbed CLI Tools

1. Import the code example into your mbed directory using the following mbed command:

   ```
   mbed import https://github.com/maclobdell/mbed-os-example-cy-mic
   ```
   (Temporary Home)

2. Change the working directory to the code example folder:

   ```
   cd mbed-os-example-cy-mic
   ```

3. Connect the board to your PC using the provided USB cable through the USB connector.

4. Put the kit in DAPLink mode to allow programming from Mbed CLI. See [Firmware-loader](https://github.com/cypresssemiconductorco/Firmware-loader) to learn to update the firmware and switch to DAPLink mode.

5. Compile the code and program the target board:

   ```
   mbed compile --target CY8CPROTO_062_4343W --toolchain GCC_ARM --flash --sterm
   ```

   **Note:** With the `--sterm` option, Mbed CLI opens a serial terminal with 9600-8N1 as the setting after programming completes. Do not use this option if you want to connect using another serial terminal application.

## Operation

1. After programming, touch, speak, or play any sound over the microphone. Observe that the kit's LED turns ON.

1. If the LED is always ON or blinking, without playing any sound over the microphone, press the kit's button to reset the noise threshold.
