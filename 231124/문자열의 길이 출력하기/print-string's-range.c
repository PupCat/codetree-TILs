#include <stdio.h>
#include <string.h>
int main() {
    char arr[100], arr2[100];
    scanf("%s", arr);
    scanf("%s", arr2);
    
    printf("%d", strlen(arr)+ strlen(arr2));
    return 0;
}