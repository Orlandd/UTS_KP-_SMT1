#include <stdio.h>
#include <string.h>


void main(){
    char str[1000];
    char code[100][100] ={
        "petani",
        "cara",
        "rakyat"
    };
    char * hasil;
    int panjang;
    int jumlah = 0;

    printf("jumlah:", jumlah);
    printf("code 1 %s", code[2]);

    panjang = strlen(str);

    printf("masukkan pesan: ");
    gets(str);
    // cari kata "code"
    // for (int i = 0; i <= panjang ; i++)
    // {
    //     hasil = strstr(str,code[2]);

    //     if(hasil == NULL) {
    //         // jumlah +=1 ;
    //     } else {
    //         jumlah +=1 ;
    //     }

    // }
    // hasil = strstr(str,code[0]);

    // while(hasil != NULL){
    //     jumlah += 1;
    //     hasil = strstr(hasil+1, code);
    // }

    for(int i = 0 ; i < 3 ; i++) {
        hasil = strstr(str,code[i]);
        if (hasil != 0) {
            jumlah +=1;
        }
    }


    printf("jumlah: %d", jumlah);

        // strncpy (hasil, "kodevv", 6);
        // puts(str);

    // hasil = strstr(str,code);

    // lalu ubah kata "code" menjad "kode"
    // strncpy (hasil, "kodevv", 6);

    // puts(str);
}