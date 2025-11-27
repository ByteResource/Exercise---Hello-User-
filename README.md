# Objetivo del ejercicio
¡Bienvenidos! en este ejercicio nos introducimos la peticion de datos (input) al usuario de una forma simple: solicitar su nombre para darle la bienvenida al lenguaje.
Inicialmente, lo habia hecho usando la funcion `scanf()` que es sumamente básica para pedir datos. Técnicamente, funciona, pero al momento de agregar espacios no los toma en cuenta pues "corta" el string hasta ahí.
En caso de querer escribir "John Doe" solo toma "John", además, puede ocurrir un error no deseado si supera la longitud máxima; desbordamiento del búfer.

La forma más limpia de lograr esto y hacer algo al respecto es usando al libreria `<string.h>` y los condicionales, tal cual como se muestra en el ejemplo.

## Compilación
En caso de querer probarlo, compilen usando `gcc -o <nombre> project.c` y lo podrán ejecutar.

# Objective of the exercise
Welcome! In this exercise we introduce the request for data (input) to the user in a simple way: request their name to welcome the language. Initially, I had done this using the `scanf()` function which is extremely basic for requesting data. Technically, it works, but when adding spaces it doesn't take them into account because it "cuts" the string up to there. If you want to write "John Doe" just take "John", in addition, an unwanted error can occur if it exceeds the maximum length; buffer overflow. The cleanest way to achieve this and do something about it is to use the library and the conditionals, as shown in the example.

## Compilation 
If you want to try it, compile using `gcc -or project.c` and you can run it.
