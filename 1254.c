#include <stdio.h>

int main() {

    char a, b;
    scanf("%c %c", &a,&b);

    for (; a <= b; a++)
    {
        printf("%c ", a);
    }
    
}
