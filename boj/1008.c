#include <stdio.h>
int x,y;
int main() {
    scanf("%d %d", &x, &y);
    double a = x*1.0;
    double b = y*1.0;
    double n = a/b;
    printf("%.10f",n);
    return 0;
}
