#include <stdio.h>
// Alven Henas Orlando
// L0122016
// UTS no 3.2
void main() {
    // membuat array dengan index 0-999 yang value nya 1
    int angka[1000];
    for (int i = 0; i < 1000; i++) {
        angka[i] = 1;
    };

    // perkalian untuk menentukan bilangan prima 
    for(int i = 2 ; i < 1000 ; i++){
        if(angka[i]) {
            for(int a = 2 ; a*i <= 1000 ;a++) {
                angka[i * a] = 0 ;
            }
        }
    }
    
    printf("==========BILANGAN PRIMA==========\n");

    //print bilangan prima (looping)
    for (int i = 2; i < 1000; i++) {
        if(angka[i] == 1 ){
        printf("Angka %d \n", i );
            
        }
    };
}
