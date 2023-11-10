#include<stdio.h>


main()
{
	int x=3;
	int y=4;
	int z=5;
	
	int a=x*x+2*x*y+y*y;
	printf("Ans = %d\n",a);
	
	int b=x*x-2*x*y+y*y;
	printf("Ans = %d\n",b);
	
	int c=x*x*x + 3*x*y*x+y + y*y*y;
	printf("Ans = %d\n",c);
	
	int d=x*x*x - y*y*y - 3*x*y*x+y;
	printf("Ans = %d\n",d);
	
	int e=x*x*x + y*y*y + z*z*z + 3*x+y*y+z*z+x;
	printf("Ans = %d\n",e);
	
	int f=x*x*x - y*y*y - z*z*z - 3*x+y+3*y+z+3*z+x;
	printf("Ans = %d\n",f);
	
	int g=x*x + y*y + z*z + 2*x*y+y*z+z*x;
	printf("Ans = %d\n",g);
}