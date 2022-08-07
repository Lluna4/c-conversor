#include <stdio.h>

int main(void) {
  char eurodol[15]; 
  float nuevo;
  printf("pon si quieres a euros o dolares \n");
  scanf_s("%s", eurodol);
  if (strcmp(eurodol, "euro") == 0) {
    printf("pon los dolares \n");
    scanf_s("%f", &nuevo);
    float nuevon = nuevo * 0.91;
    printf("%.2f", nuevon);
    scanf_s("%f", nuevon);
  }
  if (strcmp(eurodol, "dolares") == 0){
    printf("pon los euros \n");
    scanf_s("%f", &nuevo);
    float nuevon = nuevo * 1.09;
    printf("%.2f", nuevon); 
    scanf_s("%f", nuevon);
  }
  
  
}
  
  

  
  
