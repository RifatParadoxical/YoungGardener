#include <stdio.h>

int main() {
    int leaf = 1;
    int n;
    scanf("%d", &n);
    for(int i =1; i <= n; i++){
        leaf += 2*i;
    }
    printf("%d", leaf);
    return 0;
}
