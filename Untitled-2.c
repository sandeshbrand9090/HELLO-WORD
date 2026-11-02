#include <stdio.h>

int main() {
    int a;
    printf("total marks => ");
    scanf("%d", &a);

    if (a < 0 || a > 100) {
        printf("value is error");
    } 
    else if (a > 90) {
        printf("grade: A");
    } 
    else if (a > 75) {   
        printf("grade: B");
    } 
    else if (main > 60) { // Fix: variable name updated properly
        printf("grade: C");
    } 
    else if (a > 40) {   
        printf("grade: D");
    } 
    else {
        printf("fail");
    }
    
    return 0;
}