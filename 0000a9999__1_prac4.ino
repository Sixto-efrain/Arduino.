//@SIXTO
int t=10;

int Display1[]={13,12,11,10,9,8,7};

byte codigo[]= {
  0b00111111,//0 0x3f
  0b00000110,//1 0x06
  0b01011011,//2 0x5b
  0b01001111,//3 0x4f
  0b01100110,//4 0x66
  0b01101101,//5 0x6d
  0b01111101,//6 0x7d
  0b00000111,//7 0x07
  0b01111111,//8 0x7f
  0b01100111,//9 0x67
};

void setup() {
  for(int c=0;c<7;c++){
  pinMode(Display1[c],OUTPUT);
 }   
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
}
void loop() {
  for(int m=0; m<10; m++)
  for(int c=0; c<10; c++)
  for(int d=0; d<10; d++)
  for(int u=0; u<10; u++)
  for(int R=0; R<2; R++){
     digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);//OFF
     
     Dibujo(u);digitalWrite(3,0); delay(t);
  
    digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);//OFF
     
     Dibujo(d);digitalWrite(4,0); delay(t);
  
     digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);//OFF
     
     Dibujo(c);digitalWrite(5,0); delay(t);
  
     digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);//OFF
     
     Dibujo(m);
     digitalWrite(6,0);
     delay(t);
  
     digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);//OFF
  }
}



void Dibujo(int numero){
  byte Valorbit=codigo[numero];
  for (int i=0; i<7; i++){
    int bit= bitRead(Valorbit,i);
    digitalWrite(Display1[i],bit);
  }
}



 