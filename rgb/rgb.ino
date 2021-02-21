int redpin = 11;   //select the pin for the red LED
int greenpin = 10; // select the pin for the green LED
int bluepin = 9;   // select the pin for the  blue LED

int val;

void setup()
{
    pinMode(redpin, OUTPUT);
    pinMode(bluepin, OUTPUT);
    pinMode(greenpin, OUTPUT);
}

void loop()
{
    for (val = 255; val > 0; val--)
    {
        analogWrite(11, val);
        analogWrite(10, 0);
        analogWrite(9, 0);
        delay(5);
    }
    for (val = 255; val > 0; val--)
    {
        analogWrite(11, 0);
        analogWrite(10, val);
        analogWrite(9, 0);
        delay(5);
    }
    for (val = 255; val > 0; val--)
    {
        analogWrite(11, 0l);
        analogWrite(10, 0);
        analogWrite(9, val);
        delay(5);
    }
}
