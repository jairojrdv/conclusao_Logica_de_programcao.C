#include<stdlib.h>
#include<stdio.h>

void soma_dois_numeros()
{
    int valor1, valor2, soma;
    printf("Digite um número: ");
    scanf("%d" ,&valor1);
    printf("digite outro número: ");
    scanf("%d" ,&valor2);
    soma=valor1+valor2;
    printf("%d+%d=%d",valor1, valor2, soma);
}

void conversor_de_celsius_para_farenheint()
{
    float C, F;
    printf("digite uma temperatura em Celsius:");
    scanf("%f" ,&C);
    F=C*(9.0/5.0)+32.0;
    printf("A temperatura %f graus Celsius, é %f graus Farenheint se convertido" ,C, F);
}

void peso_em_planetas_diferentes()
{
    float PT, PP;
    int P;
   printf("Qual seu peso (em KG) no planeta Terra? ");
   scanf("%f" ,&PT);
   printf("Digite:\n1-Mercúrio;2-Vênus ;3-Marte ; \n4-Júpiter ;5-Saturno ;6-Urano ;\n");
   printf("Escolha um planeta para saber seu peso nele:  ");
   scanf("%d" ,&P);
   
   switch(P){
       case 1: 
        PP=(PT/10)*0.37;
        break;
       
       case 2: 
        PP=(PT/10)*0.88;
        break;
       
        case 3: 
        PP=(PT/10)*0.38;
        break;
       
        case 4: 
        PP=(PT/10)*2.64;
        break;
       
        case 5: 
        PP=(PT/10)*1.15;
        break;
       
        case 6: 
        PP=(PT/10)*1.17;
        break;
       
        default:
        printf("Planeta inválido");
   }
   printf("Peso no planeta escolhido: %f" ,PP);
}

void peso_ideal_para_homem_e_mulher()
{
    float A,P;
    char sexo;
    printf("Qual sua altura? ");
    scanf("%f" ,&A);
    printf("Qual seu sexo? <M ou F> ");
    scanf("%s" ,&sexo);
    if(sexo == 'M' ){
        P=(72.7*A)-58 ;
        printf("Seu peso ideal é: %f" ,P);
    }
    if(sexo=='F'){
       P=(62.1*A)-44.7;
       printf("Seu peso ideal é: %f" ,P);
    }
}

void media_aritimetica()
{
float num, soma=0, media=0;
int qtdeNum, i;
printf("Informe a quantidade de numeros:");
scanf("%d", &qtdeNum);
for (i=1; i<=qtdeNum; i++) {
printf("Informe o numero:");
scanf("%f", &num);
soma += num;
}
media = soma / qtdeNum;
printf("A media e: %.1f", media);
}

void todos_valores_par_entre_um_e_vinte()
{
int i;
for (i=1; i<=20; i++) {
if ((i % 2) == 0)
printf("Numero par: %d \n", i);
}
}

void sair()
{
    printf("Ja vai??? Foi um prazer acompanhá-lo ;)\n");
}


int main()
{
    int continuar=1;

    do
    {
        printf("\n\tMenu interativo do desenvolvedor Jairo Jr.\n\n");
         printf("\n\tEscolha uma das opções abaicoe divirta-se.\n\n");
        printf("1. Deseja somar dois números\n");
        printf("2. Deseja converter um temperatura de Celsius para Ferenheint?\n");
        printf("3. Deseja saber seu peso nos diferentes planetas do sistema solar?\n");
        printf("4. Gostaria de saber seu peso ideal? (diferente para homens e mulheres)\n");
        printf("5. Calcular a média aritimética.\n");
        printf("6. Quer saber quais são todos os números pares entre 1 e 20?\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                soma_dois_numeros();
                break;

            case 2:
                conversor_de_celsius_para_farenheint();
                break;

            case 3:
                peso_em_planetas_diferentes();
                break;

            case 4:
                peso_ideal_para_homem_e_mulher();
                break;
                
            case 5:
                media_aritimetica();
                break;
        
            case 6:
                todos_valores_par_entre_um_e_vinte();
                break;
        
            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
    
   } 
