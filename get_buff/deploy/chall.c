#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int check()
{
    char buffer[12];
    char bugger[26];
    gets(bugger);
    return strcmp(buffer, bugger);
}

int main()
{
    setvbuf(stdout, 0, 2, 0);
    printf("I needed a good punchline for a joke...\n");
    sleep(1);
    printf("But then I realized I'm not funny\n");
    if (check() == 0)
    {
        char s[100];
        FILE *stream;
        stream = fopen("flag.txt", "r");
        fgets(s, 100, stream);
        printf("%s\n", s);
        fclose(stream);
    }
    return 0;
}