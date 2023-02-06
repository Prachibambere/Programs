 
/*
Title- 1. Changing the value of constant local variable using pointer.
Author- Bambere Prachi Gorakh.
ID- 492
Batch- TechnOrbit(PPA-8)
*/

//logically it is wrong

#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int* p=&a;
	(*p)++;
	printf("%d\t%d\n",a,*p);
}
