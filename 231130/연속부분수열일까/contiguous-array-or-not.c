#include <stdio.h>
#include <stdlib.h>
int i;
int input(int *arr, int n);
 void continuous_sequence(int *arr1, int *arr2, int n1, int n2);
int main() {
    // 정수 n1과 n2를 입력받습니다.
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int *arr1 = (int*)malloc(sizeof(int)*n1);
	int *arr2 = (int*)malloc(sizeof(int)*n2);
	
    input(arr1, n1);
    input(arr2, n2);

	continuous_sequence(arr1, arr2, n1, n2);
    return 0;
}
int input(int *arr, int n){
     for(i = 0; i < n; i++) scanf("%d", &arr[i]);
 }
void continuous_sequence(int *arr1, int *arr2, int n1, int n2){
for(int i = 0; i < n1; i++) {
		int success = 1;
		
		for(int j = 0; j < n2; j++) {
			if(i + j >= n1) {
				success = 0;
				break;
			}
			
			if(arr1[i + j] != arr2[j]) {
				success = 0;
				break;
			}
		}
		
		if(success == 1) {
			printf("Yes");
			return 0;
		}
	}
	
	printf("No");
	
}