#include <stdio.h>
int main() {
    int number;
    //Nhap vao so nguyen
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    //Kiem tra va in ket qua
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So %d chia het cho ca 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("So %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("So %d chia het cho 5.\n", number);
    } else {
        printf("So %d khong chia het cho 3 va 5.\n", number);
    }

    return 0;
}

