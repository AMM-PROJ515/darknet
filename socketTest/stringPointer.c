// Server side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080



void convert(char *str);

int main(int argc, char const *argv[])
{

    char str[100] = {0};

    int x = 4;
    int y = 6;
    sprintf(str, "x= %d y= %d\n", x, y);
    printf("(2)%s\n", str);
    convert(str);
    return 0;
}

void convert(char *str){
    printf("(3)%s\n", str);
}
