 
/*
Title- 1. pointer practice.
Author- Bambere Prachi Gorakh.
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int* p=&a;
	(*p)++;
	printf("%d\t%d\n",a,*p);
}
