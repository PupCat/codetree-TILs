#include <stdio.h>
void max(int n, int m){
    int count = 0;
    int i;
    for(i =1; i <= m; i++){
        if(n % i == 0 && m % i == 0) {
            count = i;
        }
    }
    printf("%d", count);
}
int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    max(n, m);
    return 0;
}