#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand( time(NULL) );

    int a [10];
    for (int i = 0; i < 9; i++){
        a[i] = rand();
    }

    a[9] = 0;

    for (int i = 0; i < 10; i++){
        printf("%d  ", a[i]);
    }

    int b [10];
    int* p = a + 9;

    for(int i = 0; i < 10; i++){
        b[i] = *p;
        p--;
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%d  ", b[i]);
    }
}