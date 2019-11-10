#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function    
   
    *a = ((*a) + (*b));
   // *b = (*a - *b ); value at b will 4
    //*b = abs(*b - *b); value is 0 now at b variable position 4-4=0
    *b = abs(*a - *b - *b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

