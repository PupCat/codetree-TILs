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
    int start;

    for(i = 0; i < n1; i++){
        if(a1[i] == a2[0]){
            start = i;
            break;
        }
    }
    for(i = start-1; i < n2; i++){
        if(a1[i] != a2[i]){
            printf("No");
            break;
        }
        else{
            printf("Yes");
            break;
        }
    }
    

}