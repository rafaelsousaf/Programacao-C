#include <stdio.h>

int main(){
    int idade = 30;
    int quantidade = 2;
    double peso = 120.0;
    float altura = 1.72;
    char letra = 'A';
    char nome[20] = "Rafael";
    
    printf("A idade do %s é: %d anos\n", nome, idade);
    printf("A altura é: %.2f\n", altura);   // %.2f para duas casas decimais
    printf("O peso é: %.2f KG\n", peso);       // double também usa %f
    printf("A inicial da letra é: %c\n", letra);

    return 0;
}
