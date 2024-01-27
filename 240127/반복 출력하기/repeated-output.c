#include <stdio.h>
void loop_p(int n){
    for(int i = 0; i < n; i++)
        printf("12345^&*()_\n");
}
int main() {
    int n;
    scanf("%d", &n);
    loop_p(n);
    return 0;
}