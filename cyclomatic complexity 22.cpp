#include<stdio.h>
#include<conio.h>
/* cyclomatic complexity = a-b+c  .
a = edges
b = nodes in flow graph
c = nodes in exit points
x = cyclomatic complexity */

int main()
{
	int a,b,c;
	printf("\nenter the input for edges : ");
	scanf("%d",&a);
	
	printf("\nenter the input for nodes in flow graph : ");
	scanf("%d",&b);
	
	printf("\nenter the input for nodes in exit points : ");
	scanf("%d",&c);
	
	int x = a - b + c;
	
	printf("\nthe cyclomatic complexity is = %d",x);
	
	return 0;
}
