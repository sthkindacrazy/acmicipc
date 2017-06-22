#include <stdio.h>
int main() {
    int T, x1, y1, x2, y2, n, cx, cy, r;
    int count = 0;
    scanf("%d", &T);
    for(int i = 0 ; i < T ; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n); 
        for( int j = 0 ; j < n ; j++) {
            scanf("%d %d %d", &cx, &cy, &r);
            if((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1) >= r * r || (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2) >= r * r) {   
                if((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1) < r * r) count++;
                if((cx - x2) * (cx - x2) + (cy - y2) * (cy - y2) < r * r) count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}
