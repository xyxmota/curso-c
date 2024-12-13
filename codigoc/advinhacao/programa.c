#include <stdio.h>
int main() {
  printf("************************************\n");
  printf("*******Bem vindo ao programa********\n");
  printf("************************************\n");

  int numerosecreto = 20;

  int chute;

  for ( int i = 0; i <= 2; i++) {

    printf("Tentativa %d de 3\n", i);
    printf("Qual e o seu chute? ");

    scanf("%d", &chute);
    printf("o numero que voce chutou e %d. ", chute);

    int acertou = (chute == numerosecreto);

    if (acertou) {
      printf("boa garoto, voce acertou!!\n");
      printf("jogue de novo, essa foi facil em?\n");
    } else {

      int maior = chute > numerosecreto;
      if (maior) {
        printf("Seu chute foi maior que o numero secreto em");
      }
      else {
        printf("Seu chute foi menor que o numero secreto em");
      }
    }
  }
  printf("Fim de Jogo! ");
  return 0;
}

// parei na aula 02.06