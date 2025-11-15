//SABILLA, DARREN JOY I. DIT 1-2

#include <stdio.h>

int main() {

    printf("While Loop\n");
    int d = 1;
while (d <= 10 )
{
    printf("%d ", d);
    d++;
}
printf("\n\nFor Loop\n");
for (int a = 2; a <= 20 ; a += 2)
{
    printf("%d ", a);
}
printf("\n\nDo-While Loop\n");
int r = 1;
do
{
    printf("%d ", r);
    r++;
} while (r <= 5);
return 0;
}