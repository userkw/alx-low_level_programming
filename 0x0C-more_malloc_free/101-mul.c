#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_digit_string(const char *str) {
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_digit_string(num1) || !is_digit_string(num2)) {
        printf("Error\n");
        return 98;
    }

    int int_num1 = atoi(num1);
    int int_num2 = atoi(num2);

    long long result = (long long)int_num1 * (long long)int_num2;
    printf("%lld\n", result);

    return 0;
}
