#include <stdio.h>
int main() {
    int a,b,v, tot=0, day=0;
    scanf("%d%d%d", &a, &b, &v);
    while (v > tot) {
        day++;
        tot += a;
        if (tot >= v) {
            printf("%d\n", day);
            break;
        }
        tot -= b;
    }
    return 0;
}
