#include <stdio.h>
int main() {
    char s[80];
    printf("Vvedite stroky simvolov: ");
    fgets(s, 80, stdin);
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a' || s[i] == 'b') {  s[i] -= 32; }
    }
    printf("Preobrazovanaya stroka: %s", s);
    return 0;
}
