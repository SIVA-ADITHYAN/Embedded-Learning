#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

// Initialize the LCD with the I2C address 0x3F and size 16x2
LiquidCrystal_I2C lcd(0x3F, 16, 2);

// Define the rows and columns for the keypad
const byte ROWS = 4;
const byte COLS = 4;

// Define the key map for the keypad
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'0','Z','X','Y'}
};

// Connect the keypad rows and columns to the Arduino pins
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

// Initialize the keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String default_password = "1234";  // Default password
String Entered_pass = "";  // Store the entered password
String Modify_access = "";
String new_password = "";

bool isModifying = false;  // Flag to indicate if we are modifying the password

//to work relay and buzzer
const int relay=11;
const int buz=10;

void setup() {
  // Initialize the LCD
  lcd.begin();
  
  // Turn on the backlight
  lcd.backlight();
  
  // Print a welcome message
  lcd.setCursor(0, 0);
  lcd.print("Enter Password:");
  lcd.setCursor(0, 1);

  pinMode(relay,OUTPUT);
  pinMode(buz,OUTPUT);
}

void loop() {
  // Read the key pressed
  char key = keypad.getKey();
  
  // If a key is pressed, handle it
  if (key) {
    if (key == 'Y') { // Clear key
      // Clear the display
      lcd.clear();
      // Print the welcome message again
      lcd.setCursor(0, 0);
      lcd.print("Enter Password:");
      lcd.setCursor(0, 1);
      Entered_pass = "";  // Clear the entered password
    } 
    else if (key == 'X') { // Enter key
      
      if (isModifying) {
        // Set the new password
        default_password = Entered_pass;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Password Changed");
        delay(2000);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Enter Password:");
        lcd.setCursor(0, 1);
        isModifying = false;
        Modify_access = "";
      } 
      else if (Entered_pass == default_password) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Password Matched");
        Modify_access = "Granted";
        digitalWrite(relay,HIGH);
        digitalWrite(buz,LOW);
      } 
      else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Wrong Password");
        Modify_access = "Not Granted";
        digitalWrite(buz,HIGH);
        digitalWrite(relay,LOW);
      }
      Entered_pass = "";  // Clear the entered password
    } 
    else if (Modify_access == "Granted" && key == 'Z') { // Modify password key
      isModifying = true;
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("New Password:");
      lcd.setCursor(0, 1);
      Entered_pass = "";  // Clear the entered password to store the new one
    } 
    else {
      // Display the pressed key
      lcd.print(key);
      Entered_pass += key;
    }
  }
}
