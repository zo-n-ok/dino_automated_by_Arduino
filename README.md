🦖 Automated Dino (T-Rex) Game using Arduino 🎮
📌 Description
This project automates the popular Google Chrome Dino (T-Rex) game using an Arduino board. It detects obstacles and simulates key presses to help the Dino jump automatically, achieving a high score without manual input.
🔧 Components Needed

🛠️ Arduino Uno (or compatible board)
🔄 Servo motor
🌞 LDR (Light Dependent Resistor) or IR sensor
🔌 Jumper wires
🛠️ Breadboard
🔋 USB cable for Arduino
💻 Computer with Arduino IDE

⚙️ How It Works

🕵️‍♂️ The sensor detects obstacles (e.g., cacti in the Dino game).
🔧 The Arduino processes the input and triggers the servo motor.
🎯 The servo simulates a spacebar press, making the Dino jump.

🛠️ Setup Instructions

💾 Install Arduino IDE: Download and install from arduino.cc.
🔌 Connect the Arduino: Plug the Arduino into your computer using a USB cable.
⬆️ Upload the Code: Open the .ino file in the Arduino IDE and upload it to the board.
🔧 Assemble the Circuit: Connect the sensor and servo motor as per the wiring diagram in the code comments.
🎮 Start the Game: Open Chrome, go to chrome://dino, and let the automation begin!

📝 Code Explanation
The code reads sensor values and triggers the servo to "press" the spacebar when an obstacle is detected. It includes a threshold value to differentiate between obstacles and background.
🎛️ Customization

🔧 Adjust Sensor Sensitivity: Tweak the threshold value in the code for different lighting conditions.
⏳ Change Servo Timing: Modify the servo delay for a faster or slower jump.

🔓 License
This project is open-source under the MIT License. Feel free to modify and share!

🏁 Happy high-scoring Dino running! 🦖✨
