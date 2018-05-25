/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const int led8 = 13;         // donar nom al pin 12 de l’Arduino
const int led9 = 14;         // donar nom al pin 12 de l’Arduino
const int led10 = 15;         // donar nom al pin 12 de l’Arduino
const int led11 = 16;         // donar nom al pin 12 de l’Arduino
const int led12 = 17;         // donar nom al pin 12 de l’Arduino
const int led13 = 18;         // donar nom al pin 12 de l’Arduino
const int led14 = 19;         // donar nom al pin 12 de l’Arduino




//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:

 int i;
    for (i=0; i&lt; lineSize; i++)
    {
      pinMode(pinArray[i], OUTPUT);
    } 

}
//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:
int i;
     int tailCounter = tailLength; // Se establece un contador con los LEDS 
                                   //que deben encenderse al mismo tiempoI set up the tail length in a counter
     for (i=0; i&lt;lineSize; i++)
     {
      digitalWrite(pinArray[i],HIGH); // Se enciende tailLength LEDs de forma consecutiva
      delay(waitStart); // Controla la rapidez de encendido de cada LED
      if (tailCounter == 0)
      {
        digitalWrite(pinArray[i-tailLength],LOW); // Apaga los LEDs de la cola hacia atrás
      }
      else
         if (tailCounter &gt; 0)
            tailCounter--;
      }
      for (i=(lineSize-tailLength); i&lt;lineSize; i++)
      {
       digitalWrite(pinArray[i],LOW); // Apague los LEDs restantes
       delay(waitStart); // Controla la rapidez con que se apagan los LEDs
      }
  }


//***************************FUNCIONS****************************
