#include <stdio.h>

int main() {
    int positive, negative;
    char c1, c2;

    scanf("%c %c", &c1, &c2);

    positive = (int)c1 + (int)c2;
    if((int)c1 < (int)c2)
   		negative = (int)c2 - (int)c1;
	else
		negative = (int)c1 - (int)c2;
    printf("%d %d", positive, negative);

    return 0;
}