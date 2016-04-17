/*************************************************************************
**                                                                      **
**                            Progrema 3 ex. 1                          **
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

digitalWrite(La, LOW); //0
digitalWrite(Lb, LOW);
digitalWrite(Lc, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Lg, HIGH);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, HIGH); //1
digitalWrite(Ld, HIGH);
digitalWrite(Le, HIGH);
digitalWrite(Lf, HIGH);
digitalWrite(Lg, HIGH);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Lc, HIGH); //2
digitalWrite(La, LOW);
digitalWrite(Lg, LOW);
digitalWrite(Le, LOW);
digitalWrite(Ld, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Lf, HIGH); //3
digitalWrite(Le, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Lb, LOW);
digitalWrite(La, LOW);
digitalWrite(Ld, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, HIGH); //4
digitalWrite(Le, HIGH);
digitalWrite(Ld, HIGH);
digitalWrite(Lb, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Lg, LOW);
digitalWrite(Lc, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Le, HIGH); //5
digitalWrite(Lb, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lg, LOW);
digitalWrite(La, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, HIGH); //6
digitalWrite(Lb, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Lg, LOW);
digitalWrite(Le, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Lg, HIGH); //7
digitalWrite(Le, HIGH);
digitalWrite(Lf, HIGH);
digitalWrite(Ld, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Lb, LOW);
digitalWrite(La, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Lg, LOW); //8
digitalWrite(Le, LOW);
digitalWrite(Lf, LOW);
digitalWrite(Ld, LOW);
digitalWrite(Lc, LOW);
digitalWrite(Lb, LOW);
digitalWrite(La, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(Lg, LOW); //9
digitalWrite(Le, HIGH);
digitalWrite(Lf, LOW);
digitalWrite(Ld, HIGH);
digitalWrite(Lc, LOW);
digitalWrite(Lb, LOW);
digitalWrite(La, LOW);
delay(650); //Velocitat d'espera a la següent operació

digitalWrite(La, HIGH); //parada
digitalWrite(Lb, HIGH);
digitalWrite(Lc, HIGH);
digitalWrite(Ld, HIGH);
digitalWrite(Lf, HIGH);
digitalWrite(Lg, HIGH);
digitalWrite(Le, HIGH);
delay(650); //Velocitat d'espera a la següent operació
}
