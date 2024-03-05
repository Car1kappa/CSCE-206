#include <stdio.h>

int main(){
    int t = 123;
    float f = 44;
    double d = 234;
    char c = 'D';
    printf("Integer: %i size: %lu bytes\n",t,sizeof(t));
    printf("Float: %f size: %lu bytes\n",f,sizeof(f));
    printf("Double: %lf size: %lu bytes\n",d,sizeof(d));
    printf("Char: %c size: %lu bytes\n",c,sizeof(c));
    return 0;
}