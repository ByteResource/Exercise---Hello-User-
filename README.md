# Objetivo del ejercicio
¡Bienvenidos! en este ejercicio nos introducimos la peticion de datos (input) al usuario de una forma simple: solicitar su nombre para darle la bienvenida al lenguaje.
Inicialmente, lo habia hecho usando la funcion `scanf()` que es sumamente básica para pedir datos. Técnicamente, funciona, pero al momento de agregar espacios no los toma en cuenta pues "corta" el string hasta ahí.
En caso de querer escribir "John Doe" solo toma "John", además, puede ocurrir un error no deseado si supera la longitud máxima; desbordamiento del búfer.

La forma más limpia de lograr esto y hacer algo al respecto es usando al libreria `<string.h>` y los condicionales, tal cual como se muestra en el ejemplo.

## Compilación
En caso de querer probarlo, compilen usando `gcc -o <nombre> project.c` y lo podrán ejecutar.
