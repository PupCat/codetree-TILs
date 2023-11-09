#include <stdio.h>

int main() {
    char st;
    char arr[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    int i,cnt=0;
    scanf("%c",&st);
    for(i=0; i<5;i++)
    {
        if(arr[i][2] ==st|| arr[i][3] ==st)
        {
            cnt++;
            printf("%s\n",arr[i]);
        }
    }
    printf("%d",cnt);
    return 0;
}