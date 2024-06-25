#include <stdio.h>
#include <string.h>

// typedef struct untuk scan input user
typedef struct{
    char posisi[100];
    long gaji;
    int pengalaman;
} data;

// fungsi untuk cek pilihan (yang akan dicetak adalah yang dipilih)
int cekpil(data input[], char pilih[100], int n);
// fungsi untuk mencari digit dari input yang sudah dipilih di fungsi sebelumnya
int caridigit(data input[], int pilihan);
// prosedur cetak output bagian atas (bukan pola)
void cetakatas(int digit);
// prosedur cetak pola
void cetakpola(int digit, int ketebalan);