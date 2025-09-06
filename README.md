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
- Arduino UNO
- Soil Moisture Sensor
- Relay Module
- Water Pump
- Jumper Wires
- Power Supply
  
## Truth Table
-🔹 Truth Table
InputPin 6	Input Pin 5	Input Pin 12	Input Pin 13	Output Pin 3	Output Pin 9	Output Pin 10	 Output Pin 11
LOW (0)	    LOW (0)	    LOW (0)	      LOW (0)	      HIGH (1)	    HIGH (1)	    HIGH (1)	     HIGH (1)
LOW (0)  	  LOW (0)	    LOW (0)	      HIGH (1)	    HIGH (1)	    HIGH (1)	    HIGH (1)	     LOW (0)
LOW (0)	    LOW (0)	    HIGH (1)	    LOW (0)	      HIGH (1)	    HIGH (1)	    LOW (0)	       HIGH (1)
LOW (0)	    LOW (0)	    HIGH (1)	    HIGH (1)	    HIGH (1)	    HIGH (1)	    LOW (0)	       LOW (0)
LOW (0)	    HIGH (1)	  LOW (0)	      LOW (0)	      HIGH (1)	    LOW (0)	      HIGH (1)	     HIGH (1)
LOW (0)	    HIGH (1)	  LOW (0)	      HIGH (1)	    HIGH (1)	    LOW (0)	      HIGH (1)	     LOW (0)
LOW (0)   	HIGH (1)	  HIGH (1)	    LOW (0)	      HIGH (1)	    LOW (0)	      LOW (0)	       HIGH (1)
LOW (0)	    HIGH (1)	  HIGH (1)	    HIGH (1)	    HIGH (1)	    LOW (0)	      LOW (0)	       LOW (0)
HIGH (1)	  LOW (0)	    LOW (0)	      LOW (0)	      LOW (0)	      HIGH (1)	    HIGH (1)	     HIGH (1)
HIGH (1)	  LOW (0)     LOW (0)	      HIGH (1)	    LOW (0)	      HIGH (1)	    HIGH (1)	     LOW (0)
HIGH (1)	  LOW (0)	    HIGH (1)	    LOW (0)	      LOW (0)	      HIGH (1)	    LOW (0)	       HIGH (1)
HIGH (1)	  LOW (0)	    HIGH (1)	    HIGH (1)	    LOW (0)	      HIGH (1)	    LOW (0)	       LOW (0)
HIGH (1)	  HIGH (1)	  LOW (0)	      LOW (0)	      LOW (0)	      LOW (0)	      HIGH (1)	     HIGH (1)
HIGH (1)	  HIGH (1)	  LOW (0)	      HIGH (1)	    LOW (0)	      LOW (0)	      HIGH (1)	     LOW (0)
HIGH (1)	  HIGH (1)	  HIGH (1)	    LOW (0)	      LOW (0)	      LOW (0)	      LOW (0)	       HIGH (1)
HIGH (1)	  HIGH (1)	  HIGH (1)	    HIGH (1)	    LOW (0)	      LOW (0)	      LOW (0)	       LOW (0)


## 📂 Code
The main Arduino code is in `PlantCaretaker.ino`.

## 🚀 How to Use
1. Upload `PlantCaretaker.ino` to Arduino using Arduino IDE.
2. Connect the moisture sensor and relay as per pin configuration.
3. Power the system → It will water plants automatically.

## 📜 License
This project is open-source under the MIT License.
