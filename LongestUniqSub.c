#include <stdio.h>
#include <string.h>
 
void longSubStr(char *str)
{
	int i,n,max_len=1,cur_len=0,start_index=0,visited[100]={0};
 
	n=strlen(str);
 
	for(i=0;i<n;i++)
	{
		if(visited[str[i]]==0)
		{
			visited[str[i]]=1;
			cur_len++;
		}
		else
		{
			if(cur_len>max_len)
			{
				max_len=cur_len;
				start_index=i-max_len;
			}
 
			memset(visited,0,sizeof(visited));
 
			visited[str[i]]=1;
			cur_len=1;
		}
	}
 
	if(cur_len>max_len)
    {
        max_len=cur_len;
        start_index=i-max_len;
    }
 
	printf("%s",str+start_index);
}
 
int main()
{
	char str[50];
	scanf("%s",str);
	longSubStr(str);
	return 0;
}
