#include <stdio.h>
int main() {
  printf("************************************\n");
  printf("*******Bem vindo ao programa********\n");
  printf("************************************\n");

  int numerosecreto = 20;
  int chute;

  printf("qual voce acha que e :");
  scanf("%d", &chute);
  printf("o numero e %d ", chute);

  if (chute == numerosecreto) {
    printf("boa garoto, voce acertou!!\n");
    printf("jogue de novo, essa foi facil em?");
  } else {
    printf("tente de novo meu chefe, tenho fe que na proxima vai!");
  }
  
}