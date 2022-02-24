#include<stdio.h>
int main()
{
	int bt[20],wt[20],tat[20];
	int at=0,awt=0,s1=0,s2=0,i;
	int n;
	printf("enter no of processes (max:20)\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the burst time of p[%d]:\t",(i+1));
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	for(i=1;i<=n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
	for(i=0;i<n;i++)
	{
		tat[i]=wt[i]+bt[i];
		at=at+tat[i];
		awt=awt+wt[i];
	}
	 s1=at/n;
	 s2=awt/n;
	printf("\n Process \tBurst Time \tWaiting Time \tTurnaround Time");
	for(i=0;i<n;i++)
	{
		printf("\n P[%d] \t\t%d \t\t%d \t\t%d",i+1,bt[i],wt[i],tat[i]);
	}
	printf("\n Average Waiting Time:%d",s2);
	printf("\n Average Turnaround Time:%d",s1);
	printf("\n");
}
