#include <stdio.h>
//最大值與最小值
int main(){
    float num[10];
    float max, min;
    for (int i=0; i<10; i++) {
        scanf("%f", &num[i]);
    }
    max = num[0];
    min = num[0];
    for (int i=0; i<10; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }
    
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
    return 0;
}
