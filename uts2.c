#include <stdio.h>

void main() {
    int angka[1000];
    for (int i = 0; i < 1000; i++) {
        angka[i] = 1;
    };

    // int x = 2;

    // while (x * x <= 1000)
    // {
    //     int n = 2;
    //     while (n * n <= 1000)
    //     {
    //         angka[x*n] = 0;
    //         n++;
    //     }

    //     while (angka[x] == 0)
    //     {
    //         x++;
    //     }
        
        
    // }

    // for (int i = 0; i <= 1000; i++) {
    //     int n = 2*i;
    //     int m = 3;

    //     angka[n] = 0;
    // }

    for(int i = 2 ; i < 1000 ; i++){
        if(angka[i]) {
            for(int a = 2 ; a*i <= 1000 ;a++) {
                angka[i * a] = 0 ;
            }
        }
    }
    
    printf("Angka 3 = %d\n", angka[3]);
    
    for (int i = 1; i < 1000; i++) {
        printf("Angka %d = %d\n", i, angka[i]);
    };
}