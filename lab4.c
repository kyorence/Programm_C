#include <stdio.h> 
#include <math.h> 
 
double Perimeter(double a, double b, double c) { 
    return a + b + c; 
} 
double Ploshad(double a, double b, double c) { 
    double semiPerimeter = Perimeter(a, b, c) / 2; 
    return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c)); 
} 

int main() { 
    double a, b, c;
    printf(" Введи длины сторон треугольника: ");
    scanf("%lf %lf %lf", &a, &b, &c); 
 
    if (a + b > c && a + c > b && b + c > a) { 
        double perimeter = Perimeter(a, b, c); 
        double ploshad = Ploshad(a, b, c); 
    
        printf("Периметр треугольника: %lf\n", perimeter); 
        printf("Площадь треугольника: %lf\n", ploshad); 
    } else { 
        printf("Треугольник с такими сторонами не существует!\n"); 
    } 
    return 0; 
}
