#include <stdio.h>

int main() {
    int transaksi;
    scanf("%d", &transaksi); 
    int total = 0;
    int nominal;
    if (transaksi > 0) {
        for (int i = 0; i < transaksi; i++) {
            scanf("%d", &nominal); 
            total = total + nominal;
        }
        printf("%d", total);
    } else {
        printf("Tidak ada transaksi hari ini");
    }
    return 0;
}
