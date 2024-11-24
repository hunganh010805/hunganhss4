#include <stdio.h>
int main() {
    int num1, num2, num3;
    // Nhap 3 so bat ki
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    // Kiem tra so thu ba co nam giua so thu nhat va so thu hai khong
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So %d nam trong khoang giua %d và %d.\n", num3, num1, num2);
    } else {
        printf("So %d không nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }
    return 0;
}

