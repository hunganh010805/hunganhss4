#include <stdio.h>
int main() {
    int number;
    //Nhap vao so nguyen 
    printf("Nhap mot so  nguyen: ");
    scanf("%d", &number);
    //Kiem tra va in ra ket qua
    if (number > 0) {
        printf("So %d l� so duong.\n", number);
    } else {
        printf("So %d l� so am.\n", number);
    }
    return 0;
}

