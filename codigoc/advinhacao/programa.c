#include <stdio.h>
int main() {
  printf("************************************\n");
  printf("*******Bem vindo ao programa********\n");
  printf("************************************\n");

  int numerosecreto = 20;
  int chute;

  printf("qual voce acha que e :");
  scanf("%d", &chute);
  printf("o numero que voce chutou e %d. ", chute);

  if (chute == numerosecreto) {
    printf("boa garoto, voce acertou!!\n");
    printf("jogue de novo, essa foi facil em?");
  } else {

      if (chute > numerosecreto) {
          printf("Seu chute foi maior que o numero secreto em");
      }
      if (chute < numerosecreto) {
          printf("Seu chute foi menor que o numero secreto em");
      }
  }
}
// parei na aula 02.02