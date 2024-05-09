#include <stdio.h>
#include <math.h> //You need to have this so you can display and run the math functions below.

int main(){

double A = sqrt(9);
double B = pow(2, 4);
int C = round(3.14);
int D = ceil(3.14);
int E = floor(3.99);
double F = fabs(-100);

printf("%.2lf\n", A);
printf("%.2lf\n", B);
printf("%d\n", C);
printf("%d\n", D);
printf("%d\n", E);
printf("%.2lf\n", F);

printf("\n");

const double PI = 3.14159;
double radius;
double circumference;
double area;

printf("Enter the radius of the circle: \n");
scanf("%lf", &radius);

circumference = 2 * PI * radius; //Fórmula de cálculo da circunferência.
area = PI * radius * radius; //Fórmula de cálculo da área.

printf("circumfernce: %lf.\n", circumference);
printf("area: %lf.\n", area);

printf("\n");

//Cálculo da hipotenusa de um triângulo reto:

double X;
double Y;
double Z;

printf("Enter side X: ");
scanf("%lf.", &X);

printf("Enter side Y: ");
scanf("%lf.", &Y);

Z = sqrt(X*X + Y*Y);

printf("Side Z: %.4lf.\n", Z);

//IF STATEMENTS:
int age;

printf("Enter your age: \n");
scanf("%d", &age);

if(age >= 18){
    printf("You are now signed up.");
}
else{
    printf("You don't have the minimum age to sign up.");
}








    return 0;
}