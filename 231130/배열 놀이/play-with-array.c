#include <stdio.h>
#include <stdlib.h>
int n;
void proc(int a, int b, int c, int *p);
int main() {
    int q;
    int *p;
    int a,b,c;
    int i;
    scanf("%d %d", &n, &q);
    p= (int*)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++){
        scanf("%d",&p[i]);
    }
    for(i = 0; i < q; i++){
        scanf("%d ", &a);
        if(a==3) scanf("%d %d", &b, &c);
        else scanf("%d", &b);
        proc(a,b,c ,p);
    }
    free(p);
    return 0;
}
void proc(int a, int b, int c, int *p){
    int i;
    switch(a)
    {
        case 1:
        printf("%d\n", p[b-1]);
            break;
        case 2:
        for(i = 0; i < n; i++){
            if(p[i] == b){
                printf("%d\n", i+1);
                return;}
            }
            printf("0\n");
            break;
        case 3:
            for(i = b; i <= c; i++){
                printf("%d ", p[i-1]);
            }
            printf("\n");
            break;
    }
}