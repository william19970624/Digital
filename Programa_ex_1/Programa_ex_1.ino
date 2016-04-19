/*************************************************************************
**                                                                      **
**                            Progrema 1 ex. 1                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
int L1 = 5;
int L2 = 6;
int L3 = 7;
int L4 = 8;
int L5 = 9;
int L6 = 10;
int L7 = 11;
int L8 = 12;  //Localització dels ports


//****** secup ***********************************************************
void setup() {
 pinMode(L1, OUTPUT);
 pinMode(L2, OUTPUT);
 pinMode(L3, OUTPUT);
 pinMode(L4, OUTPUT);
 pinMode(L5, OUTPUT);
 pinMode(L6, OUTPUT);
 pinMode(L7, OUTPUT);
 pinMode(L8, OUTPUT);
}


//****** Loop ************************************************************
void loop() {
digitalWrite(L1, HIGH); //Tots els Led's funcionant 
digitalWrite(L2, HIGH);
digitalWrite(L3, HIGH);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, HIGH);
digitalWrite(L7, HIGH);
digitalWrite(L8, HIGH);
  delay(650); //Velocitat d'espera a la següent operació

digitalWrite(L1, LOW); // Tots els Led's apagats 
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);
  delay(650);


}
