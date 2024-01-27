#include <stdio.h>
void rect_prt(int n){
    int count =0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(count < 9){
                count++;
            }
            else count = 1;
            printf("%d ", count);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    rect_prt(n);
    return 0;
}