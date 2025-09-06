# Plant-Caretaker
Arduino project for automatic plant watering using moisture sensor.
# 🌱 Plant Caretaker (Arduino Project)

This project is an **automatic plant watering system** using Arduino and soil moisture sensors.  
It checks soil moisture and waters plants when required.

## ⚡ Features
- Monitors soil moisture using sensors
- Waters plants automatically
- Uses Arduino for control
- Low-cost and efficient

## 🛠 Hardware Used
- Arduino UNO………………….......................................................................
- 4-Channel Relay Module.........................................................................
- Soil Mositure Sensor……………… ..............................................................
- Soil Moisture sensor kit………… .............................................................
- Jumper Wire…………................................................................................
- Submersible Mini Water Pump…. ..........................................................
- Breadboard…………….. ............................................................................
- Battery 9 V…………………….. .....................................................................

## Tech Specs

- MICROCONTROLLER      ATmega328P
- OPERATING VOLTAGE    5V
- INPUT VOLTAGE (RECOMMENDED)   7-12V
- INPUT VOLTAGE (LIMIT)   6-20V
- DIGITAL I/O PINS   14 (of which 6 provide PWM output)
- PWM DIGITAL I/O PINS   6
- ANALOG INPUT PINS      6
- DC CURRENT PER I/O PIN  20 mA
- DC CURRENT FOR 3.3V PIN  50 mA
- FLASH MEMORY        32 KB (ATmega328P) of which 0.5 KB used by bootloader
- SRAM              2 KB (ATmega328P)
- EEPROM        1 KB (ATmega328P)
- CLOCK SPEED    16 MHz
- LED_BUILTIN    13
- LENGTH         68.6 mm
- WIDTH          53.4 mm
- WEIGHT          25 g


## Truth Table

-  InputPin 6	Input Pin 5	Input Pin 12	Input Pin 13	Output Pin 3	Output Pin 9	Output Pin 10	 Output Pin 11
-  LOW (0)	    LOW (0)	    LOW (0)	      LOW (0)	      HIGH (1)	    HIGH (1)	    HIGH (1)	     HIGH (1)
-  LOW (0)  	  LOW (0)	    LOW (0)	      HIGH (1)	    HIGH (1)	    HIGH (1)	    HIGH (1)	     LOW (0)
-  LOW (0)	    LOW (0)	    HIGH (1)	    LOW (0)	      HIGH (1)	    HIGH (1)	    LOW (0)	       HIGH (1)
-  LOW (0)	    LOW (0)	    HIGH (1)	    HIGH (1)	    HIGH (1)	    HIGH (1)	    LOW (0)	       LOW (0)
-  LOW (0)	    HIGH (1)	  LOW (0)	      LOW (0)	      HIGH (1)	    LOW (0)	      HIGH (1)	     HIGH (1)
-  LOW (0)	    HIGH (1)	  LOW (0)	      HIGH (1)	    HIGH (1)	    LOW (0)	      HIGH (1)	     LOW (0)
-  LOW (0)   	HIGH (1)	  HIGH (1)	    LOW (0)	      HIGH (1)	    LOW (0)	      LOW (0)	       HIGH (1)
-  LOW (0)	    HIGH (1)	  HIGH (1)	    HIGH (1)	    HIGH (1)	    LOW (0)	      LOW (0)	       LOW (0)
-  HIGH (1)	  LOW (0)	    LOW (0)	      LOW (0)	      LOW (0)	      HIGH (1)	    HIGH (1)	     HIGH (1)
-  HIGH (1)	  LOW (0)     LOW (0)	      HIGH (1)	    LOW (0)	      HIGH (1)	    HIGH (1)	     LOW (0)
-  HIGH (1)	  LOW (0)	    HIGH (1)	    LOW (0)	      LOW (0)	      HIGH (1)	    LOW (0)	       HIGH (1)
-  HIGH (1)	  LOW (0)	    HIGH (1)	    HIGH (1)	    LOW (0)	      HIGH (1)	    LOW (0)	       LOW (0)
-  HIGH (1)	  HIGH (1)	  LOW (0)	      LOW (0)	      LOW (0)	      LOW (0)	      HIGH (1)	     HIGH (1)
-  HIGH (1)	  HIGH (1)	  LOW (0)	      HIGH (1)	    LOW (0)	      LOW (0)	      HIGH (1)	     LOW (0)
-  HIGH (1)	  HIGH (1)	  HIGH (1)	    LOW (0)	      LOW (0)	      LOW (0)	      LOW (0)	       HIGH (1)
-  HIGH (1)	  HIGH (1)	  HIGH (1)	    HIGH (1)	    LOW (0)	      LOW (0)	      LOW (0)	       LOW (0)


## 📂 Code
The main Arduino code is in `PlantCaretaker.ino`.

## 🚀 How to Use
1. Upload `PlantCaretaker.ino` to Arduino using Arduino IDE.
2. Connect the moisture sensor and relay as per pin configuration.
3. Power the system → It will water plants automatically.

## 📜 License
This project is open-source under the MIT License.
