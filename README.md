# Arduino-Motor-Control-LCD-Display
An Arduino-based motor control system with LCD display showing real-time sensor data. Features interrupt-driven motor direction control and analog sensor monitoring.
# 📖 Overview
This project implements an Arduino-based motor control system that features:

- Bidirectional DC motor control
- Real-time sensor data display on LCD
- Interrupt-based motor direction switching
- Analog sensor monitoring

# 🛠 Hardware Components
- Arduino Uno
- 16x2 LCD Display
- DC Motors (x2)
- Motor Driver (L298N or similar)
- Potentiometers (x2) for analog input
- Push button for interrupt

# 🔌 Connections
| Arduino Pin | Component            |
|-------------|----------------------|
| 0, 1, 3-6   | LCD Display          |
| 8-13        | Motor Control        |
| A0, A1      | Potentiometers       |
| Digital 2   | Interrupt Button     |

# 📋 Code Features
- **Motor Control:** Controls two DC motors with direction switching
- **Interrupt Handling:** Uses RISING edge interrupt on pin 2 to change motor direction
- **LCD Display:** Shows motor direction status and analog sensor values
- **Real-time Monitoring:** Displays potentiometer values converted to voltage (0-5V)

# 🚀 Usage
1. Upload the code to Arduino.
2. Motors will run in initial direction (CCW/CW).
3. Press the interrupt button to reverse both motors' directions.

**LCD displays:**
- Line 1: Motor direction status
- Line 2: Potentiometer values (0-5V scale)

# ⚙️ Configuration
- **Interrupt pin:** Digital 2 (INT0)
- **Motor pins:** 8-13 (Direction and PWM control)
- **Sensor pins:** A0, A1 (Analog inputs)

# 🔧 Customization
- Adjust PWM values (currently 255) in analogWrite() calls for speed control.
- Modify interrupt trigger condition in attachInterrupt().
- Change voltage calculation formula for different reference voltages.

# 📊 Display Information
- Line 1: Motor direction ("CCW CW" or "CW CCW")
- Line 2: Left sensor voltage and right sensor voltage

# 🎯 Applications
- Robotics projects
- Motor control systems
- Sensor monitoring displays
- Educational demonstrations

# 📝 License
Open source - feel free to modify and distribute.

# ⚠️ Notes
- Ensure proper motor driver is used to handle current requirements.
- Add delay if needed for switch debouncing.
- Adjust voltage calculations if using different reference voltage.
