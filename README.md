Medicine Reminder Alarm Clock (IoT Project):-
The 'Medicine Reminder Alarm Clock using IoT' alerts users to take medicines on time using a buzzer, LEDs, and an LCD. It uses a real-time clock (RTC) to trigger reminders, with user confirmation via button or sensor. Missed doses notify caregivers through IoT platforms like Blynk or Firebase.


Introduction:-

The Medicine Reminder Alarm Clock is an IoT-based project designed to help users take their medicines on time. It is especially useful for elderly individuals or patients with chronic health conditions who require regular medication.

Project Description:-

This system uses a Real-Time Clock (RTC) module to trigger reminders at scheduled times. When it's time to take medicine, the device activates a buzzer, lights up an LED, and displays the medicine name or instructions on an LCD screen.

The user confirms the intake by pressing a button or using a sensor. If there is no confirmation within a set time, the system sends an alert to caregivers or family members using an IoT platform like Blynk or Firebase.

Features:-

- Real-time medicine alerts using RTC
- Visual and sound reminders (LED + buzzer)
- LCD display for medicine information
- Intake confirmation using button or sensor
- IoT-based alerts for missed doses
- Remote monitoring via Blynk or Firebase

Components Used:-

- ESP8266 or ESP32 microcontroller
- DS3231 RTC module
- LCD display (16x2 or OLED)
- Buzzer and LED
- Push button or IR sensor
- Wi-Fi module (built-in for ESP boards)
- Power source or battery backup

Working:-

1. Medicine times are set in the microcontroller code.
2. RTC keeps track of the time.
3. When the scheduled time arrives:
   - Buzzer sounds
   - LED blinks
   - LCD displays medicine details
4. User confirms medicine intake using a button or sensor.
5. If no input is received, a notification is sent through the IoT platform.

Applications:-

- Home healthcare for elderly or patients
- Hospitals or clinics for medicine scheduling
- Personal health management systems

Note:-

The system can be extended to include features like mobile app control, SMS notifications, automatic pill dispensers, and voice assistance.

