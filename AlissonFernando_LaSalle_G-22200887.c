//Usuario Github: AlissonFernando//
#include <stdio.h>
#include <math.h>

int main(){

    printf("    Saudações, obrigado por utilizar minha calculadora!\n");
    printf("    Autor: Álisson Fernando Silva dos Santos\n");
    printf("    Curso: Ciência de dados, Universidade La Salle, Matrícula: 201610706\n");
    printf("\n");

    int operacao;

    printf("↓↓↓ Informe qual a operação matemática que deseja realizar ↓↓↓\n\nDigite o respectivo código para cada opção de cálculo abaixo:\n1 - Para calcular a raiz quadrada;\n2 - Para elevar um número ao quadrado;\n3 - Para multiplicar um número por outro;\n4 - Para dividir um número por outro;\n5 - Para realizar uma soma entre dois números;\n6 - Para realizar uma subtraição entre dois números;\n\nOpção selecionada: ");
    scanf("%d",&operacao);

    switch(operacao){ //foi utilizado o exemplo da figura 7 na página 189 do e-book//

        case 1:
        printf("Será efetuado o cálculo de Raiz quadrada.\n\n");
        break;

        case 2:
        printf("Será efetuado o cálculo de Potenciação.\n\n");
        break;
        
        case 3:
        printf("Será efetuado o cálculo de Multiplicação.\n\n");
        break;
        
        case 4:
        printf("Será efetuado o cálculo de Divisão.\n\n");
        break;
        
        case 5:
        printf("Será efetuado o cálculo de Soma.\n\n");
        break;
        
        case 6:
        printf("\nSerá efetuado o cálculo de Subtração\n");
        break;
        
        default:
        printf("\n *A opção selecionada não é permitida. Favor reiniciar o programa.");
        
return 0;
    }

    float numero1,numero2;
    float raizquad,potenciacao,multiplicacao,divisao,soma,subtracao;
    
    if(operacao==1){ //foi utilizado o exemplo da figura 4 na página 143 do e-book//
    printf("Digite o número que deseja efetuar o cálculo: ");
    scanf("%f",&numero1);
    }
    else
    if(operacao==2){ //foi utilizado o exemplo do site freecodecamp, disponivel em: https://www.freecodecamp.org/portuguese/news/instrucoes-if-else-em-c-explicadas/#:~:text=Em%20uma%20instru%C3%A7%C3%A3o%20if...,else%20ser%C3%A1%20executado%20no%20lugar.//
    printf("Digite o número que deseja efetuar o cálculo: ");
    scanf("%f",&numero1);
    }
    else{
    printf("Digite o primeiro número do cálculo: ");
    scanf("%f",&numero1);
    printf("Digite o segundo número do cálculo: ");
    scanf("%f",&numero2);
}
    raizquad=sqrt(numero1);
    potenciacao=numero1*numero1;
    multiplicacao=numero1*numero2;
    soma=numero1+numero2;
    subtracao=numero1-numero2;
    if(numero2!=0){ //foi utilizado o exemplo do forum no site stackoverflow, disponivel em: https://pt.stackoverflow.com/questions/376660/erro-de-divis%C3%A3o-por-zero
        divisao=numero1/numero2;}
        else{
    printf("!!!ATENÇÃO: Erro de divisao por zero!!!\nDigite novamente o segundo número do cálculo: ");
    scanf("%f",&numero2);
            divisao=numero1/numero2;
        }
    
    if(operacao==2){
    printf("\nO resultado é = %0.2f\n",potenciacao);
    }
    if(operacao==3){
    printf("\nO resultado é = %0.2f\n",multiplicacao);
    }
    if(operacao==4){
    printf("\nO resultado é = %0.2f\n",divisao);
    }
    if(operacao==5){
    printf("\nO resultado é = %0.2f\n",soma);
    }
    if(operacao==6){
    printf("\nO resultado é = %0.2f\n",subtracao);
    }
    if(operacao==1){
    printf("\nO resultado é = %0.2f\n",raizquad);
}

    return 0;
}
