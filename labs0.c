#include <stdio.h>
#include <math.h>

int main() 
{
    int x = 0;
    while(x<1){
        double a, b, c, d, x1,x2;
        int t;
        a = 2; b = 4; c = 2;
        
        printf("Vvedite a:");
        scanf("%lf",&a);
        printf("Vvedite b:");
        scanf("%lf",&b);
        printf("Vvedite c:");
        scanf("%lf",&c);
        
        d = b * b - 4 * a * c;
        printf("d = %lf", d);
        if (d>0) {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("x1 = %lf x2 = %lf\n",x1,x2);
    }
    if (d == 0){
        x1 = (-b+sqrt(d))/(2*a);
        printf("x1 = %lf\n",x1);
    }
    if (d < 0){
        printf("Korney Net");
    }
    printf("Prodolgit 1, or 0\n");
    scanf("%d",&x); // Yslovie vihoda iz cikla
    }
    printf("Goodbye");
    
    return 0;
}
