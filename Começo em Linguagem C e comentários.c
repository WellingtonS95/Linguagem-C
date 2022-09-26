#include<stdio.h>
int somar(){
    return 2 + 3;
}
int resultado = 0;
resultado = somar();
printf("O resultado da função é = %d",resultado);
return 0;

// <tipo de retorno> -Foi especificado que a função vai retornar um valor inteiro (int)
// <nome> -Somar.
// <Comandos da função> - Essa função foi criada de modo a retornar a soma de dois valores, tudo em um único comando: return 2 + 3.
