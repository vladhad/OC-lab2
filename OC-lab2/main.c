#include <stdio.h>

int main(void){
int a, b, c, d;
printf("===Diskriminant calculator==\n");
printf("Enter a: \n");
scanf("%d", &a);
printf("Enter b: \n");
scanf("%d", &b);
printf("Enter c: \n");
scanf("%d", &c);
d = b*b - 4*a*c;
if(d < 0)
printf("D = %d (equation has no real roots)", d);
else if(d == 0)
printf("D = %d (equation has single root)", d);
else
printf("D = %d (equation has two roots)", d);
}


