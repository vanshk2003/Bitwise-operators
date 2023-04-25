#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; int b;
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	
	//OPERATIONS
	printf("Output AND = %d \n",(a&b)); //BITWISE AND
	printf("Output OR = %d \n",(a|b)); //BITWISE OR
	printf("Output XOR = %d \n",(a^b)); //BITWISE XOR
	
	
	//TO CHECK IF NUMBER IS EVEN OR ODD
	int c;
	printf("Enter number to check even or odd \n");
	scanf("%d",&c);
	if (c&1)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	
	
	//TO COUNT THE NUMBER OF 1'S IN INTEGER NUMBER
	int d, arr[10],i,count=0,l;
	printf("\nEnter number to count number of 1's \n");
	scanf("%d",&d);
	for(i=0;d>0;i++)
	{
		arr[i]=d%2;
		if(arr[i]==1)
		{
			count=count+1;
		}
		d=d/2;
		l=l+1;
	}
	
	// POWER OF NUMBER 2
	printf("\nThe number of one's are %d ",count);
	for (i=0;i<l-1;i++)
	{
		if (arr[i]==1)
		{
			printf("\nNumber is not a power of 2");break;
		}
		else if(arr[l-1]==1)
		{
			printf("\nNumber is power of 2");break;	
		}
		else
		{
			printf("\nNumber is zero i.e not a power of 2");
		}
	}

}

