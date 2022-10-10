#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void jumlah(double sales[5][6]) {
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t\n", i+1, sales[i][0], sales[i][1], sales[i][2], sales[i][3], sales[i][4]);
    }
}

void data(int kode) {
    double total = 0.0;
    double sales[5][6];
    int produk;
    int kodeKaryawan;

    if(kode == 1 ) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[0][produk]);

        printf("\n");
        printf("Kode Karyawan Sales : ");
        scanf("%d", &kodeKaryawan);
        
        data(kodeKaryawan);
        // printf("%lf", sales[0][1]);
    } else if (kode == 2) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[1][produk]);

        printf("\n");
        printf("Kode Karyawan Sales : ");
        scanf("%d", &kodeKaryawan);

        data(kodeKaryawan);
    } else if (kode == 3) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[2][produk]);

        printf("\n");
        printf("Kode Karyawan Sales : ");
        scanf("%d", &kodeKaryawan);

        data(kodeKaryawan);
    } else if (kode == 4) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[3][produk]);

        printf("\n");
        printf("Kode Karyawan Sales : ");
        scanf("%d", &kodeKaryawan);

        data(kodeKaryawan);
    } else if (kode == 5) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[4][produk]);

        printf("\n");
        printf("Kode Karyawan Sales : ");
        scanf("%d", &kodeKaryawan);

        data(kodeKaryawan);
    }

}



void main() {
    // const int ORANG = 5, PRODUKS = 6;
    // double sales[ ORANG ][ PRODUKS ] , value, totalSales, productSales[ PRODUKS ] ;
    // int salesPerson, product;
    // scanf("%d", &salesPerson);
    
    // while (salesPerson != 0)
    // {
    //     scanf("%d%d", &product, &value);
    //     printf("product : %d  value: %d", product, value);
    //     sales[salesPerson][product] += value;
    //     printf("%d", sales[1][2]);
    // }
    // printf("test");

    int orang = 5;
    int produk;
    double sales[5][6];
    int salesPeople;
    // double value1, value2, value3, value4, value5, value6 = 0;
    double value[7] ={0.0};
    double valueX[7] ={0,0};


    printf("MASUKKAN KODE KARYAWAN (1-4), NOMER PRODUK (1-5), DAN PENGHASILAN(DOLLAR)\n");
    printf("MASUKKAN NILAI 0 UNTUK MENGHITUNG HASIL\n");
    printf("======================================================================================================\n");
    printf("Kode Karyawan Sales : ");
    scanf("%d", &salesPeople);

    while (salesPeople != 0) {
        printf("Produk ke- :");
        scanf("%d", &produk);
        produk -= 1;
        printf("Penghasilan: ");
        scanf("%lf", &sales[salesPeople-1][produk]);

        printf("\nKode Karyawan Sales :");
        scanf("%d", &salesPeople);

    }

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; i < 5; j++)
    //     {
    //         value[i] += sales[i][j];
    //     }
    // }

    // for (int i = 0; i < 5 ; i++) {
    //     for (int j = 0; i < 4; j++)
    //     {
    //         valueX[i] += sales[j][i];
    //     }
    // }

    for (int i = 0; i < 5; i++) {
        value[0] += sales[0][i];
    }
    for (int i = 0; i < 5; i++) {
        value[1] += sales[1][i];
    }
    for (int i = 0; i < 5; i++) {
        value[2] += sales[2][i];
    }
    for (int i = 0; i < 5; i++) {
        value[3] += sales[3][i];
    }


    for (int i = 0; i < 4; i++) {
        valueX[0] += sales[i][0];
    }
    for (int i = 0; i < 4; i++) {
        valueX[1] += sales[i][1];
    }
    for (int i = 0; i < 4; i++) {
        valueX[2] += sales[i][2];
    }
    for (int i = 0; i < 4; i++) {
        valueX[3] += sales[i][3];
    }
    for (int i = 0; i < 4; i++) {
        valueX[4] += sales[i][4];
    }


    // for (int i = 0; i < 4; i++) {
    //     value[5] += value[i];
    // }

    for (int i = 0; i < 4; i++) {
        valueX[6] += value[i];
    }


    // value6 = value1+value2+value3+value4;

    printf(" \t1\t\t2\t\t3\t\t4\t\t5\t\t\n");
    printf("======================================================================================================\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", i+1, sales[i][0], sales[i][1], sales[i][2], sales[i][3], sales[i][4], value[i]);
    }
    printf("======================================================================================================\n");
    printf("total\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", valueX[0], valueX[1], valueX[2], valueX[3], valueX[4], valueX[6]);

    // data(salesPeople);
    // jumlah(sales);

    // printf("Masukan data penjualan\n");

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0 ; j < 5 ; j++) {
    //         printf("Sales no %d\n", i+1);
    //         printf("Produk %d :", j+1);
    //         scanf("%d", &sales[i][j]);
    //         printf("\n");
    //     }
    // }
}