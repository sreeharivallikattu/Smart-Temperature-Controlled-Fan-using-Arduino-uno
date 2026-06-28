# Smart Temperature-Controlled Fan System using Arduino UNO

## Project Overview

The Smart Temperature-Controlled Fan System is an embedded systems project developed using Arduino UNO. The system automatically monitors temperature using a thermistor sensor and controls a DC fan based on the detected temperature levels. An RGB LED is used to visually indicate the temperature condition.

This project demonstrates the practical implementation of:

* Analog sensor interfacing
* Motor driver control
* PWM concepts
* Embedded automation
* Real-time monitoring systems

# Objectives

* To measure surrounding temperature using a thermistor.
* To automatically control a DC fan according to temperature conditions.
* To provide visual temperature indication using RGB LED.
* To understand motor driver interfacing using L293D.
* To gain experience in Arduino-based embedded systems development.

# Components Used

| Component              | Quantity |
| ---------------------- | -------- |
| Arduino UNO            | 1        |
| Thermistor (NTC 103)   | 1        |
| RGB LED (Common Anode) | 1        |
| L293D Motor Driver IC  | 1        |
| DC Motor               | 1        |
| 10kΩ Resistor          | 1        |
| 220Ω Resistors         | 3        |
| 10µF Capacitor         | 1        |
| Breadboard             | 1        |
| Jumper Wires           | Multiple |
| External 6V Battery    | 1        |

# Working Principle

The thermistor continuously senses temperature and sends analog voltage data to the Arduino UNO through analog pin A0.

Based on the sensor value:

* Blue LED indicates cold condition.
* Green LED indicates normal condition.
* Red LED indicates high temperature.

The Arduino processes the analog readings and controls the DC motor through the L293D motor driver IC.

The motor acts as a cooling fan and automatically turns ON when temperature increases.

## Project Demo Video

Watch demo video here: https://youtube.com/shorts/8huVIIXQOJM?feature=share

## Thermistor Connections

* One thermistor pin → 5V
* Other thermistor pin → A0
* 10kΩ resistor between A0 and GND

---

## RGB LED Connections (Common Anode)

| RGB Pin    | Arduino Connection        |
| ---------- | ------------------------- |
| Common Pin | 5V                        |
| Red Pin    | D9 through 220Ω resistor  |
| Green Pin  | D10 through 220Ω resistor |
| Blue Pin   | D11 through 220Ω resistor |

---

## L293D Connections

| L293D Pin      | Connection            |
| -------------- | --------------------- |
| Pin 16         | Arduino 5V            |
| Pin 8          | External 6V Battery + |
| Pins 4,5,12,13 | GND                   |
| Pin 1          | Arduino D5            |
| Pin 2          | Arduino D6            |
| Pin 3          | Motor Terminal 1      |
| Pin 6          | Motor Terminal 2      |

---

# Software Logic

The Arduino continuously reads analog values from the thermistor.

Temperature conditions are categorized into three ranges:

| Condition | RGB Color | Fan Status |
| --------- | --------- | ---------- |
| Cold      | Blue      | OFF        |
| Normal    | Green     | ON         |
| Hot       | Red       | ON         |

Sensor averaging was implemented to reduce fluctuations and improve stability.


# Challenges Faced

During development, several practical issues were encountered:

* Motor startup torque limitations
* PWM humming noise
* Sensor fluctuations due to motor noise
* Voltage instability during motor operation

These issues were analyzed and partially solved using:

* External power supply
* Capacitor filtering
* Sensor averaging techniques


# Applications

* Smart cooling systems
* Temperature monitoring systems
* Automatic ventilation systems
* Embedded automation projects
* Industrial monitoring prototypes


# Future Improvements

Future enhancements for this project include:

* LCD temperature display
* IoT-based remote monitoring
* Mobile app integration
* Advanced motor speed control
* DHT11/DHT22 digital temperature sensors


# Learning Outcomes

Through this project, the following concepts were learned:

* Arduino programming
* Embedded systems fundamentals
* Analog-to-digital conversion
* Voltage divider circuits
* Sensor interfacing
* Motor driver interfacing
* PWM concepts
* Hardware debugging

# Conclusion

The Smart Temperature-Controlled Fan System successfully demonstrates automatic environmental monitoring and control using Arduino UNO.

The project integrates sensors, actuators, and embedded programming to create a simple automation system capable of responding dynamically to temperature changes.

This project provided practical exposure to embedded systems design, hardware interfacing, and real-world debugging challenges.

