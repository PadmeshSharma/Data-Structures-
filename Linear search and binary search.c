#include<stdio.h>
#define SIZE 100
void linearsearch(int a[],int n,int x)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			flag=1;
			break;
		}
   } 
		if(flag==0)
            printf("Element not found");
        else
            printf("Element was found at position %d",i+1);
	
}

void binarysearch(int a[],int n,int x)
{
	int l,m,u;
	l=0,u=n-1;
	while (l<=u)
	{
		m=(l+u)/2;
		{
			if(a[m]==x)
			{
				printf("Element found at position %d",m);
				break;
			
		    }
			else if (x<a[m])
			u=m-1;
			else if (x>a[m])
			l=m+1;
		}
	}
	if (l>u)
	{
		printf("Element not found");
	
	}
}

int main()
{
	int a[SIZE],i,x,n,ch;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("enter the elements of array\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched");
	scanf("%d",&x);
	printf("Enter your choice\n");
	printf("1: For Linear Search\n");
	printf("2: For Binary Search");
	scanf("%d",&ch);
	switch(ch)
	{
		 case 1 :
			{
				linearsearch(a,n,x);
				break;
			}
		case 2 :
			{
				binarysearch(a,n,x);
				break;
			}
		
		default:
				printf("Invalid choice");
				break;
			
	}
}
