#include<stdio.h>
int main()
{
	int ms,mp[10],i,temp,n=10;
	int c;
	printf("enter total memory size:\t");
	scanf("%d",&ms);
	temp=ms;
	printf("enter memory required for processes(max=10)");
	for(i=0;i<n;i++)
	{
		printf("\nenter memory for p[%d]:\t",i+1);
		scanf("%d",&mp[i]);
		if(mp[i]<=temp)
		{
			printf("\nmemory allocated\n");
			temp=temp-mp[i];
		}
		else
		{
			c=i;
			printf("\n memory is full\n");
			break;
		}
	}
	printf("\ntotal memory:%d\n",ms);
	printf("\n\t\tprocess\t\tallocation status");
	for(i=0;i<c;i++)
	{
		printf("\n\t\tp[%d]\t\t%d",i+1,mp[i]);
	}
	printf("\n");
	printf("\ntotal memory allocated:%d\n",ms-temp);
	printf("\ntotal external fragmentation:%d\n",temp);
}
