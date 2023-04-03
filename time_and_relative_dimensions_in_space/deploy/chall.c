#include <stdio.h>
#include <stdlib.h>

int main()
{
    char teleport[30];
    setvbuf(stdout, 0, 2, 0);
    puts("Just another day spinning through space and time...");
    gets(teleport);
}

int flag()
{
    puts("Bowties are cool!");
    char s[100];
    FILE *stream;
    stream = fopen("flag.txt", "r");
    fgets(s, 100, stream);
    printf("%s\n", s);
    fclose(stream);
    fflush(stdout);
    exit(0);
}