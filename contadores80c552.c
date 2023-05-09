/**
 * *********************************************
 * 
 * Este codigo es para probar y configurar el TR0 o TR1 del 80c552
 * 
 * configuraremos el TR0 en modo 01 (0) contador de 13 bits
 * Contara hasta cinco y cambiara el estado del P0, cunado llegue a 10, volvera a 
 * cambiar P0 y reiniciara el contador.
 * 
 * 
 * 
 * *********************************************/

//Para los pulsos del contador se utiliza el pin T0 P3_4
//No se usa el TF del timer

#include <reg552.h>



void configuracion (void);


void main (void)
{

	configuracion();
	
	
	while(1)
	{
		
		if (TL0 == 5)		//Espera hasta que el valor del contador es 5
		{
			P1 = ~P1;

		}
		
		if (TL0 == 0x0A)	//Espera hasta que el valor del contador es 10
		{
			P1 = ~P1;;
			TL0 = 0x00;
			TH0 = 0x00;
		}
	}
}

void configuracion (void)
{
	
	
	P1 = 0x00;
	
	TMOD = TMOD | 0x04; //Configura el timer0 como contador 13 bits 0000 0100
	TR0 = 1; // Arranca el TR0, siempre hay que ponerlo en marcha, no importa el Tipo C/T o modo 00,01,10,11

}