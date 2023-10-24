#include<stdio.h>
#include<string.h>

enum {BUFF_SIZE = 100};
int main(){
    char buf[64];
    char msg[] = "hello";
    puts("enter name: ");
    fgets(buf, BUFF_SIZE, stdin);
    strcat(msg, buf);
    printf("%s", msg);
    return 0;
}