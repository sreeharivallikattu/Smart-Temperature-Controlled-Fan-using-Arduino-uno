// Thermistor pin
const int thermistorPin = A0;

// RGB pins (COMMON ANODE RGB)
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Motor driver pins
const int enablePin = 5;
const int input1 = 6;

void setup() {

  // RGB pins
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Motor pins
  pinMode(enablePin, OUTPUT);
  pinMode(input1, OUTPUT);

  // Motor direction
  digitalWrite(input1, HIGH);

  Serial.begin(9600);
}

void loop() {

  // Averaging for stable readings
  int total = 0;

  for(int i = 0; i < 10; i++) {

    total += analogRead(thermistorPin);
    delay(5);
  }

  int value = total / 10;

  Serial.println(value);

  // HOT CONDITION
  if(value > 700) {

    // RED
    setColor(255,0,0);

    // Fan FULL SPEED
    analogWrite(enablePin,255);
  }
    
  // NORMAL CONDITION
  else if(value > 550) {

    // GREEN
    setColor(0,255,0);

    // Fan MEDIUM SPEED
    analogWrite(enablePin,220);

    // If your motor supports lower PWM,
    // replace 255 with:
    // 220 or 200
  }

  // COLD CONDITION
  else {

    // BLUE
    setColor(0,0,255);

    // Fan OFF
    digitalWrite(enablePin,LOW);
  }

  delay(100);
}

void setColor(int red, int green, int blue) {

  analogWrite(redPin, 255 - red);
  analogWrite(greenPin, 255 - green);
  analogWrite(bluePin, 255 - blue);
}
