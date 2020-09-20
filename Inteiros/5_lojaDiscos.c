#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tPrograma para identificar quantos discos foram vendidos no dia de maior venda em março.");

  int qtdDiscos[32], dia[32], i, diaVenda = 1;
  
  for(i = 1; i < 32; i++){
    dia[i] = i;
  }
  
  for(i = 1; i < 32; i++){
    printf("\n[Dia %d] Digite a quantidade de discos vendidos: ", dia[i]);
    scanf("%d", &qtdDiscos[i]);
  }

  int maior = qtdDiscos[1];

   for(i = 1; i < 32; i++){
     if(maior < qtdDiscos[i]){
       maior = qtdDiscos[i];
       diaVenda = i;
     }
   }
  
  // TESTANDO SE O VETOR ESTÁ SENDO PREENCHIDO COM O SCANF
  // for(i = 1; i < 32; i++){
  // printf("\n[dia %d] %d",i, qtdDiscos[i]);
  // }
  
  printf("O dia de maior vendas foi o dia %d com %d discos vendidos.", diaVenda, maior);
}

// NÃO HÁ SOLUÇÃO ORIGINAL 