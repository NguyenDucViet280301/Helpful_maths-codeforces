#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int c1 = 0, c2 = 0, c3 = 0;

    scanf("%s", s);
    
    // Đếm số lần xuất hiện của '1', '2' và '3'
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') {
            c1++;
        } else if (s[i] == '2') {
            c2++;
        } else if (s[i] == '3') {
            c3++;
        }
    }
    
    // Xây dựng chuỗi đầu ra
    int first = 1;  // để xử lý phần tử đầu tiên không có dấu '+' dẫn đầu
    for (int i = 0; i < c1; i++) {
        if (!first) {
            printf("+");
        }
        printf("1");
        first = 0;
    }
    for (int i = 0; i < c2; i++) {
        if (!first) {
            printf("+");
        }
        printf("2");
        first = 0;
    }
    for (int i = 0; i < c3; i++) {
        if (!first) {
            printf("+");
        }
        printf("3");
        first = 0;
    }
    
    return 0;
}
