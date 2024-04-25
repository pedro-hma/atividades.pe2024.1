#include <stdio.h>
#include <string.h>

int main() {
    char f1[50], f2[50];

    printf("Digite a primeira string: ");
    scanf("%s", f1);

    printf("Digite a segunda string: ");
    scanf("%s", f2);

    strcat(f1, f2); // Concatena str2 ao final de str1

    printf("As strings concatenadas são: %s\n", f1);

    return 0;
}