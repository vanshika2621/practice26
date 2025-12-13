#include <stdio.h>
#include <string.h>

void countFrequency(char str[]) {
    int freq[256] = {0};   // ASCII table

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' -> %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countFrequency(str);

    return 0;
}
