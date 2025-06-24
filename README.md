# SMART BIJUKA – DigiKhet Protector   
### A Smart, Solar-Powered Digital Scarecrow

---

## Project Overview

**Smart Bijuka** is a low-cost, IoT-based smart scarecrow designed to automatically protect farmlands from animals and birds. Unlike traditional scarecrows, it uses **motion sensors, sound playback, servo movements, and mobile alerts** to actively deter intruders from crop areas. The system is powered by solar energy and optimized for small to medium-scale Indian farmers.

This project was selected for the **Final Round of HackOrbit 2025 – National Hackathon** under the AGRITECH INNOVATORS category.

---

## Problem Statement

- Traditional scarecrows are passive and ineffective.
- Birds and stray animals continue to damage crops.
- Farmers manually guard their fields, losing time and productivity.
- No affordable smart deterrent systems exist for small-scale farmers.
- Crop loss leads to financial strain.

---

## Proposed Solution

Smart Bijuka replaces outdated methods with a **smart and automated response system**:
- Detects intrusion via **PIR motion sensor**
- **Waves scarecrow arms** using servo motors
- **Plays loud human voice** to scare animals (e.g., “Oye bhaag ja!”)
- Sends **real-time alerts** to farmer’s mobile via Blynk app
- Entirely **solar-powered**, works day and night
- All electronics enclosed in a **weatherproof box**

---

## System Flow

1. **Intrusion Detection**  
   PIR sensor detects motion in 15–20 meter range (300–350 sq.m. area).

2. **Trigger Control Unit**  
   ESP8266 (or ESP32) processes input from PIR and sends commands to actuators.

3. **Voice + Motion Reaction**  
   DFPlayer Mini plays voice lines via speaker.  
   Servo motors simulate scarecrow arm movement.  
   DC motor (optional) may rotate scarecrow base.

4. **Real-Time Alert**  
   Blynk app sends notification to farmer instantly.

5. **Solar Power Supply**  
   10W–20W solar panel charges a 12V battery to power the system day and night.

---

## Features & Innovation

- **IoT-enabled alert system** using Blynk
- **Voice deterrent** via DFPlayer Mini
- **Servo-controlled arms** mimic human motion
- **100% solar-powered**, no external electricity needed
- Works **offline** (core system) + online (alerts)
- Total cost under ₹6500 – affordable for rural farmers
- Tested and **preferred by 85% farmers** in pilot survey
- **Modular & customizable** – supports future AI, camera, irrigation

---

## Bill of Materials (BOM)

| Component             | Qty | Approx. Cost (INR) |
|----------------------|-----|--------------------|
| ESP8266 / ESP32      | 1   | ₹350               |
| PIR Motion Sensor    | 1   | ₹200               |
| DFPlayer Mini        | 1   | ₹250               |
| Speaker (8Ω, 3W)     | 1   | ₹100               |
| Servo Motors         | 2   | ₹400               |
| 12V Battery          | 1   | ₹1000              |
| Solar Panel (10W–20W)| 1   | ₹1200              |
| Misc. (wires, casing, SD card) | – | ₹1000     |
| **Total Cost**       |     | **₹6500 approx.**  |

---

## Arduino Code

Arduino source code is available in the repository as `Smart_Bijuka.ino`.

It handles:
- Motion detection (PIR)
- Servo movement
- Voice playback (DFPlayer Mini)
- Blynk alert logging
- Motor activation

---

## Images & Circuit Diagram

You can view:
- Prototype images in `/images/`
- Wiring diagram in `/circuit_diagram.png` 

---

## Future Scope

- Add animal-type recognition using ESP32-CAM + AI
- GPS tracking + farm coverage mapping
- Smart irrigation integration
- Voice localization in regional languages
- LoRa/mesh networks for remote area alerting

---

## Patent Status

This project is **original and patentable**.  
A **provisional patent application is in process** under the name of the innovator **Pravash Singh**.

Any commercial use or replication without prior permission is not allowed.

---

## Author

**Pravash Singh**  
B.Tech CSE (AI/ML), ITM University  
Email: pravashs775@gmail.com  
Phone: +91 9165031422  
HackOrbit Finalist | IEEE AgriTech Innovator 2025

---

## License

This project is licensed under the **MIT License** – free to use, modify, and distribute with credit.

---

### Thank you for visiting this repository!  
Let's make agriculture smarter, safer, and sustainable! 



