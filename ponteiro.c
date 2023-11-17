#include <stdio.h>

main(){

    //declaração  e inicialização da variavel ponteiro

    int numero = 10;
    //declaração do ponteiro
    //é uma variaval que armazene a referencia do endereço de outra variavel, ou seja,
    // aponta para um endereço de memoria
    int *x = NULL;
    
    //inicializar o ponteiro
    x = &numero;

    //visualiza o endereço de memoria
    printf("endereço de memoria de numero: %d", &numero);

    //visualização do endereço de memoria do ponteiro
    printf("\nendereço de memoria de numero: %d", &x);

    //visualização do conteudo da variavel numero
    printf("\nconteudo da variavel numero: %d", numero);

    //visualização do conteudo da variavel ponteiro
    printf("\nconteudo do ponteiro x: %d", x);

   
}