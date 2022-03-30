const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void setup() {
	pinMode(MY_LED, OUTPUT);
}

void loop() {
    
    //beggining of my first name
    //Letter R
    
    //dot in morse code
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	//dash in morse code
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	// delay of 2 secodns is to break up each letter in the word
	delay(2s);
	
	//Letter I
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter L
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter E
    digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter Y
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	//3 Second delay as this is the end of the word
	delay(3s);
	
	//Last names code is below.
	//Letter S
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter H
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter A
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter N
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter N
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter O
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(2s);
	
	//Letter N
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(3s);
}