#include <stdio.h>
int main() {
    int s,m,w,l;
    scanf("%d%d", &s, &m);
    if (((s+m)%2==1) || (s < m)) {
        printf("%d\n", -1);
    } else {
        w = (s+m)/2;
        l = s - w;
        printf("%d %d\n", w, l);
    }
    return 0;
}
