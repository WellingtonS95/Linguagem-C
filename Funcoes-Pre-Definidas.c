#include <stdio.h>
#include <string.h>
int main(void){
    printf("\n ARARA == ARARA? %d", strcmp("ARARA", "ARARA"));
    printf("\n ARARA == CABANA? %d", strcmp("ARARA", "BANANA"));
    printf("\n BANANA == ARARA? %d", strcmp("CABANA", "ARARA"));
}
//A função strcmp(string1, string2) compara o conteúdo de duas strings e pode retornar três resultados, o valor nulo (zero), positivo ou negativo, conforme as seguintes regras:

//quando as strings forem iguais, a função retorna 0.
//quando as strings forem diferentes e o primeiro caractere não coincidir entre elas, sendo “maior” na primeira, a função retorna um valor positivo. Entende-se por “maior” o caractere com maior código ASCII, que é atribuído em ordem alfabética, ou seja, o caractere b é maior que a.
//quando as strings forem diferentes e a primeira apresentar o caractere, não coincidente e “menor” que a segunda, então o valor resultante é negativo. Por exemplo, o caractere d é menor que h.
 