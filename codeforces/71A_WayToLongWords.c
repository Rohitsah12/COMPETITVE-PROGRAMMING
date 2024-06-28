#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        char str[100];
        scanf("%s", str);
        int x = strlen(str);
        if (x > 10) {
            printf("%c%d%c\n", str[0], x - 2, str[x - 1]);
        } else {
            puts(str);
        }
    }
    
    return 0;
}
