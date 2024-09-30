/*the Mess of strcmp in the return value:
it only says that it's bigger or smaller than zero (or zero)
but the specific value of the number per se doesn't mean anything!!
*/
#include <stdio.h>
#include <string.h>

char str0[] = "hello world!";
char str1[] = "Hello world!";

int main() {
    printf("%d\n", strcmp("hello world!", "Hello world!"));
    printf("%d\n", strcmp(str0, str1));
}