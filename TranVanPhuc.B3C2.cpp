#include <stdio.h>

int sum(int n) {
    if (n == 0)    
        return 0;
    else
        return n + sum(n - 1);    
}

int congtru(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return -n + congtru(n - 1);
    	else
        	return n + congtru(n - 1);
}

int trucong(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return n + trucong(n - 1);
    	else
        	return -n + trucong(n - 1);
}

float sumps(int n) {
    if (n == 0)
        return 0;
    else
        return 1.0 / n + sumps(n - 1);
}

float congtrups(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return -1.0 / n + congtrups(n - 1);
    	else    
        	return 1.0 / n + congtrups(n - 1);
}

float trucongps(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return 1.0 / n + trucongps(n - 1);
    	else    
        	return -1.0 / n + trucongps(n - 1);
}

int gt(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * gt(n - 1);    
}

float sumpsgt(int n) {
    if (n == 1)
        return 1;
    else    
        return 1.0 / gt(n) + sumpsgt(n - 1);
}

float congtrupsgt(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return -1.0 / gt(n) + congtrupsgt(n - 1);    
    	else
        	return 1.0 / gt(n) + congtrupsgt(n - 1);
}    

float trucongpsgt(int n) {
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return 1.0 / gt(n) + trucongpsgt(n - 1);    
    	else
        	return -1.0 / gt(n) + trucongpsgt(n - 1);
}    

int main() {
    int n, s;
    char chon;
    do {
        printf("Moi chon cong thuc de tinh:\n");
        printf("1. Tong cac so tu 1 den n\n");
        printf("2. Tong cac so tu 1 - 2 + 3 ... n\n");
        printf("3. Tong cac so tu -1 + 2 - 3 ... n\n");
        printf("4. Tong cac so tu 1 + 1/2 + 1/3 ... +1/n\n");
        printf("5. Tong cac so tu 1 - 1/2 + 1/3 ... +-1/n\n");
        printf("6. Tong cac so tu -1 + 1/2 - 1/3 ... +-1/n\n");
        printf("7. Giai thua cua n\n");
        printf("8. Tong cac so tu 1 + 1/2! ... +1/n!\n");
        printf("9. Tong cac so tu 1 - 1/2! ... +-1/n!\n");
        printf("10. Tong cac so tu -1 + 1/2! ... +-1/n!\n");
        printf("Moi nhap vao lua chon: ");
        scanf("%d", &s);
        printf("Moi nhap vao so n: ");
        scanf("%d", &n);
        
        switch(s) {
            case 1:
                printf("Tong cac so tu 1 den n la %d\n", sum(n));  
                break;
            case 2:
                printf("Tong cac so tu 1 - 2 + 3 ... n la %d\n", congtru(n));  
                break;
            case 3:
                printf("Tong cac so tu -1 + 2 - 3 ... n la %d\n", trucong(n));  
                break;
            case 4:
                printf("Tong cac so tu 1 + 1/2 + 1/3 ... +1/n la %.2f\n", sumps(n)); 
                break;
            case 5:
                printf("Tong cac so tu 1 - 1/2 + 1/3 ... +-1/n la %.2f\n", congtrups(n)); 
                break;
            case 6:
                printf("Tong cac so tu -1 + 1/2 - 1/3 ... +-1/n la %.2f\n", trucongps(n)); 
                break;
            case 7:
                printf("Giai thua cua n la %d\n", gt(n)); 
                break;
            case 8:
                printf("Tong cac so tu 1 + 1/2! ... +1/n! la %f\n", sumpsgt(n)); 
                break;
            case 9:
                printf("Tong cac so tu 1 - 1/2! ... +-1/n! la %f\n", congtrupsgt(n)); 
                break;
            case 10:
                printf("Tong cac so tu -1 + 1/2! ... +-1/n! la %f\n", trucongpsgt(n)); 
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
        
        printf("Ban co muon tiep tuc khong? (y or n): ");
        scanf(" %c", &chon);
    } while(chon == 'y');
}

