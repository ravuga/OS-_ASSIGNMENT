#include<stdio.h>
int main()
{
	double m,s,p,e;
	printf("Enter Main memory access time : ");
	scanf("%lf",&m);
	printf("Enter Page fault service time :");
	scanf("%lf",&s);
	e=20000000;
	double x=((0.7*e)+(0.3*s*1000000)-m);
	p=(200-m)/x;
	printf("MAximum Acceptable Page-fault rate is %lf  ",p);	
}
