#include <stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    do {
    printf("Vvedite a:");
    scanf("%lf",&a);
    printf("Vvedite b:");
    scanf("%lf",&b);
    printf("Vvedite c:");
    scanf("%lf",&c);
    d=b*b-4*a*c;
        printf("d=%lf",d);
    if (d>0) {
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%lf x2=%lf", x1, x2);
    }
if(d==0) {
    x1=(-b/(2*a));
    printf("x1=%lf ", x1);
}
if (d<0){
    printf("\n net korney");
}
