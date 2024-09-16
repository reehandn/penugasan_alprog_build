#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string1[100], string2[100];

    scanf("%s", string1);
    
    scanf("%s", string2);


    if (strlen(string1) == strlen(string2)) {
        if (strcmp(string1, string2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    } else {
        printf("BERBEDA\n");
    }

return 0;
}
