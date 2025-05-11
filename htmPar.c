#include <stdio.h>
#include <string.h>
void removeChar(char *str, int index) {
    int i, len = strlen(str);
    for (i = index; i < len; i++) {
        str[i] = str[i + 1];
    }
}
int main() {
    char myString[] = "example";
    removeChar(myString, 2);
    printf("%s\n", myString); 
    return 0;
}