#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>

//setlocale(LC_ALL, "Portuguese");

typedef struct cliente{
    int cod;
    char nome[100];
    char tel[50];
    char email[100];
}cliente;


int quant_cliente=0;
int x, y, z=1;

int cad_tentativa();
int exibe_lista();

  cliente cl1;
  cliente cl2;
  cliente cl3; 
  cliente cl4;
  cliente cl5;




int main(void) {

  

  
  int op;
  
  do {
    printf("\n");
    printf("***MENU***\n");
    printf("1 - cadastro novo cliente\n");
    printf("2 - lista clientes\n");
    printf("0 - encerrar programa\n");
    printf("digite a a opção:\n");
    fflush(stdin);
    scanf("%d", &op);
    printf("\n");
    
    

    switch(op){

        case 1: 
            if(quant_cliente<6){
                
                cad_tentativa();
                z++;
            
            } else {
                printf("agenda cheia!!\n");
            }

                break;
     
        case 2:
            if(quant_cliente!=0){
                
                exibe_lista(quant_cliente);

                } if (quant_cliente==0){
                    printf("agenda vazia!!\n");
                }

            break;
        
        case 0:
            return 0;
            break;
    
        default:
            printf("Erro: opção inválida!\n");
        
        }
    }while(op!=0);
  return 0;
}


int cad_tentativa(){
    
    
    switch(z){
        case 1:
            cl1.cod=1;
            printf("insira o nome do cliente:\n");
            fflush(stdin);
            scanf("%s", cl1.nome);
            printf("insira o telefone do cliente:\n");
            fflush(stdin);
            scanf("%s", cl1.tel);
            printf("insira o e-mail do cliente:\n");
            fflush(stdin);
            scanf("%s", cl1.email);
            printf("\n");
    
            quant_cliente++;

            return (quant_cliente);
            
            break;
        
        case 2:
            cl2.cod=2;      
            printf("insira o nome do cliente:\n");
            fflush(stdin);
            scanf("%s", cl2.nome);
            printf("insira o telefone do cliente:\n");
            fflush(stdin);
            scanf("%s", cl2.tel);
            printf("insira o e-mail do cliente:\n");
            fflush(stdin);
            scanf("%s", cl2.email);
            printf("\n");
    
            quant_cliente++;

            return (quant_cliente);
            break;

        case 3:
            cl3.cod=3;      
            printf("insira o nome do cliente:\n");
            fflush(stdin);
            scanf("%s", cl3.nome);
            printf("insira o telefone do cliente:\n");
            fflush(stdin);
            scanf("%s", cl3.tel);
            printf("insira o e-mail do cliente:\n");
            fflush(stdin);
            scanf("%s", cl3.email);
            printf("\n");
    
            quant_cliente++;

            return (quant_cliente);
            break;
            
        case 4:
            cl4.cod=4;      
            printf("insira o nome do cliente:\n");
            fflush(stdin);
            scanf("%s", cl4.nome);
            printf("insira o telefone do cliente:\n");
            fflush(stdin);
            scanf("%s", cl4.tel);
            printf("insira o e-mail do cliente:\n");
            fflush(stdin);
            scanf("%s", cl4.email);
            printf("\n");
    
            quant_cliente++;

            return (quant_cliente);
            break;
        
        case 5:
            cl5.cod=5;      
            printf("insira o nome do cliente:\n");
            fflush(stdin);
            scanf("%s", cl5.nome);
            printf("insira o telefone do cliente:\n");
            fflush(stdin);
            scanf("%s", cl5.tel);
            printf("insira o e-mail do cliente:\n");
            fflush(stdin);
            scanf("%s", cl5.email);
            printf("\n");
    
            quant_cliente++;

            return (quant_cliente);
            break;

        default:
            return 0;
        }
    
    return 0;   
}

int exibe_lista(y){
    x=y;
    for(x=1; x<=y; x++){
        if (x==1){
            printf("codigo: %d\n", cl1.cod);
            printf("nome: %s\n", cl1.nome);
            printf("telefone: %s\n", cl1.tel);
            printf("email: %s\n", cl1.email);
            printf("\n");
        } else if (x==2){
            printf("codigo: %d\n", cl2.cod);
            printf("nome: %s\n", cl2.nome);
            printf("telefone: %s\n", cl2.tel);
            printf("email: %s\n", cl2.email);
            printf("\n");
        } else if (x==3){
            printf("codigo: %d\n", cl3.cod);
            printf("nome: %s\n", cl3.nome);
            printf("telefone: %s\n", cl3.tel);
            printf("email: %s\n", cl3.email);
            printf("\n");
        } else if (x==4){
            printf("codigo: %d\n", cl4.cod);
            printf("nome: %s\n", cl4.nome);
            printf("telefone: %s\n", cl4.tel);
            printf("email: %s\n", cl4.email);
            printf("\n");
        } else if (x==5){
            printf("codigo: %d\n", cl5.cod);
            printf("nome: %s\n", cl5.nome);
            printf("telefone: %s\n", cl5.tel);
            printf("email: %s\n", cl5.email);
            printf("\n");
        }
    }
    /*printf("\n pressione qualquer tecla para continuar");
    system("pause");
    system("cls");*/
}