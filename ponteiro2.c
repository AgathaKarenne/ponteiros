#include <stdio.h>

main(){

    //declaração variavel
    int num;
    //declaração ponteiro
    int *p, *p2;

    /*int p:criação do ponteiro
    p: acessando o conteudo do ponteiro
    &p: acessando endereço de memoria do ponteiro
    *p: acessando o conteudo da variavel que o ponteiro aponta*/
    num = 20;
    p = &num;
    p2 = &num;

    *p = 30;//alterando o conteudo da variavel num atraves do ponteiro
        printf("conteudo de p: %d", *p);

    *p2 = 50;
    printf("\nvalor de num: %d", num);
    printf("\nvalor de p: %d", *p);
    printf("\nconteudo de p2: %d", *p2);
}