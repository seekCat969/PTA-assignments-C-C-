// Lesson1 PTA assignments
// Part 3
#include <stdio.h>

int main()
{
/*定义tem hum wea三个变量👇*/
    int tem,hum,wea;
    scanf("%d %d %d",&tem,&hum,&wea);
/*对tem和hum做判断👇*/
    if (tem < -50 || tem > 50) {
        printf("error\n");
        return 0;
    }

    if (hum < 0 || hum > 100) {
        printf("error\n");
        return 0;
    }
/*if 判断wea的数值 👇*/
    if(wea == 1){
        printf("temperature:%d\n",tem);
        printf("humidity:%d\n",hum);
        printf("weather:sunny\n");
    }
    else if(wea == 2){
        printf("temperature:%d\n",tem);
        printf("humidity:%d\n",hum);
        printf("weather:cloud\n");         
    }
    else if(wea == 3){
        printf("temperature:%d\n",tem);
        printf("humidity:%d\n",hum);        
        printf("weather:rainy\n");
    }
    else{
        printf("error\n");
        return 0;
    }
}