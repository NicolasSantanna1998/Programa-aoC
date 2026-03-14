#include <stdio.h>

int main(){

 
    





  
    int numero1 = 7, resultado;

    printf("antes incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    resultado = numero1++;
    //printf("depois incremento: %d\n" , numero1);
    printf("apos incremento - numero1: %d - resultado: %d\n", numero1 , resultado);
    //numero1 = numero1 -1;
    //numero1 -= 1;

    
    resultado = ++numero1;
    printf("apos pre-incremento - numero1: %d - resultado: %d\n", numero1 , resultado);
    numero1--;
    printf("apos decremento: %d\n" , numero1);
    


    resultado = numero1--;
    printf("apos pos-decremento - numero1: %d - resultado: %d\n", numero1 , resultado);

    resultado = --numero1;
    printf("apos pre-decremento - numero1: %d - resultado: %d\n", numero1 , resultado);

}