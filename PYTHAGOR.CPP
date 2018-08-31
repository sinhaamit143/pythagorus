#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int base,perp;
 double hyp;
 clrscr();
 printf("Find the value of hyp =");

 printf("\nEnter the value of base=");
 scanf("%d",&base);
 printf("\nEnter the value of perp =");
 scanf("%d",&perp);
 hyp=base*base+perp*perp;
 hyp=sqrt(double(hyp));
 printf("\n\nTHe value of hyp is = %lf",hyp);
printf("\n--------------------------------------------------------");

 printf("\nFind the value of base");

 int h,p;
 double b;
 printf("\nEnter the value of h=");
 scanf("%d",&h);
 printf("\nEnter the value of p=");
 scanf("%d",&p);
 b=h*h-p*p;
 b=sqrt(double(b));

 printf("\n\nThe value of b = %lf",b);
printf("\n--------------------------------------------------------");

 printf("\nFind the value of perp=");

 int hh,bb;
 double pp;
 printf("\nEnter the value of hh =");
 scanf("%d",&hh);
 printf("\nEnter the value of bb =");
 scanf("%d",&bb);
 pp=hh*hh+bb*bb;
 pp=sqrt(double(pp));

 printf("\n\nThe value of pp = %lf",pp);


 getch();

}