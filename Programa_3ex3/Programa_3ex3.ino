/*************************************************************************
**                                                                      **
**                            Progrema 3 ex. 3                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
int Lf = 6;
int Lg = 7;
int Le = 8;
int Ld = 9;
int Lc = 10;
int Lb = 11;
int La = 12;  //Localització dels ports


//****** secup ***********************************************************
void setup() {
 pinMode(Lf, OUTPUT);
 pinMode(Lg, OUTPUT);
 pinMode(Le, OUTPUT);
 pinMode(Ld, OUTPUT);
 pinMode(Lc, OUTPUT);
 pinMode(Lb, OUTPUT);
 pinMode(La, OUTPUT);
}


//****** Loop ************************************************************
void loop() {

digitalWrite(La, HIGH); //J
digitalWrite(Lb, LOW);
digitalWrite(Lc, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lf, HIGH);
digitalWrite(Lg, HIGH);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, LOW); //0
digitalWrite(Lb, LOW);
digitalWrite(Lc, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Lg, HIGH);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, LOW); //A
digitalWrite(Lb, LOW);
digitalWrite(Lc, LOW);
digitalWrite(Ld, HIGH);
digitalWrite(Lf, LOW);
digitalWrite(Lg, LOW);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, HIGH); //N
digitalWrite(Lb, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Ld, HIGH);
digitalWrite(Lf, HIGH);
digitalWrite(Lg, LOW);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

}
