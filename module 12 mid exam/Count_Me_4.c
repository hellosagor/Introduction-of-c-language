 #include <stdio.h>
 #include<string.h>
    int main()
    {

         char ar[10001];
         int cnt[26]={0};
         scanf("%s",ar);
         for(int i=0;i<strlen(ar);i++)
         {
            char m=ar[i];
            if(m>='a' && m<='z')
            {
                cnt[m - 'a']++;
            }
         }
            for(int i=0;i<26;i++)
            {
                if(cnt[i]>0)
                {
                    printf("%c - %d\n",'a'+i,cnt[i]);
                }
            }
      return 0;
    }