//www.elbrujitocanaio.es
//Todo el código esta bajo licencia de la Creative Commons.
//Puedes ver como se hace en la web
#define Buzzer 9 //Pin para el buzzer
#define buzSonidoLargo 60 //Duracion sonido largo 0 a 255
#define buzSonidoCorto 80//Duracion sonido corto 0 a 255
void setup() {
 pinMode (Buzzer,OUTPUT);//declaro pin salida buzzer

}
/////////////////////////////////////////////////////////////////////
////////////////////////////////////Funcion alarma
void Alarma (int buzsonidolargo,int buzsonidocorto, int buzzer){//Notece todas las varibles minusculas
  unsigned char x,y;//Variables de 0 a 255 para bucles
  while (y < 10){
    for(x=0;x<buzsonidolargo;x++){
       digitalWrite(buzzer,HIGH);//Sonido
       delay(1);//delay1ms
       digitalWrite(buzzer,LOW);//Apaga sonido
       delay(1);//1ms 
      }
     for(x=0;x<buzsonidocorto;x++){
      digitalWrite(buzzer,HIGH);//Sonido
      digitalWrite(buzzer,LOW);//Apaga Sonido
      delay(2);//2ms 
      }
      y++; 
    }
  
  }

void loop() {
  Alarma(buzSonidoLargo,buzSonidoCorto,Buzzer);
delay (5000);//Hace parada de 5 segundos
}
