#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char verbo[21];
  char pronomes[6][5] = {"Eu", "Tu", "Ele","Nós", "Vós","Eles"};
  char sufixos[6][5] = {"O","AS","A","AMOS","ÀIS","AM"};

  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s" , verbo);

 int tamanho = strlen(verbo);
  
  for(int i = 0; i < tamanho; i++){
    verbo[i] = toupper(verbo[i]);
  }
  
  int ultima_posicao = tamanho - 1;
  int penultima_posicao = ultima_posicao - 1;

if (verbo[ultima_posicao] == 'R' && 
verbo[penultima_posicao] == 'A'){
char radical[21];
  strcpy(radical, verbo);
  radical[penultima_posicao]= '\0';
   printf("Verbo %s no presente do indicativo\n", verbo);
for(int i=0; i<6;i++){
  printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
}
}else{
 printf("O verbo %s não termina em AR\n", verbo);
}
  
  return 0;
}