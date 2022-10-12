#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// Alven Henas Orlando
// L0122016
// UTS no 3.1
void main() {

    int orang = 5;
    int produk;
    double sales[5][6];
    int salesPeople;

    double value[7] ={0.0};
    double valueX[7] ={0,0};


    printf("MASUKKAN KODE KARYAWAN (1-4), NOMER PRODUK (1-5), DAN PENGHASILAN(DOLLAR)\n");
    printf("MASUKKAN NILAI 0 UNTUK MENGHITUNG HASIL\n");
    printf("======================================================================================================\n");
    printf("Kode Karyawan Sales : ");
    scanf("%d", &salesPeople);

    //pengambil input user (looping)
    while (salesPeople != 0) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[salesPeople-1][produk]);

        printf("\nKode Karyawan Sales :");
        scanf("%d", &salesPeople);

    }

    //perhitungan total
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++)
        {
            value[i] += sales[i][j];
        }
    }

    for (int i = 0; i < 5 ; i++) {
        for (int j = 0; j < 4; j++)
        {
            valueX[i] += sales[j][i];
        }
    }

    for (int i = 0; i < 4; i++) {
        valueX[6] += value[i];
    }

    //Menampilkan tabel 
    system("cls");
    printf(" \t1\t2\t3\t4\t5\ttotal\n");
    printf("======================================================================================================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", i+1, sales[i][0], sales[i][1], sales[i][2], sales[i][3], sales[i][4], value[i]);
    }
    printf("======================================================================================================\n");
    printf("total\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", valueX[0], valueX[1], valueX[2], valueX[3], valueX[4], valueX[6]);

}
