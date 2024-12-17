#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int wordCharacter(char c) {
    return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') );
}
int numberCharacter(char c) {
    return (c >= '0' && c <= '9');
}
void enterCharacter(char **str) {
    printf("Nhap vao chuoi: ");
    getchar();  
    fgets(*str, 100, stdin);  
}
void printCharacter(char *str) {
    printf("Chuoi da nhap: %s\n", str);
}
void countWord(char *str) {
    int count = 0;
    while (*str) {
        if (wordCharacter(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong chu cai trong chuoi: %d\n", count);
}
void countNumber(char *str) {
    int count = 0;
    while (*str) {
        if (numberCharacter(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong chu so trong chuoi: %d\n", count);
}
void countSpecial(char *str) {
    int count = 0;
    while (*str) {
        if (!wordCharacter(*str) && !numberCharacter(*str)) {
            count++;
        }
        str++;
    }
    printf("So luong ky tu dac biet trong chuoi: %d\n", count);
}
int main() {
    char *chuoi = (char *)malloc(100 * sizeof(char)); 
    if (chuoi == NULL) {
        printf("Khong hop le\n");
        return 1; 
	}
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            	enterCharacter(&chuoi);
                break;
            case 2:
                printCharacter(chuoi);
                break;
            case 3:
                countWord(chuoi);
                break;
            case 4:
                countNumber(chuoi);
                break;
            case 5:
                countSpecial(chuoi);
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 6);
    return 0;
}

