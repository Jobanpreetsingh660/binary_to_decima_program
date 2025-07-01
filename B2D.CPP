//Program to convert binary number into decimal number

#include<stdio.h>
#include<conio.h>
void main()
{
long int n,b=0,i=1,r; //intialized b and i
clrscr();
printf("Enter the number in binary= ");
scanf("%ld",&n);
while(n!=0)
{
r=n%10;
n=n/10;
b=b+(r*i);
i=i*2;
}
printf("Number in decimal= %ld",b);
getch();
}
