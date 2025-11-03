#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n]; 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("\nMang sau khi dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
