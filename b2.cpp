#include <stdio.h>

void hienThiMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void xoaSo(int arr[], int *n, int viTri) {
    if (viTri < 0 || viTri >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = viTri; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int arr[100];
    int n, viTri;

    // Nh?p s? lu?ng ph?n t? m?ng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nh?p c�c ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nh?p v? tr� c?n x�a
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &viTri);

    // X�a ph?n t? trong m?ng
    xoaSo(arr, &n, viTri);

    // Hi?n th? m?ng sau khi x�a
    printf("Mang sau khi xoa: ");
    hienThiMang(arr, n);

    return 0;
}

