#include "head.h"

// fungsi cek pilihan
int cekpil(data input[], char pilih[100], int n){
    int i; // counter
    int mark; // mark untuk menandai pilihan mana yang dipilih
    for(i=0; i<n; i++){
        if(strcmp(input[i].posisi, pilih) == 0){ // cek inputan pekerjaan dengan pilihan apakah sama
            mark = i; // jika sama maka mark menjadi i, karena inputan urut
        }
    }
    return mark; // mengembalikan nilai mark
}

// fungsi cari digit
int caridigit(data input[], int pilihan){
    int temp, digit;
    // temp untuk cek apakah gaji dibagi dengan 1jt hasilnya berapa
    temp = input[pilihan].gaji/1000000;
    if(temp > 0 && temp < 10){ // jika kurang dari 10 maka digit gaji = 1
        digit = 1;
    }
    else if(temp >= 10 && temp < 100){ // jika kurang dari 100 maka digit gaji = 2
        digit = 2;
    }
    else if(temp >= 100){ // jika lebih dari 100 maka digit gaji = 3
        digit = 3;
    }
    return digit; // mengembalikan nilai digit
}

// prosedur cetak output bagian atas (bukan pola)
void cetakatas(int digit){
    // print digit menggunakan nilai dari fungsi digit
    printf("%d diG", digit);
    // print abjad dengan cek digit sesuai ketentuan
    if(digit == 1){
        printf(" c\n\n");
    }
    else if(digit == 2){
        printf(" b\n\n");
    }
    else if(digit == 3){
        printf(" a\n\n");
    }
}

// prosedur cetak pola
// terbagi menjadi 3 blok baris (vertikal)
void cetakpola(int digit, int ketebalan){
    int i, j;
    // blok 1
    for(i=0; i<ketebalan; i++){
        // cetak digit
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 2 || digit == 3){
            for(j=0; j<ketebalan*3; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
       
        // cetak dig
        for(j=0; j<ketebalan*2; j++){ // d
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){ // g
            printf(" ");
        }
        for(j=0; j<ketebalan*2; j++){
            printf("G");
        }
        if(digit == 2){
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf("B");
            }
        }
        printf("\n");
    }
    // blok 2
    for(i=0; i<ketebalan; i++){
        // digit angka
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 2 || digit == 3){
            for(j=0; j<ketebalan*2; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
    
        // print dig
        for(j=0; j<ketebalan*2; j++){ // d
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){ // g
            printf("G");
        }
        if(digit == 2){
            for(j=0; j<ketebalan*2; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf("B");
            }
        }
        printf("\n");
    }
    // blok 3
    for(i=0; i<ketebalan; i++){
        // digit angka
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 2 || digit == 3){
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan*2; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
       
        // cetak dig
        for(j=0; j<ketebalan; j++){ // d
            printf(" ");
        }
        for(j=0; j<ketebalan*2; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){ // g
            printf("G");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("G");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        // cetak abjad digit
        if(digit == 3 || digit == 1){
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan*2; j++){
                if(digit == 3){
                    printf("A");
                }
                else if(digit == 1){
                    printf("C");
                }
            }
        }
        else if(digit == 2){
            for(j=0; j<ketebalan*2; j++){
                printf("B");
            }
        }

        printf("\n");
    }
    // blok 4
    for(i=0; i<ketebalan; i++){
        // cetak digit angka
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 2){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan*2; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 3){
            for(j=0; j<ketebalan*2; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        // cetak dig
        for(j=0; j<ketebalan; j++){ // d
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){ // g
            printf("G");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("G");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        // print abjad digit
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("C");
            }
        }
        else if(digit == 2 || digit == 3){
            for(j=0; j<ketebalan; j++){ 
                if(digit == 2){
                    printf("B");
                }
                else if(digit == 3){
                    printf("A");
                }
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan; j++){
                if(digit == 2){
                    printf("B");
                }
                else if(digit == 3){
                    printf("A");
                }
            }
        }
        printf("\n");
    }
    // blok 5
    for(i=0; i<ketebalan; i++){
        // cetak digit
        if(digit == 1){
            for(j=0; j<ketebalan; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        else if(digit == 2 || digit == 3){
            for(j=0; j<ketebalan*3; j++){
                printf("$");
            }
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
        }
        //  cetak dig
        for(j=0; j<ketebalan; j++){ // d
            printf(" ");
        }
        for(j=0; j<ketebalan*2; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("D");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){ // g
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf("G");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        for(j=0; j<ketebalan; j++){
            printf(" ");
        }
        // cetak abjad digit
        if(digit == 1 || digit == 3){
            for(j=0; j<ketebalan; j++){
                printf(" ");
            }
            for(j=0; j<ketebalan*2; j++){
                if(digit == 1){
                    printf("C");
                }
                else if(digit == 3){
                    printf("A");
                }
            }
        }
        else if(digit == 2){
            for(j=0; j<ketebalan*2; j++){
                printf("B");
            }
        }
        printf("\n");
    }
}