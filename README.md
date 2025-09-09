# Feetech-ST3215-Motors

Code and examples for setting up and controlling Feetech STS3215 serial bus servos. Demonstrates assigning IDs, sending position/velocity commands, and managing multiple motors over UART with an ESP32/Arduino. Uses skills in embedded systems, robotics, and motor control.

This repository contains example code and documentation for setting up and controlling six Feetech STS3215 serial bus servos using the Seeed Studio XIAO ESP32S3 Sense microcontroller.
**The project demonstrates how to:**
- Assign unique IDs to each servo using the Feetech Bus Servo Driver board.
- Send position and velocity commands to individual servos over UART with an ESP32/Arduino.
- Test each servo by moving it independently with the provided sample code.
- Prepare for future extensions such as voice-controlled robotics using the onboard microphone and AI capabilities of the XIAO ESP32S3 Sense.

**Hardware**
- [Feetech STS3215 Serial Bus Servos](https://www.seeedstudio.com/STS3215-19kg-cm-7-4V-Serial-Servo-p-6338.html)
- [Feetech Bus Servo Driver Board](https://www.seeedstudio.com/Bus-Servo-Driver-Board-for-XIAO-p-6413.html)
  - Required to manage multiple servos on a single UART line by providing power distribution and ID assignment.
- [Seeed Studio XIAO ESP32S3 Sense](https://www.seeedstudio.com/Seeed-Studio-XIAO-ESP32S3-Sense-Pre-Soldered-p-6335.html)
  - Acts as the main controller, provides Wi-Fi/Bluetooth connectivity, and includes onboard microphone and camera interface for future projects.

**Getting Started**

**Hardware Setup**
- Connect the Feetech STS3215 servos to the Feetech Bus Servo Driver Board.
- Place the Seeed XIAO ESP32S3 Sense onto the driver board header.
- Power the board and servos according to the Feetech documentation.

**Software Setup**
- Install Arduino IDE.
- Install the Seeed Studio XIAO ESP32S3 board support in the Arduino Boards Manager.
- Clone this repository:
- git clone https://github.com/yourusername/feetech-sts3215-esp32s3.git
- cd feetech-sts3215-esp3
- Open the provided .ino file in Arduino IDE.
- Upload to your XIAO ESP32S3 Sense.

License
This project is licensed under the MIT License. You are free to use, modify, and share it.
