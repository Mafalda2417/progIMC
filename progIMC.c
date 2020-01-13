#include <stdio.h>

int main(){
    float imc;
    float peso;
    float altura;

    printf("Peso:\n");
    scanf("%f", &peso);
    printf("Altura:\n");
    scanf("%f", &altura);

    imc = peso /(altura*altura);

    if(imc < 18.5){
        printf("%f Abaixo do peso\n", imc);
    }else if(imc >= 18.6 && imc <= 24.9){
        printf("%f Saudável\n", imc);
    }else if(imc >= 25 && imc <= 29.9){
        printf("%f Peso em excesso\n", imc);
    }else if(imc >= 30 && imc <= 34.9){
        printf("%f Obesidade Grau I\n", imc);
    }else if(imc >= 35 && imc <= 39.9){
        printf("%f Obesidade em Grau II\n", imc);
    }else if(imc >= 40){
        printf("%f Obesidade em Grau III\n", imc);
    }


}