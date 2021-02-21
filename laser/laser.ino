void setup()
{
    pinMode(9, OUTPUT);
}
void loop()
{
    for (int pos = 0; pos <= 255; pos += 1)
    {
        analogWrite(9, pos);
        delay(10);
    }
    for (int pos = 255; pos >= 0; pos -= 1)
    {
        analogWrite(9, pos);
        delay(10);
    }
}