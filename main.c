#include "head.h"

int main() {
    // variabel counter dan input ketebalan
    int n, i, ketebalan;
    // variabel string pilihan pekerjaan
    char pilih[100];
    // scan berapa banyak array input
    scanf("%d", &n);
    // buat typedef sebanyak input sebelumnya
    data input[n];
    // scan input
    for(i=0; i<n; i++){
        scanf("%s %ld %d", &input[i].posisi, &input[i].gaji, &input[i].pengalaman);
    }
    scanf("%s %d", pilih, &ketebalan);

    int pilihan = cekpil(input, pilih, n); // tampung fungsi cekpil kedalam "pilihan" agar tau inputan mana yang dipilih
    int digit = caridigit(input, pilihan); // menampung nilai cek digit berapa

    cetakatas(digit);
    cetakpola(digit, ketebalan);

    return 0;
}