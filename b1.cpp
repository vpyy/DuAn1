#include <stdio.h>

void nhap(int arr[],int n){
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void xuat(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void chenSo(int arr[], int *n, int viTri, int giaTri) {
    if (viTri < 0 || viTri > *n) {
        printf("Vi tri khong hop le!\n");   
    }
    else{
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }

    arr[viTri] = giaTri;
    (*n)++;
}
}
main() {
    int arr[100];
    int n, viTri, giaTri;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
	nhap(arr, n);
    xuat(arr, n);

    printf("Nhap vi tri can chen: ");
    scanf("%d", &viTri);
    printf("Nhap gia tri can chen: ");
    scanf("%d", &giaTri);

    chenSo(arr, &n, viTri, giaTri);

    printf("Mang sau khi chen: ");
    xuat(arr, n);
}

