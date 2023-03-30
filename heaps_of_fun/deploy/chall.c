#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 64

int main()
{
    printf("What do you do for fun?\n");
    char *buffer = (char *)malloc(BUFSIZE);
    char *filename = (char *)malloc(BUFSIZE);
    strcpy(filename, "not-a-flag.txt");

    gets(buffer);
    FILE *fd = fopen(filename, "r");
    if (fd != NULL)
    {
        fgets(buffer, 64, fd);
        printf("%s\n", buffer);
        fclose(fd);
        fflush(stdout);
    }
    else {
        printf("That doesn't sound very fun...\n");
    }

    return 0;
}
