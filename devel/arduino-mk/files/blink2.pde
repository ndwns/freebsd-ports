/* @(#) $Id$ (XSE) */

/*
 * This is a example sketch that blinks the LED like a heartbeat
 */

/* SCK is usually connected to the LED */
#define PIN_LED_OUT SCK

void
setup()
{
	pinMode(PIN_LED_OUT, OUTPUT);
}

void
loop()
{
	digitalWrite(PIN_LED_OUT, HIGH);
	delay(25);

	digitalWrite(PIN_LED_OUT, LOW);
	delay(50);

	digitalWrite(PIN_LED_OUT, HIGH);
	delay(25);

	digitalWrite(PIN_LED_OUT, LOW);
	delay(900);
}
