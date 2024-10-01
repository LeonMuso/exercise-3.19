#include <stdio.h>

int main(void) {
  float lato1, lato2, lato3;
  printf("digita i valori dei lati:");
  scanf("%f %f %f", &lato1, &lato2, &lato3);
  if(lato1 == lato2 && lato2 == lato3) {
    printf("il triangolo e' equilatero");
  }else if(lato1 == lato2 && lato1 != lato3) {
    printf("il triangolo e' isoscele");
  }else if(lato1 != lato3 && lato1 != lato2 && lato2 != lato3) {
    printf("il triangolo e' scaleno");
  }else if(lato1 == lato3 && lato1 != lato2) {
    printf("il triangolo e' isoscele");
  }else if(lato2 == lato3 && lato1 != lato2) {
    printf("il triangolo e' isoscele");
  }
}
