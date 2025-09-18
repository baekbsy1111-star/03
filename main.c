#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c, d;
    
    printf("enter a character : ");
    scanf("%c", &c);
    
    d=c+1;
    printf("The next character of %c (%i) is %c (%i).|n", c, d, d, d);
  
  system("PAUSE");	
  return 0;
}
