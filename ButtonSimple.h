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

#ifndef ButtonSimple_h
#define ButtonSimple_h

#include "Arduino.h"

class ButtonSimple
{
	public:
		ButtonSimple();
		void begin(int _pinButton);
		boolean clicked(void);

		//variables public
		int pinButtonSimple; 
		boolean flagButtonSimple;

    private:
	    //variables private

};
#endif