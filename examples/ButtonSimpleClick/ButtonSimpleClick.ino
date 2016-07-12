/**************************************************************************
* 			       CLICK BUTTON ACTIVE IN LOW WITHOUT DELAY     
***************************************************************************
AUTOR: LUCAS MAZIERO - Eletrical Engineer                                                    
E-MAIL: lucas.mazie.ro@hotmail.com 									  
CIDADE: Santa Maria - Rio Grande do Sul - Brasil                                             
***************************************************************************
Versão: 1.0                                                             
Data: 14/04/2016                                                         
Modificado: --/--/----                                                                                                                                                                      
**************************************************************************/

#include <ButtonSimple.h>

ButtonSimple button1, button2;

int pinButtonMore = 10;
int pinButtonLess = 11;

int cont = 0;

void setup() 
{
  //pin button
  button1.begin(pinButtonMore);
  button2.begin(pinButtonLess);

  Serial.begin(9600);
  Serial.println("Hello! click the button pin" + String(pinButtonMore) + " for (+)increment or pin" + String(pinButtonLess) + " for (-)decrement.");
}

void loop() 
{
  // increment cont
  if(button1.clicked())
  {
    cont++;
    if(cont > 101) cont = 0;

    Serial.println(cont);
  }
  //decrement cont
  if(button2.clicked())
  {
    cont--;
    if(cont < 0) cont = 100;
    Serial.println(cont);
  }
}

