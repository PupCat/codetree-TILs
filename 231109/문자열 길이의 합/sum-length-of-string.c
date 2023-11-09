#include <stdio.h>
#include <string.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int sum=0, cnt=0;
    char *p;
    char str[101];
    for(i = 0; i < n;i++)
    {
        scanf("%s", str);
        sum += strlen(str);
        if('a'==str[0])
            cnt++;
    }
    printf("%d %d", sum, cnt);
    return 0;
}