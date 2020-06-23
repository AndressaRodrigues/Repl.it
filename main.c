#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int op;
  do {
    printf("***MENU***\n");
    printf("1 - cadastro novo cliente\n");
    printf("2 - lista clientes\n");
    printf("0 - encerrar programa\n");
    printf("digite a a opção:\n");
    scanf("%d", &op);
    }while(op!=0);

  switch(op){

    case 1: 
      if (quant_cliente<6){
        novo_cad();
      } else (quant_cliente=0) {
        printf("agenda vazia!!\n");
      } else {
        printf("agenda cheia!!\n");
      }
    case 2:
      for(x=0; x=4, x++){
        printf("%s\n", &list_cliente[x]);
      } 
    case 0:
      return 0;
    
    default:
      printf("Erro: opção inválida!\n");
  }
  return 0;
}

int novo_cad(){
    
    printf("insira o nome do cliente:\n");
    scanf("%s", &nome);
    printf("insira o telefone do cliente:\n");
    scanf("%s", &tel);
    printf("insira o e-mail do cliente:\n");
    scanf("%s", &email);

}