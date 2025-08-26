#include <stdio.h>

int main(){
    int idade;
    double peso;
    float altura;
    char nome[20];

    printf("Qual o seu nome: ");
    scanf("%19s", nome);           // lê até 19 chars + '\0' (sem espaços)

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual o seu peso: ");
    scanf("%lf", &peso);           // double -> %lf em scanf

    printf("Qual a sua altura: ");
    scanf("%f", &altura);          // float -> %f em scanf

    printf("\nSeu Nome: %s\n", nome);
    printf("Sua idade é: %d anos\n", idade);
    printf("A altura é: %.2f\n", altura);
    printf("O peso é: %.2f KG\n", peso);

    return 0;
}
