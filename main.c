#include <stdio.h>

int main(void) {
  char eurodol[15];
  float nuevo;
  printf("pon si quieres a euros o dolares \n");
  scanf("%s", eurodol);
  if (strcmp(eurodol, "euro") != 1) {
    printf("pon los dolares \n");
    scanf("%f", &nuevo);
    float nuevon = nuevo * 0.91;
    printf("%f", nuevon);
  }
  else if (strcmp(eurodol, "dolares")) {
    printf("pon los euros \n");
    scanf("%f", &nuevo);
    float nuevon = nuevo * 1.09;
    printf("%f", nuevon);
    
  }
  
  

  
  
