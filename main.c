#include <stdio.h>
#include <stdlib.h>


int main(void) {

  int a = 1, b = 2, c = 5, x = 0;

  while(1){
    printf("Bienvenue dans le programme de test");
    
    x = multiplication(a,b);
    printf("Voici le rÃ©sultat de la multiplication : %d\n", x);
    
    x = 0;
    x = division(c,b);
    printf("Voici le rÃ©sultat de la division : %d\n", x);
    
    x = 0;
    x = addition(c,b);
    printf("Voici le rÃ©sultat de l'addition : %d\n", x);
    
    x = 0;
    printf("Programme de test terminÃ©\n");
    }
}
    

