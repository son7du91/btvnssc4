#include <stdio.h>
int main() {
    int number;
    printf("Nhập một số nguyên: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("Số %d là số dương.\n", number);
    } else if (number < 0) {
        printf("Số %d là số âm.\n", number);
    } else {
        printf("Số bạn nhập là số 0.\n");
    }
    return 0;
}
