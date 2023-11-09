#include <stdio.h>
#include<string.h>
int main() {
    char st,*p;
    char str[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    int i,cnt=0;
    scanf("%c",&st);
    for(i=0; i<5;i++)
    {
    	p=strchr(str[i]+2,st);
    	if(p-str[i]==2||p-str[i]==3){
            printf("%s\n",str[i]);
    		cnt++;
    }
    }
    printf("%d",cnt);
    return 0;
}