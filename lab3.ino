// C++ code
//
int sensor=0;
void setup()
{
  pinMode(A0, INPUT);
    pinMode(5, OUTPUT);
    pinMode(7, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  sensor=analogRead(A0);
  Serial.print("Monitered value by gas sensor:");
  Serial.println(sensor);
  if(sensor>50){
    
  digitalWrite(5, HIGH);
  }
  else{
     digitalWrite(5, LOW);
  }
  if(sensor>60){
     digitalWrite(7, HIGH);
  }
  else{
     digitalWrite(7, LOW);
  }
  
  delay(100); // Wait for 1000 millisecond(s)
  
}