#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,a,p;
float q;
	printf("Enter the 1 no");
	scanf("%d",&x);
	printf("Enter the 2 no");
	scanf("%d",&y);
	printf("Enter the 3 no");
	scanf("%d",&z);	
	switch(3)
	{
		case 0: 
			a=x+y+z;
			printf("Addition of the nos is%d ",a);
			break;
			
		case 1:
			a=x-y;
			printf("Subtraction of the nos is%d ",a);
			break;
		case 2:
				a=x*y*z;
			printf("Multiplication of the nos is%d ",a);
			break;
		case 3:
			printf("Enter the radius of circle R=");
			scanf("%d",& p);
			q=3.14*p*p;
			printf("Area of Circle is%f",q);
			break;
	}
}
