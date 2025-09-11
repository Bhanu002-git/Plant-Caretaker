# 🌱 Plant Caretaker – Automatic Plant Watering System

The **Plant Caretaker** is an Arduino-based project that automatically waters plants using soil moisture sensors and submersible pumps. It is designed to help people take care of plants even when they are busy or away from home.

---

## ⚡ How It Works 
- Soil moisture sensors (FC-28) are placed in the soil of each plant. 
- The sensors detect the water content and send a HIGH/LOW signal to the Arduino.
- Arduino Uno (ATmega328P) acts as the brain, reading sensor values.
- A 4-channel relay module switches ON/OFF the water pumps based on soil moisture.
- If soil is **dry**, the pump for that plant turns ON until moisture returns to normal.
- If soil is **wet**, the pump remains OFF to prevent overwatering.

**Mapping in this project:** 
- Sensor (Pin 6) → Relay (Pin 3) → Pump 1  
- Sensor (Pin 5) → Relay (Pin 9) → Pump 2  
- Sensor (Pin 12) → Relay (Pin 10) → Pump 3  
- Sensor (Pin 13) → Relay (Pin 11) → Pump 4 

---

## 🛠 Hardware Used
- Arduino UNO (ATmega328P)
- 4 × Soil Moisture Sensors (FC-28)
- 4-Channel Relay Module (5V, active LOW)
- 4 × Submersible DC Water Pumps (3–6V)
- Breadboard, jumper wires
- 9V Battery / Power Adapter
- Water reservoir

---

## 📂 Code
The Arduino sketch is in `PlantCaretaker.ino`.

Corrected logic ensures:
- **Dry soil → Pump ON**
- **Wet soil → Pump OFF**

---

## 🚀 How to Use
1. Upload `PlantCaretaker.ino` to your Arduino UNO using the Arduino IDE.
2. Connect each soil moisture sensor to a plant pot.
3. Connect relay module inputs to Arduino pins as mapped above.
4. Wire pumps to relay outputs and place them in a water reservoir.
5. Power the system (USB or 9V battery).
6. The system will automatically water each plant as required.

---

## ✅ Features
- Automatic plant watering
- Prevents both under-watering and over-watering
- Supports multiple plants
- Energy-efficient and low-cost
- Eco-friendly design

---

## 🔮 Future Improvements
- Add capacitive soil sensors to avoid corrosion
- Add water level sensor to prevent pump dry-run
- IoT integration (mobile alerts, remote monitoring)
- Solar-powered version for outdoor use

---

## 📜 License
This project is open-source under the MIT License.
