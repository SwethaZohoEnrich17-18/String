#include<stdio.h>
#include<string.h>

char* UniqueSubstring(char* s,char* b)
{
  int i,j,k=0,count=0,n;
  n=strlen(s);
  
  for(i=0;i<n-1;i++)
  {
      if(s[i]<s[i+1])
      {
          count++;
      }
      else
      {
          count=0;
      }
      if(count>k)
      {
          k=count;
          j=i;
      }
  }
  count=0;
  for(i=j-k+1;i<=j+1;i++,count++)
  {
      b[count]=s[i];
  }
  
  return b;
}
void main()
{
  char s[100],b[100];
  scanf("%s",s);
  
  printf("%s",UniqueSubstring(s,b));
}
