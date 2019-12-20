int value;
float mv,rh;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value= analogRead (0);
mv=(value/1024.0)*5000.0;
rh= mv/10.0;
Serial.print("Relative_Humidity= "); 
Serial.println(rh);
//Serial.println('%');
delay(3000);
}
