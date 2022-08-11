
int pin_cafeBueno = 5;
int pin_cafeMalo = 6;
int pin_motor = 4;
int cad;


void setup() {
  Serial.begin(9600);
  Serial.setTimeout(1);
  pinMode(pin_cafeBueno, OUTPUT);
  pinMode(pin_cafeMalo, OUTPUT);
  digitalWrite(pin_cafeBueno, LOW);
  digitalWrite(pin_cafeMalo, LOW);

}

//int vmot=0,vled=0;
//String cad,cad1,cad2;
void loop() {
  
     
     //pos = cad.indexOf(',');
     //cad1= cad.substring(0,pos);
     //cad2= cad.substring(pos+1);
     /*
     if(vled != cad1.toInt()){
      vled = cad1.toInt();
      digitalWrite(pin_cafeBueno,vled);
      digitalWrite(pin_cafeMalo,LOW);
     }
     */
     while (!Serial.available());
     cad = Serial.readString().toInt();
     //vled = cad.toInt();
     //cad = cad+ " Pasa prueba";
     //Serial.println(vled);
     if(cad ==1){
      Serial.println("Prendi bueno");
      digitalWrite(pin_cafeBueno,HIGH);
      digitalWrite(pin_cafeMalo,LOW);
    }
    else if (cad ==0){
      digitalWrite(pin_cafeBueno,LOW);
      digitalWrite(pin_cafeMalo,HIGH);;
      Serial.println("Prendi malo");
    }
    else{
    digitalWrite(pin_cafeBueno,LOW);
    digitalWrite(pin_cafeMalo,LOW);
    }
  
  //digitalWrite(pin_cafeBueno,HIGH);
  //digitalWrite(pin_cafeMalo,HIGH);
}
