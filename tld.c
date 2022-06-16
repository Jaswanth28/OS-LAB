#include<stdio.h>
#include<string.h>
#include<conio.h>
void display();
void createfiles(int);
typedef struct
{
char uname[15];
char fname[20][12];
int size;
}subdir;
subdir user[20];
int n=0;
int main()
{
int i,j,k,ch;
char id[12];
printf("\nEnter your choice");
printf("\n1logging in for the first time \n2: already have login id\n3:display \n4:exit");
scanf("%d",&ch);
do
{
switch(ch)
{
  case 1:     printf("\nEnter the username:login id");
	      scanf("%s",&user[n].uname);
	      user[n].size=0;
	      createfiles(n);
	      n++;
	      break;
  case 2: printf("\n Enter your login id");
	      scanf("%s",id);
	      for(i=0;i<n;i++)
	      {
		k=strcmp(user[i].uname,id);
	      if(k==0)
		{
		 createfiles(i); break;
		}
	       }
	      if(i==n)
	      printf("No such login id in the file system");
	      break;
  case 3: display();
	  break;
}
printf("Enter your choice");
scanf("%d",&ch);
}while(ch!=4);

getch();
}
void createfiles(int id)
{
  int i,v,ch,size;
  size=user[id].size;
 do
{
w:printf("\n enter filename:");
scanf("%s",user[id].fname[size]);
i=0;
while(i<size)
{
v=strcmp(user[id].fname[i],user[id].fname[size]);
if(v==0)
{
printf("file already exist\n please enter other name");
goto w;
}
i++;
}
size=++user[id].size;
printf("Do you want to create another file(1:yes/0:no)?");
scanf("%d",&ch);
}while(ch!=0);
}
//Displaying the contents of the File System
void display()
{ int i,j;
  printf("The contents of the file system are:\n");
  printf("User Name\t Files\n");
  for(i=0;i<n;i++)
  {
  printf("\n%s", user[i].uname);
  for(j=0;j<user[i].size;j++)
  printf("\t%s\n",user[i].fname[j]);
  }
}
