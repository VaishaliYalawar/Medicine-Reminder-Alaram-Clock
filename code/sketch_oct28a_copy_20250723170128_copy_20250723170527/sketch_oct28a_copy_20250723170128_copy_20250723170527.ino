#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

// GSM module setup on pins 2 and 3
SoftwareSerial gsm(2, 3);

// LCD setup on analog pins A0 to A5
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

// Define pins for voice outputs and LED
#define VOICE1 4
#define VOICE2 5
#define VOICE3 6
#define VOICE4 7
#define LED 13

// Function to send SMS
void SendSMS(String data) {
  gsm.print("AT+CMGF=1\r");  // Set SMS mode to text
  delay(1000);  
  gsm.print("AT+CMGS=\"+917517262091\"\r");  // Replace with target mobile number
  delay(1000);
  gsm.print(data);  // Send the SMS content
  gsm.print("\r");
  delay(1000);
  gsm.write(0x1A);  // Ctrl+Z to send the message
}

void setup() {
  gsm.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0); lcd.print("MEDICINE");
  lcd.setCursor(0, 1); lcd.print("REMINDER");
  
  // Set voice and LED pins as outputs
  pinMode(VOICE1, OUTPUT);
  pinMode(VOICE2, OUTPUT);
  pinMode(VOICE3, OUTPUT);
  pinMode(VOICE4, OUTPUT);
  pinMode(LED, OUTPUT);
  
  // Turn off all voice outputs initially
  off();

  Serial.begin(9600);
  delay(3000);
  lcd.clear();
}

// Function to turn off all voice outputs
void off() {
  digitalWrite(VOICE1, HIGH);
  digitalWrite(VOICE2, HIGH);
  digitalWrite(VOICE3, HIGH);
  digitalWrite(VOICE4, HIGH);  
}

// Functions to activate each voice output
void Voice1() { off(); digitalWrite(VOICE1, LOW); }
void Voice2() { off(); digitalWrite(VOICE2, LOW); }
void Voice3() { off(); digitalWrite(VOICE3, LOW); }
void Voice4() { off(); digitalWrite(VOICE4, LOW); }

void loop() {
  // Reminder 1: CROSIN TABLET
  lcd.clear();
  lcd.setCursor(0, 0); lcd.print("PLZ TAKE");
  lcd.setCursor(1, 1); lcd.print("CROSIN TABLET");
  SendSMS("MEDICINE REMINDER: PLZ TAKE CROSIN TABLET");
  Voice1();
  delay(2000);
  off();
  delay(6000);

  // Reminder 2: BP TABLET
  lcd.clear();
  lcd.setCursor(0, 0); lcd.print("PLZ TAKE");
  lcd.setCursor(1, 1); lcd.print("BP TABLET");
  SendSMS("MEDICINE REMINDER: PLZ TAKE BP TABLET");
  Voice2();
  delay(2000);
  off();
  delay(9000);

  // Reminder 3: CALCIUM TABLET
  lcd.clear();
  lcd.setCursor(0, 0); lcd.print("PLZ TAKE");
  lcd.setCursor(1, 1); lcd.print("CALCIUM TABLET");
  SendSMS("MEDICINE REMINDER: PLZ TAKE CALCIUM TABLET");
  Voice3();
  delay(2000);
  off();
  delay(9000);

  // Reminder 4: VITAMIN TABLET
  lcd.clear();
  lcd.setCursor(0, 0); lcd.print("PLZ TAKE");
  lcd.setCursor(1, 1); lcd.print("VITAMIN TABLET");
  SendSMS("MEDICINE REMINDER: PLZ TAKE VITAMIN TABLET");
  Voice4();
  delay(2000);
  off();
  delay(9000);
}
