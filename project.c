#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 30
int main(){
  char userName[30];
  int length;
  printf("Por favor, escriba su nombre: ");

  fgets(userName, sizeof(userName), stdin);

  userName[strcspn(userName, "\n")] = '\0'; // -- Linea necesaria para eliminar el salto de linea que agrega la funcion fgets() '\n', y sustituirla por un caracter "nulo" (\0)
  
  // strlen() ayuda a decirnos la longitud de un array. Si excede la longitud máxima, señalamos un error.
  if(strlen(userName) > MAX_LENGTH){
    printf("Ha excedido el limite de caracteres, por favor, asegurese de no exceder los 15 caracteres.\n");
    return 0;
  }

  printf("¡Hola, %s, Bienvenido/a al lenguaje de programación C!\n", userName);
  return 0;
}
