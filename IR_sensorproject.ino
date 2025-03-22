const int irSensor = 7;  
const int ledPin = 13;  
const int buzzer = 12;   

void setup() {
    pinMode(irSensor, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int sensorState = digitalRead(irSensor);

    if (sensorState == LOW) { 
        digitalWrite(ledPin, HIGH);
        digitalWrite(buzzer, HIGH);
        Serial.println("Object Detected!");
    } else {  
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzer, LOW);
        Serial.println("No Object Detected.");
    }
    
    delay(500);  
}
