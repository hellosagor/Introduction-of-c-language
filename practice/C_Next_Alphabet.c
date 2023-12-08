#include <stdio.h>

int main()
 {
    char c;
    scanf("%c", &c);
    char nextletter;
    if (c == 'z') 
        nextletter = 'a';
     else (nextletter = c + 1);
      {
             printf("%c\n", nextletter);
      }

    return 0;
}
