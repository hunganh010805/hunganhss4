#include <stdio.h>
int main() {
    int number;
    //Nhap vao so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    //Kiem tra va in ket qua
    if (number % 2 == 0) {
        printf("So %d l� so chan.\n", number);
    } else {
        printf("So %d l� so le.\n", number);
    }
    return 0;
}

