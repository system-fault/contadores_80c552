/**
 * *********************************************
 * 
 * Este codigo es para probar y configurar el TR0 o TR1 del 80c552
 * 
 * configuraremos el TR0 en modo 10 (0) contador de 8 bits
 * Contara hasta 10 y cambiara el estado del P0, lo hara vigilando el Flag del contador
 * 
 * 
 * 
 * *********************************************/

#include <reg552.h>


void configuracion (void);



void main (void)
{
    configuracion();

    while (1)
    {

        while(TF0 == 0);  //Esperamos a que el flag este a 1 para hacer cambios y cargar de nuevo el contador
        P0 = ~P0;
        TF0 = 0;
        TL0 = 0xF6;

    }
    
}


//DEFINICIONES FUNCIONES


void configuracion ()
{
    //Configuramos TMOD en modo 8bits 11 ----- 0000(TR1)desactivado 0111(TR0) contador 8 bit sin auto recarga
    TMOD = TMOD | 0x07;

    //Cargamos el valor de TL0 con 0xF6 para que cuando llegue a contar 10 se levante el flag
    TL0 = 0xF6;
    //Encedemos en contador
    TR0 = 1;
	
		P0 = 0x00;
}




