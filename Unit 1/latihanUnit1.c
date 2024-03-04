#include <stdio.h>

int main(){
    int b1a,b1b,b2a,b2b,b3a,b3b;
    scanf("%d %d", &b1a,&b1b);
    scanf("%d %d", &b2a,&b2b);
    scanf("%d %d", &b3a,&b3b);
    float baris1 = (float)b1a / b1b;
    float baris2 = (float)b2a * b2b;
    float baris3 = (float)b3a / b3b;
    printf("%.2f\n%.2f\n%.2f\n", baris1,baris2,baris3);
    return 0;
}
// Format masukan:
// Baris 1 berisi 2 integer, yang pertama merupakan jarak, yang kedua merupakan waktu
// Baris 2 berisi 2 integer, yang pertama merupakan kecepatan, yang kedua merupakan waktu
// Baris 3 berisi 2 integer, yang pertama merupakan jarak, yang kedua merupakan kecepatan

// Format luaran:
// Baris 1 menampilkan hasil perhitungan kecepatan dalam float (2 angka dibelakang koma)
// Baris 2 menampilkan hasil perhitungan jarak dalam float (2 angka dibelakang koma)
// Baris 3 menampilkan hasil perhitungan waktu dalam float (2 angka dibelakang koma)
