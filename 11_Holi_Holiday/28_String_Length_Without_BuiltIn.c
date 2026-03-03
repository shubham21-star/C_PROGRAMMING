// 28_String_Length_Without_BuiltIn.c

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Name: Shubham Kumar\n");
    printf("Length of string = %d\n", length);
    printf("Name: Shubham Kumar\n");

    return 0;
}
