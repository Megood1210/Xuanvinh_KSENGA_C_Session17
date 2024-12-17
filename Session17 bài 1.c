#include <stdio.h>
#include <stdlib.h>
void enterArr(int **arr, int *n) {
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", n);
    *arr = (int *)malloc(*n * sizeof(int));
    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
void showArr(int *arr, int n) {
    printf("Cac phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void lenghtArr(int n) {
    printf("Do dai mang: %d\n", n);
}
void sumArr(int *arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", tong);
}
void showMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
}

int main() {
    int *arr = NULL;  
    int n = 0;       
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enterArr(&arr, &n);
                break;
            case 2:
                if (arr != NULL) {
                    showArr(arr, n);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 3:
                if (arr != NULL) {
                	lenghtArr(n);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 4:
                if (arr != NULL) {
                    sumArr(arr, n);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 5:
                if (arr != NULL) {
                    showMax(arr, n);
                } else {
                    printf("Mang chua duoc nhap \n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le \n");
        }
    } while (choice != 6);
    return 0;
}

