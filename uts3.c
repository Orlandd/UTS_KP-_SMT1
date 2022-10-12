#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Alven Henas Orlando
// L0122016
// UTS no 3.3
void main(){
    char str[1000];
    // menampung daftar kata 
    char kata[100][100] ={
        "promo",
        "undian",
        "paket",
        "bima",
        "xtra",
        "memenangkan",
        "kuota",
        "selamat",
        "mendapatkan",
        "rekening",
        "hubungi",
        "pemenang",
        "persen",
        "judi",
        "online",
        "xxx",
        "sex",
        "casino",
        "bonus",
        "save",
        "mlm",
        "666",
        "vegas",
        "call",
        "buy",
        "link",
        "prize",
        "bitcoin",
        "elon",
        "eth"
    };
    // menampung daftar frasa 
    char frasa[100][100] = {
        "selamat anda",
        "memenangkan undian",
        "hubungi nomor",
        "rekening anda",
        "nomor anda",
        "promo kuota",
        "paket internet",
        "bima tri",
        "my telkomsel",
        "isi pulsa",
        "pasti murah",
        "access now",
        "buy now",
        "click here",
        "order now",
        "free gift",
        "hot babes",
        "free hosting",
        "free membership",
        "giving away",
        "win big",
        "cash bonus",
        "earn cash",
        "financial freedom",
        "get paid",
        "make money",
        "pure profit",
        "weight loss",
        "no refunds",
        "life insuranse"
    };

    char * hasil;
    char * hasil1;
    int scoreSpam = 0;
    int scoreSpam1 = 0;
    int j = 0;

    printf("SCAN TEXT / EMAIL SPAM\n");
    printf("input text: ");
    gets(str);

    //merubah huruf besar ke huruf kecil 
    while (str[j]) {
        str[j] = tolower(str[j]);
        j++;
    }

    // mescan kata 
    for(int i = 0 ; i < 30 ; i++) {
        hasil = strstr(str,kata[i]);
        if (hasil != 0) {
            scoreSpam +=1;
        }
    }

    // mescan frasa
    for(int k = 0 ; k < 30 ; k++) {
        hasil1 = strstr(str,frasa[k]);
        if (hasil1 != 0) {
            scoreSpam1 +=1;
        }
    }

    // menampilkan score spam kata dan frasa
    printf("\n\n----------------------------\n");
    printf("score word spam : %d\n", scoreSpam);
    printf("score phrases : %d\n", scoreSpam1);

    // pemisalan termasuk spam ==> kata minimal 4 frasa minimal 2
    if(scoreSpam >= 4 && scoreSpam1 >= 2) {
        printf("Teks tersebut kemungkinan spam (the text is probably spam)");
    } else {
        printf("Teks tersebut kemungkinan bukan spam (the text is probably not spam)");
    }
}
