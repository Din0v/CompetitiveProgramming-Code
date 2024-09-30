/*questo coso GIUSTAMENTE non compila
dunque ho fatto bene al esame :)*/
#include <stdio.h>

int a = 0;
int main(){
    int b = a + 5;
    {int c = a + b;}
    {int d = c + a;}
    printf("%d", a);
}