#include <stdio.h>
#include <string.h>
#include <ctype.h>
int atoi(char s[])
{
	int i;
	int num=0;
	for( i = 0; i < strlen(s);i++)
	{
		if(s[i]>='0' && s[i] <= '9')
		num = num*10+(s[i]-'0');
		else
			return num;
	}
}
int main() {
    char st[2][9];
    int i,a,b;
    for(i=0;i<2;i++)
    {
        scanf("%s", st[i]);
    }
    a=atoi(st[0]);
    b=atoi(st[1]);
    printf("%d",a+b);
    return 0;
}