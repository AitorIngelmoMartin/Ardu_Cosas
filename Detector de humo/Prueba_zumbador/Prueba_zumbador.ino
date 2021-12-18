//www.elegoo.com
//2016.12.08
int activacion = 2;
int buzzer = 12;//the pin of the active buzzer
int lectura =0;
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
 pinMode(activacion, INPUT);
}
void loop()
{
 unsigned char i;
 while(1)
 {
  lectura = digitalRead(activacion);
  if (lectura == HIGH){
      digitalWrite(buzzer,HIGH);
      delay(100);//wait for 1ms
      digitalWrite(buzzer,LOW);
      delay(100);//wait for 1ms
        
   }else{
        digitalWrite(buzzer,HIGH);
        delay(2000);//wait for 2ms
        digitalWrite(buzzer,LOW);
        delay(2000);//wait for 2ms
      
  }    
    }

} 
