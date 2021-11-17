#include <stdio.h>
int main()

{
    char c;
    printf("Entrer un caractère: \n");
    scanf(" %c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')  {
    printf("\n %c est une voyelle.", c);
  }
    else {
      printf("\n %c est une consonne.", c);
  }
    return 0;
}
