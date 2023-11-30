#include <stdio.h>
#include <stdlib.h>
int i;
int input(int *arr, int n);
void continuous_sequence(int *a1, int *a2, int n1, int n2);
int main() {
    int  n1,  n2;
    int *a1, *a2;
//------malloc-------//
    scanf("%d %d", &n1, &n2);
    a1 = (int*)malloc(sizeof(int)*n1);
    a2 = (int*)malloc(sizeof(int)*n2);
/*-------INPUT-------*/
    input(a1, n1);
    input(a2, n2);
/*-------OUTPUT------*/

    continuous_sequence(a1, a2, n1, n2);
    
    free(a1);
    free(a2);
    return 0;
}
int input(int *arr, int n){
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
}
void continuous_sequence(int *a1, int *a2, int n1, int n2){
    int start,j=0, stop = 0;

    for(i = 0; i < n1; i++){
        if(a1[i] == a2[0]){
            start = i;
            break;
        }
    }
    for(i = start; i < n2; i++){
        j++;
        if(a1[i] == a2[j]){
            stop = 0;
        }
        else{
            stop = 1;
            break;
        }
    }
    if(stop == 0){
        printf("Yes");
    }
    else
        printf("No");
    

}