#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, *arr;
    int sum = 0;
    char result[12];
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    for(i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sprintf(result,"%d",sum);

    printf("%s%c",result+1,result[0]);
    return 0;
}