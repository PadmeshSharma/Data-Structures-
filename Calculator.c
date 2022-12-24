#include<stdio.h>
void add(int a,int b)
{
	printf("sum=%d",a+b);
}
void sub(int a,int b)
{
	printf("Difference=%d",a-b);
}
void mul(int a,int b)
{
	printf("Product=%d",a*b);
}
void div(int a,int b)
{
	printf("Division=%d",a/b);
}
int main()
{
	int a,b,ch,con;
	do
	{
		printf("ENTER TWO NUMBERS a AND b:\n");
		scanf("%d%d",&a,&b);
		printf("1 FOR ADDITION\n2 FOR SUBTRACTION\n3 FOR MULTIPLICATION\n4 FOR DIVISION\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add(a,b);
				break;
			case 2:
			    sub(a,b);
				break;
			case 3:
			    mul(a,b);
				break;
		    case 4:
			    div(a,b);
				break;
			default:
				printf("INVALID CHOICE!!");	
				break;	
		}
		printf("IF YOU WANT TO CONTINUE PRESS 0\n");
		scanf("%d",&con);
	}
	while(con==0);
	return 0;
}

