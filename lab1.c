#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double D, x1, x2;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    D = pow(b, 2) - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        printf("Two roots:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        printf("One root:\n");
        printf("x = %.2lf\n", x1);
    }
    else
    {
        printf("No real roots\n");
    }

    return 0;
}
