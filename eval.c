#include<stdio.h>
#include<conio.h>
void main()
{
int firstno,secondno,result;
clrscr();
printf("Enter first number: ");
scanf("%d",&firstno);
printf("Enter second number: ");
scanf("%d",&secondno);
result=firstno+secondno;
printf("Addition of numbers are %d",result);
result=firstno-secondno;
printf("subtraction of numbers is %d",result);
getch();
}
