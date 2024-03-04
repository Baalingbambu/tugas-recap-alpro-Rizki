#include <stdio.h>

int main(){
    int ukuranArr;
    scanf("%d", &ukuranArr);
    int arr[ukuranArr];
    for(int i = 0; i < ukuranArr; i++){
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for(int i = 0; i < ukuranArr; i++){
        total += arr[i];
    }
    printf("%d",total);
    return 0;
}
// Format Masukan:
// Baris 1 berisi integer jumlah elemen yang dimasukan pada array
// Baris 2 berisi nilai setiap elemen yang akan dimasukan

// Format Luaran:
// Hasil penjumlahan seluruh elemen pada array