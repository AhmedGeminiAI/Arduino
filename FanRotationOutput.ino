#include <Servo.h>
Servo servo; // Create a servo object to control the servo

void setup() {
    servo.attach(5); // Attach the servo to pin 5
    servo.write(0); // Set the initial position (0 degrees)
}

void loop() {
    // Rotate the servo continuously in one direction (maximum speed)
    for (int angle = 0; angle <= 360; angle += 1) {
        servo.write(angle); // Control servo to go to position in variable 'angle'
        delay(10000); // Wait 10ms for the servo to reach the position
    }
}
