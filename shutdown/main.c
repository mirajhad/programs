#include <stdio.h>
#include <stdlib.h>

int main()
{
    char y,r;
    printf("press y to shutdown\n");
    scanf("%c",&y);
        system("C:\\Windows\\System32\\shutdown.exe -s -t 00");
}
