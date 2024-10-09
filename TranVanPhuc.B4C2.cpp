#include <stdio.h>

int laSoHoanThien(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) 
			sum += i;
    }  
    return sum == num;
}

void bai32(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) 
        if (laSoHoanThien(arr[i])) 
            count++;
    printf("So luong so hoan thien trong day: %d\n", count);
}

void bai34(int arr[], int n) {
    int am = 0, duong = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0) 
			am++;
        else if (arr[i] > 0) 
			duong++;
    printf("So luong so am: %d\n", am);
    printf("So luong so duong: %d\n", duong);
}

void bai36(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
        if (arr[i] % 2 != 0) 
            sum += arr[i];
    printf("Tong cac so le: %d\n", sum);
}

void bai38(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
        if (arr[i] > 0) 
            sum += arr[i];
    printf("Tong cac so duong: %d\n", sum);
}

void bai40(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i];
    printf("So lon nhat trong day: %d\n", max);
}

void bai42(int arr[], int n) {
    int maxChan = -1;
    for (int i = 0; i < n; i++) 
        if (arr[i] % 2 == 0 && (arr[i] > maxChan)) 
            maxChan = arr[i];
    if (maxChan!=-1)
        printf("So chan lon nhat: %d\n", maxChan);
   	else 
        printf("Khong co so chan trong day.\n");
}

main() {
    int n, choice;
    printf("Nhap so phan tu trong day: ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
    	printf("Chon mot bai tap tu menu:\n");
    	printf("1. Dem so hoan thien trong day\n");
    	printf("2. Dem so am va duong trong day\n");
    	printf("3. Tinh tong cac so le trong day\n");
   		printf("4. Tinh tong cac so duong trong day\n");
    	printf("5. Tim so lon nhat trong day\n");
    	printf("6. Tim so chan lon nhat trong day\n");
    	printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai32(arr, n);
                break;
            case 2:
                bai34(arr, n);
                break;
            case 3:
                bai36(arr, n);
                break;
            case 4:
                bai38(arr, n);
                break;
            case 5:
                bai40(arr, n);
                break;
            case 6:
                bai42(arr, n);
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 0);

}

