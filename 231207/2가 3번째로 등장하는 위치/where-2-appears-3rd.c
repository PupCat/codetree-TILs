#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    int *arr;
    int count=0;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]==2){
            count++;
            if(count ==3){
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}