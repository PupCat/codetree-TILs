#include <stdio.h>
#include <string.h>
int main() {
    char str[10][21];
    char ch;
    int i,len,sw;
    for(i=0; i< 10; i++)
    {
        scanf("%s", str[i]);
    }
   //fflush(stdin);
    scanf("%*c%c",&ch);
    sw=0;
    for(i = 0; i< 10; i++)
    {
        len=strlen(str[i]);
        if(ch == str[i][len-1])
        {
            printf("%s\n", str[i]);
            sw=1;
        }
    }
    if(sw ==0)
    {
        printf("None");
    }
    return 0;
}