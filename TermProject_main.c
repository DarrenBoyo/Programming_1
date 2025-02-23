#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

char get_digit(char ch) {
    ch = toupper(ch);

    if (ch >= 'A' && ch <= 'C') return '2';
    if (ch >= 'D' && ch <= 'F') return '3';
    if (ch >= 'G' && ch <= 'I') return '4';
    if (ch >= 'J' && ch <= 'L') return '5';
    if (ch >= 'M' && ch <= 'O') return '6';
    if (ch >= 'P' && ch <= 'S') return '7';
    if (ch >= 'T' && ch <= 'V') return '8';
    if (ch >= 'W' && ch <= 'Y') return '9';
    return ch;
}

int main() {
    char phone[100];

    printf("Enter phone number: ");
    scanf("%s", phone);

    int i = 0;
    while(phone[i] != '\0') {
        phone[i] = get_digit(phone[i]);
        i++;
    }

    printf("Numeric form: %s\n", phone);
    return 0;
}
