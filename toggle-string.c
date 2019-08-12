#include <stdio.h>

int main()
{
  char S[100];
  int i;
  scanf("%s",S);  
  for(i=0;S[i]!='\0';i++)
    {
     if(S[i] >= 65 && S[i] <= 90)
      S[i] = (char)(S[i] + 32);
     else
      S[i] = (char)(S[i] - 32);
    }
     printf("%s",S);  // Writing output to STDOUT
return 0;
}
