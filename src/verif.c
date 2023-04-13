/*
 * E89 Pedagogical & Technical Lab
 * project:     verif
 * created on:  2023-01-05 - 09:20 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: verif espace and /n
 */

#include "stu.h"

void verif(char *buffer)
{
    int i;
    int nbnb;

    nbnb = 0;
    i = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n' ||buffer[i] == ' ') {
            while (buffer[i] == '\n' || buffer[i] == ' ')
                i += 1;
            printf("espace detecter ");
            nbnb += 1;
        }
    }
    printf("%d \n",nbnb);
}
