//SABILLA, DARREN JOY I. DIT 1-2

#include <stdio.h>

int main(){

    int a = 10, b = 30, c = 50;
    int add = a + b;
    int sub = c - b;
    int multi = a * b * c;
    float divi = (float) a / c;

    int priceofjollibee = 45;
    int priceofmcdonaldsfries = 55;

    printf ("Arithmetic Operations\n");
    printf(" n1 = 10, n2 = 30, n3 = 50\n");
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", multi);
    printf("Division: %f \n\n", divi);

    printf("Logical Operators\n");
    printf("priceofjollibee = 45, priceofmcdonaldsfries = 55\n");

    if (priceofmcdonaldsfries > priceofjollibee || priceofmcdonaldsfries < 100)
    {printf("McDonald's Fries is more expensive than Jollibee's and still affordable.\n");
}
    printf("%s\n", (priceofmcdonaldsfries > priceofjollibee && priceofmcdonaldsfries < 50)
                ? "McDonald's fries cost less than 50 pesos.\n"
                : "McDonald's fries cost more than 50 pesos.\n");
    if (!(priceofmcdonaldsfries < priceofjollibee))
    {printf("McDonald's Fries is NOT cheaper than Jollibee's.\n\n");
} else{printf("Mcdonald's fries is cheaper than Jollibee's.\n\n");
}
    printf("Assignment Operators\n");
    b -= c;
    printf("After b -= c -> b = %d\n", b);     

    c *= 2;
    printf("After c *= 2 -> c = %d\n", c);

    a /= 2;
    printf("After a /= 2 -> a = %d\n", a);
    return 0;
}