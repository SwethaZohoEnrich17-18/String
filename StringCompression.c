#include<stdio.h>
#include<string.h>
void main ()
{
  int n, count[20], i, j;
  char a[200];
  scanf ("%s", a);
  n = strlen (a);
  for (i = 0; i < n; i++)
    {
      count[i] = 1;
    }
  i = 0;
  j = 0;
  while (i < n && j < n)
    {
      if (a[i] == a[i + 1])
      {
          i++;
          count[j]++;
          continue;
      }
      else
      {
          printf ("%c", a[j]);
          if (count[j] > 1)
            printf ("%d", count[j]);
            i++;
	        j = i;
	        continue;
      }
    }
}
