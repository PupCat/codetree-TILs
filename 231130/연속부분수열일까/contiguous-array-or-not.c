#include <stdio.h>
#include <stdlib.h>
int i;
void input(int *nums, int n);
int fun(int *x, int *y, int n, int m);
int main() {
    int n1, n2, sw;
    int *nums1 = NULL; 
    int *nums2 = NULL;
    scanf("%d %d", &n1, &n2);                 
    nums1 = (int*)malloc(sizeof(int)*n1);
    nums2 = (int*)malloc(sizeof(int)*n2);
    input(nums1, n1);
    input(nums2, n2);

    sw = fun(nums1, nums2, n1, n2);
    if(sw==1) printf("Yes\n");
    else printf("No\n");
    free(nums1);
    free(nums2);
    return 0;
}
void input(int *nums, int n){
    for(i = 0; i < n; i++) scanf("%d", &nums[i]);
}
int fun(int *x, int *y, int n, int m){
    int start;
    for(i = 0; i < n; i++){
        if(x[i] == y[0]){
            start =i;
            break;
        }
    }
    if(n - start == m-1) return 0;
    for(i=start+1; i < n; i++){
        int k=0;
        if(x[i]!=y[start+k++]) return 0;
    }
    return 1;
}