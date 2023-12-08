#include <stdio.h>

int main()
 {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    int choto=A;
    if (B<choto)
    {
         choto=B;
    }
    if (C<choto)
    {
         choto=C;
    }

    int boro=A;
    if (B>boro) 
    {
        boro= B;
    }
    if (C>boro) 
    {
        boro=C;
    }

    int majhamajhi = A+B+C-choto-boro;

    printf("%d\n%d\n%d\n\n", choto,majhamajhi,boro);
    printf("%d\n%d\n%d\n",A,B,C);
    return 0;
}
