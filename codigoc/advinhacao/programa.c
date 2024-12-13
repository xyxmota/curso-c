#include <stdio.h>
int main() {
  printf("************************************\n");
  printf("*******Bem vindo ao programa********\n");
  printf("************************************\n");

  int numerosecreto = 20;
  int numerotentativas = 5;

  int chute;

  for ( int i = 0; i <= numerotentativas; i++) {

    printf("Tentativas %d \n", numerotentativas);
    printf("Qual e o seu chute? ");

    scanf("%d", &chute);
    printf("o numero que voce chutou e %d. ", chute);

    int acertou = (chute == numerosecreto);

    if (acertou) {
      printf("boa garoto, voce acertou!!\n");
      printf("jogue de novo, essa foi facil em?\n");

      break;

    } else {

      int maior = chute > numerosecreto;
      if (maior) {
        printf("Seu chute foi maior que o numero secreto em\n");
      }
      else {
        printf("Seu chute foi menor que o numero secreto em\n");
      }
    }
  }
  printf("Fim de Jogo! ");
  return 0;
}

// parei na aula 02.07