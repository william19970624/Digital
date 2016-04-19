/**********************************************************************************
**                                                                               ** 
**                            Projecte 1 ex. 3                                   **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int led []= {5,6,7,8,9,10,11,12};
int i = 0;

//La funció Setup només s'executa un cop. 
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<21; i++)
  {
    pinMode (led[i], OUTPUT);
  }
  
}


//La funció Loop es va repetin cada cop.
void loop() {
  for (i = 0; i<8; i++)
  {
    digitalWrite (led[i], HIGH);
    delay(40);
    digitalWrite (led[i], LOW);
    delay(40);
  }
  
  for (i = 7; i>=0; i--)
  {
    digitalWrite (led[i], HIGH);
    delay(40);
    digitalWrite (led[i], LOW);
    delay(40);
  }
}
