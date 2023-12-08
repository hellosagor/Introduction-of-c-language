#include <stdio.h>
#include <string.h>

int main() {
    char ar[100001];
    fgets(ar,sizeof(ar),stdin);

    for (int i=0;ar[i]!='\0';i++) 
    {
        if(ar[i]==',')
         {
            ar[i]=' ';
        } else {
            if (ar[i]>='a'&&ar[i]<='z')
             {
                ar[i]=ar[i]-32; 
            } else if(ar[i]>='A'&&ar[i]<='Z')
             {
                ar[i]=ar[i]+32;
            }
        }
    }
    printf("%s",ar);
    return 0;
}
