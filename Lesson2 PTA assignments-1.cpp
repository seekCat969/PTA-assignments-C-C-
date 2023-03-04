// Lesson2 PTA assignments
// Part 1
#include <stdio.h>

int main() {
    float score;
    scanf("%f", &score);
    
    if (score >= 90) {
        printf("A\n");
    } 
    else if (score >= 80) {
        printf("B\n");
    } 
    else if (score >= 70) {
        printf("C\n");
    } 
    else if (score >= 60) {
        printf("D\n");
    } 
    else {
        printf("E\n");
    }
    
    return 0;
}