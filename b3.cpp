#include <stdio.h>

void hienThiMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void daoNguocMang(int arr[], int n) {
    for (int i = 0; i < n ; i++) 
    	for(int j = i+1; j<n;j++){
        	int temp = arr[i];
        	arr[i] = arr[j];
        	arr[j] = temp;
        }
}

int main() {
    int arr[100];
    int n;

    // Nh?p s? lu?ng ph?n t? m?ng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nh?p các ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ð?o ngu?c m?ng
    daoNguocMang(arr, n);

    // Hi?n th? m?ng sau khi d?o ngu?c
    printf("Mang sau khi dao nguoc: ");
    hienThiMang(arr, n);

    return 0;
}

