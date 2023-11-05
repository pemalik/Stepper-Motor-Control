void setup() {
  // put your setup code here, to run once:
 pinMode(2,INPUT); // Yellow encoder wire
  pinMode(3,INPUT); // White encoder wire
  pinMode(5,OUTPUT); // IN1 of Red Board
  pinMode(6,OUTPUT); // IN2 of Red Board
  
 

  Serial.begin(9600);
  delay(1000);  // Give time to open serial plotter after uploading sketch
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(5,0);
analogWrite(6,0);
delay(100);
analogWrite(5,40);
analogWrite(6,0);
delay(250);
analogWrite(5,60);
analogWrite(6,0);
delay(500);
analogWrite(5,100);
analogWrite(6,0);
delay(250);
analogWrite(5,120);
analogWrite(6,0);
delay(250);
analogWrite(5,160);
analogWrite(6,0);
delay(250);
analogWrite(5,180);
analogWrite(6,0);
delay(5250);
analogWrite(5,160);
analogWrite(6,0);
delay(250);
analogWrite(5,120);
analogWrite(6,0);
delay(250);
analogWrite(5,100);
analogWrite(6,0);
delay(250);
analogWrite(5,80);
analogWrite(6,0);
delay(250);
analogWrite(5,60);
analogWrite(6,0);
delay(250);
analogWrite(5,40);
analogWrite(6,0);
delay(500);
analogWrite(5,0);
analogWrite(6,0);
delay(100);

while(true);
}
