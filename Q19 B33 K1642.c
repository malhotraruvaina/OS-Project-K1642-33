#include<stdio.h>
#include<conio.h>

struct gifts
{
	char st;
	int n,gif;
}s[10];

main()
{
	printf("*******************************WELCOME TO THE PROGRAMME**********************************\n");
	int j,k,tmp;
	for(j=0;j<10;j++)
	{
	s[j].st='s';
	s[j].n=j+1;
	}
	printf("\nEnter the gifts taken by students one by one\n");
	for(j=0;j<10;j++)
	{
	printf("\nGifts taken by Student %c%d  : ",s[j].st,s[j].n);
	scanf("%d",&s[j].gif);
	}

	for(k=0;k<9;k++)
	for(j=0;j<9-k;j++)
	{
		if(s[j].gif<s[j+1].gif)
		{
			tmp=s[j].gif;
			s[j].gif=s[j+1].gif;
			s[j+1].gif=tmp;
		}
	}
	printf("\nOrder in which billing will be processed is:\n");
	for(j=0;j<10;j++)
	{
		printf("\n %c%d : %d",s[j].st,s[j].n,s[j].gif);
	}
	
}

