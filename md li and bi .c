 //menu driven linear and binary
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void accept(int [],int *);
int linear(int arr[],int n,int x);
int half(int arr[],int n,int x);
int main()
 {
	int j=0,n,arr[SIZE],x,k,y;
	char c='y';
	
	 accept(arr,&n);	
	
	        
	  do
	    { 
		  j++;
	     	printf("MENU\n");
	     	printf("1: linear search\n");
	     	printf("2: binary search\n");
	     	printf("3: exit\n");
	     	printf("enter choice\n");
	     	scanf("%d",&c);
			 switch(c)
			 {
			 	case 1:
			 		  if(j!=1)
			 		   {
			 		   	 printf("do u want to search in: \n 1:same array\n2:new array");
			 		   	  scanf("%d",&k);
			 		   	  if (k!=1)
							  accept(arr,&n);
			 		   	}
					printf("enter element to search\n");
						   scanf("%d",&x);
			 		y=linear(arr,n,x);
			 		  if(y!=-1)
			 		       printf("%d is present at position %d",x,y+1);
			 		  else 
			 		    printf("%d is not present in array\n",x);
			 		break;
					 
				
				
				case 2:
					if(j!=1)
			 		   {
			 		   	 printf("do u want to search in: \n  1:same array\n  2:new array");
			 		   	  scanf("%d",&k);
			 		   	  if (k==2)
			 		   	     accept(arr,&n);
			 		   	 }
			 		   	    printf("enter the element to be searched\n");
								 scanf("%d",&x);	
			 		   y=half(arr,n,x);
			 		    if(y!=-1)
			 		       printf("%d is present at position %d",x,y+1);
			 		    else 
			 		    printf("%d is not present in array\n",x);
			 		break;
			 		
			 	
				case 3:
				    exit(0);
					break;
					
				default :
				    printf("wrong choice\n");
					
		}
		printf("\ndo u want to continue y/n \n");
					scanf("  %c",&c);	
					
	}
		while((c=='y')||(c=='Y'));
		return 0;
		
    
}
	void accept(int arr[],int *n)
     {
 	    int i;
 	        printf("enter the size of array");
	          scanf("%d",*&n);
	        printf("enter array elements");
	           for(i=0;i<*n;i++)
	              scanf("%d",&arr[i]);
	          
     }
 
 
			 
	int linear(int arr[],int n,int x)
	  	{
	         int i,flag=1;	
	           for(i=0;i<n;i++)
		        {
		  	      if(x==arr[i])
		  	      {
		  	      flag=0;
		  	      break;
		  	      }
					}
		  	    
		  	    if (flag==0)
		  	        return i;
               else 
                    return -1;
        }
 
 
 int half(int arr[],int n,int x)
 {
 	int l,u,m,flag=1;
 	    while(l<=u)
 	     {
 	     	m=(l+u)/2;
 	     	 if(x==arr[m])
 	     	 {
			   flag=0;
			   break;
		     }
 	         else if(x>=arr[m])
				  l=m+1;
			else if(x<=arr[m])
				  u=m-1;   
 	     }
		  if (flag==0)
		    return m;
		  else 
		    return -1; 
		  
 }
