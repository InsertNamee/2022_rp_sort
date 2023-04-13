/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2023-01-05 - 09:29 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute program
 */

#include "stu.h"

int main(void)
{
    struct stat sb;
    char *buffer;
    int fd;
    int i;

    fd = open("liste.txt", O_RDONLY);
    i = stat("liste.txt", &sb);
    buffer = malloc(sizeof(char) * sb.st_size + 1);
    read(fd, buffer, sb.st_size);
    if (i == -1) {
        return (-1);
    }
    printf("%s", buffer);
    verif(buffer);
    free(buffer);
    close(fd);
}
