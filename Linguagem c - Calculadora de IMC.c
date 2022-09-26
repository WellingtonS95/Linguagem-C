/* Criando um algoritmo que calcule o IMC de uma Pessoa. (IMC:peso / (altura)²) */

#include <stdio.h>
#include <match.h>

int main(){
    float IMC,peso, altura; /*Declaramos as variáveis*/
    printf("Digite o peso\n> "); /* Entrada de valores até a 11° linha*/
    scanf("%f",&peso);
    printf("Digite a altura\n>c");
    scanf("%f",&altura);

    altura = pow(altura,2);     /* As linhas 13 e 14 realizamos cálculos*/
    IMC = peso/altura;
    printf("O valor do IMC é: %.2f",IMC) /* Entonar valor, ou, Mostrar na Tela*/
}