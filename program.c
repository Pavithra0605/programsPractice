// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[1000001];
    scanf("%s", str);

   int lowerFlag = 0;
   int upperFlag = 0;

    for (int i = 0; str[i]; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            lowerFlag |= (1<< (ch - 'a'));
        }
        else if (ch >= 'A' && ch <= 'Z') {
            upperFlag |= (1 << (ch - 'A'));
        }
    }

   int allSet = (1 << 26) - 1;

    if (lowerFlag == allSet)
        printf("Contains all lowercase letters\n");
    else
        printf("Does not contain all lowercase letters\n");

    if (upperFlag == allSet)
        printf("Contains all uppercase letters\n");
    else
        printf("Does not contain all uppercase letters\n");

    return 0;
}
