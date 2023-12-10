#include<stdio.h>
#include<conio.h>
#define f(x, y) y - (x * x)
int main() {
    float x0, y0, xn, yn, slope, h;
    int i, n;

    printf("Enter initial condition\n");
    printf("x0=");
    scanf("%f", &x0);
    printf("y0=");
    scanf("%f", &y0);
    printf("Enter number of steps:");
    scanf("%d", &n);
     printf("Enter calculation point xn:");
   scanf("%f", &xn);
   h = (xn - x0) / n;

    printf("-----\n");

    for (i = 0; i < n; i++) {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        printf("%.6f\t%.6f\t%.6f\t%.6f\n", x0, y0, slope, yn);
        y0 = yn;
        x0 = x0 + h;
    }

    printf("\nValue of y at x=%0.2f is %0.6f", xn, yn);

    return 0;
}

