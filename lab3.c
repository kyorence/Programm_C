#include <stdio.h>

int main() {
    char str[81];
    
    printf("Vvedite stroky (max. 80 simvolov): ");
    scanf("%80s", str);
    
    for (int i = 0; str[i] != '\0; i++) {
        if (str[i] == 'a' || str[i] == 'b') {
            str[i] = str[i] - 32;
        }
    }
    printf("Izmenen. stroka: %s\n", str);
    
    return 0;
}
