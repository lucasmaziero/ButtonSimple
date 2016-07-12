/**************************************************************************
			       SIMPLE CLICK BUTTON ACTIVE IN LOW       
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

#include "Arduino.h"

ButtonSimple::ButtonSimple()
{

}
void ButtonSimple::begin(int _pinButton)
{
  pinMode(_pinButton, INPUT_PULLUP);
  pinButtonSimple = _pinButton;
}

boolean ButtonSimple::clicked(void)
{
  if(!digitalRead(pinButtonSimple))   flagButtonSimple = true;
  
  if(digitalRead(pinButtonSimple) && flagButtonSimple)                    
  {                                                  
    flagButtonSimple = false;
	
	return(true);
  }
  else
  {
	return(false);
  }
}