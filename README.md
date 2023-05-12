# Resumen del funcionamiento del programa

El siguiente programa está diseñado para probar y configurar el temporizador TR0 o TR1 del microcontrolador 80c552.

## Temporizador de 8 bits sin auto-recarga

El temporizador utilizado en este programa es un temporizador de 8 bits sin auto-recarga.

## Pasos de funcionamiento:

1. Se configura el temporizador TR0 en modo 11 (0) para que funcione como un contador de 8 bits sin auto-recarga.
2. El temporizador TR0 contará hasta 10 y cambiará el estado del puerto P0.
3. Se utiliza el flag del temporizador para controlar el bucle principal.

## Procedimiento detallado:

1. Se declara una función `configuracion()` para configurar el temporizador y el puerto P0.
2. En la función principal `main()`, se llama a la función `configuracion()` para realizar la configuración inicial.
3. Se inicia un bucle infinito `while (1)` para ejecutar continuamente el programa.
4. Dentro del bucle, se verifica si el flag `TF0` del temporizador TR0 es igual a 1.
5. Si el flag `TF0` es igual a 1, se invierte el estado del puerto P0 utilizando el operador de negación `~`.
6. Se restablece el flag `TF0` a 0 para indicar que se ha procesado el desbordamiento del temporizador.
7. Se carga el valor `0xF6` en el registro `TL0` del temporizador para reiniciar el conteo.
8. El programa vuelve al inicio del bucle y repite el proceso.

En resumen, este programa configura el temporizador TR0 como un contador de 8 bits sin auto-recarga y cambia el estado del puerto P0 cada vez que el temporizador cuenta hasta 10. El bucle principal se ejecuta continuamente y utiliza el flag del temporizador para controlar el momento en que se realizan los cambios. El programa no utiliza interrupciones y se basa en la verificación del flag dentro del bucle principal.

