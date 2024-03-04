#include <stdio.h>

int keliling(int sisi){
    return sisi*4;
}

int luas(int sisi){
    return sisi*sisi;
}

int volume(int sisi){
    return sisi*sisi*sisi;
}
int main(){
    int panjang;
    scanf("%d", &panjang);
    int k = keliling(panjang);
    int l = luas(panjang);
    int v = volume(panjang);
    printf("%d\n%d\n%d", k,l,v);
    return 0;

}
// Format Masukan:
// Baris 1 berisi integer sisi

// Format Luaran:
// Baris 1 menampilkan keliling persegi
// Baris 2 menampilkan luas persegi
// Baris 3 menampilkan volume kubus

// Note: Panjang sisi persegi = panjang sisi kubus, gunakan function untuk menghitung ketiganya