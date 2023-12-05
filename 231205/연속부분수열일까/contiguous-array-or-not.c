#include <stdio.h>
#include <stdlib.h>
int input(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
int fun(int *x,int *y, int n, int m){
    int i, j;
    int flag = 0;
    for(i = 0; i< n; i++)
    {
        if(x[i]== y[0]){
            flag = 1;
            for(j =1; j< m; j++){
                if(i+j>=n){flag = 0; break;}
                if(x[i+j]!=y[j]) {flag = 0; break;}
            }
            if(j==m) break;
        }
    }
}
int main() {
    int  n1,  n2;
    int *a1, *a2;
    int flag;
//------malloc-------//
    scanf("%d %d", &n1, &n2);
    a1 = (int*)malloc(sizeof(int)*n1);
    a2 = (int*)malloc(sizeof(int)*n2);
/*-------INPUT-------*/
    input(a1, n1);
    input(a2, n2);
    
    flag = fun(a1, a2, n1, n2);
    if(flag == 1){
        printf("Yes");
    }
    else
        printf("No");

    free(a1);
    free(a2);
    return 0;
}