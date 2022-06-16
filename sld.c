#include<stdio.h>
#include<string.h>
int main()
{
	int nf,i=1,j=0;
	int x=0,k;
	char dn[20],fn[20][20],n[20];
	printf("enter the directory name:\t");
	scanf("%s",dn);
	printf("enter no of files in the dir:\t");
	scanf("%d",&nf);
	while(i<=nf)
	{
		printf("enter the file name:\t");
		scanf("%s",n);
		for(k=0;k<nf;k++){
			x=strcmp(n,fn[k]);
			if(strcmp(n,fn[k])==0)
			{
				printf("file name already exist!!!\n");
				break;
			}
		}
		if(x!=0)
		{
			strcpy(fn[j++],n);	
			i++;
		}
	}
	printf("\n\t\t\t---x---MAX FILE LIMIT REACHED---x---");
	printf("\nDirectory name: %s\n",dn);
	printf("\nFile names are:\n");
	for(i=0;i<nf;i++)
	{
		printf("%s\n",fn[i]);
	}
}
