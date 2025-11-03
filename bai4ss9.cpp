#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    int i;
    int tong = 0;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        tong += a[i]; 
    }

    float trungBinh = (float)tong / n;
    printf("\nGia tri trung binh cua cac phan tu trong mang la: %.2f\n", trungBinh);

    return 0;
}
