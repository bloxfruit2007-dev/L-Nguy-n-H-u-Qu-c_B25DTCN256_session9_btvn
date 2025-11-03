#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    int i, chan = 0, le = 0;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nCac so chan trong mang la: ");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            chan++;
        }
    }

    printf("\nCac so le trong mang la: ");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            le++;
        }
    }

    printf("\n\nTong cong co %d so chan va %d so le.\n", chan, le);

    return 0;
}
