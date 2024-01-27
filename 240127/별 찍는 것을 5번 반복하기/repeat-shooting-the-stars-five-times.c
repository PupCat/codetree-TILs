#include <stdio.h>
void star_p(){
    for(int i = 0; i < 5; i++){
            for(int j = 0; j < 10; j++){
                printf("*");
        }
        printf("\n");
    }

}
int main() {
    star_p();
    return 0;
}