#include <stdio.h>

int main(void) {
    int input = 0;

    while(!input) {
        printf("輸入一數：");
        scanf("%d", &input);

        if(input != 0) {
            printf("100 / %d = %f\n", input, (double) 100 / input);
        } else {
            puts("除數不可為 0");
        }
    }

    return 0;
}
