# Contador de 13 bits

Este programa está diseñado para configurar y probar el TR0 (Timer/Counter 0) del microcontrolador 80C552 como un contador de 13 bits. El objetivo es contar hasta cinco y cambiar el estado de un pin de salida (P1). Cuando el contador alcanza el valor de diez, se cambia nuevamente el estado del pin y se reinicia el contador.

## Descripción

El programa se inicia configurando el temporizador TR0 en modo contador de 13 bits (modo 01). Luego, se establece el estado inicial de los pines de salida. A continuación, se inicia un bucle infinito que controlará el funcionamiento del contador.

Dentro del bucle, se realizan las siguientes acciones:
1. Se verifica si el valor del registro TL0 es igual a 5. Si se cumple esta condición, se cambia el estado del pin de salida (P1).
2. Se verifica si el valor de TL0 es igual a 10. Si se cumple esta condición, se cambia nuevamente el estado del pin de salida (P1) y se reinicia el contador estableciendo TL0 en 0.

Estas acciones se repiten continuamente en el bucle infinito, lo que permite contar y realizar las acciones correspondientes en función del valor del contador.

## Funcionamiento

1. Se inicia el programa y se configura el temporizador TR0 como un contador de 13 bits.
2. Se establece el estado inicial de los pines de salida.
3. Se inicia un bucle infinito.
4. Se verifica si el valor del contador (TL0) es igual a 5. Si es así, se cambia el estado del pin de salida (P1).
5. Se verifica si el valor del contador es igual a 10. Si es así, se cambia nuevamente el estado del pin de salida y se reinicia el contador.
6. El programa vuelve al paso 4 y continúa repitiendo las acciones dentro del bucle infinito.

Con este programa, el microcontrolador 80C552 actúa como un contador de 13 bits, permitiendo controlar las acciones en función del valor del contador.

