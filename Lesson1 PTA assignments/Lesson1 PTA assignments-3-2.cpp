// Lesson1 PTA assignments
// Part 3-2
#include <stdio.h>

int main() {
    int tem, hum, wea;
    scanf("%d %d %d", &tem, &hum, &wea);

    if (tem < -50 || tem > 50) {
        printf("error\n");
        return 0;
    }

    if (hum < 0 || hum > 100) {
        printf("error\n");
        return 0;
    }

    switch (wea) {
        case 1:
            printf("temperature:%d\n",tem);
            printf("humidity:%d\n",hum);
            printf("weather:sunny\n");
            break;
        case 2:
            printf("temperature:%d\n",tem);
            printf("humidity:%d\n",hum);
            printf("weather:cloud\n");
            break;
        case 3:
            printf("temperature:%d\n",tem);
            printf("humidity:%d\n",hum);
            printf("weather:rainy\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}
