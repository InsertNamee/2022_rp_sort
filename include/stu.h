/*
 * E89 Pedagogical & Technical Lab
 * project:     stu.h
 * created on:  2022-11-14 - 10:02 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: my library
 */

#ifndef STU_H_
#define STU_H_


#include <stdio.h>
//TEMPORAIRE//

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void verif(char *buffer);
char *echo_read(int *tsize);
char *stu_strcpy(char *dest, const char *src);
char *stu_strcat(char *dest, const char *src);
char *stu_strdup(const char *src);
unsigned int stu_strlen(const char *str);

void pa(int *listeA,int *listeB,int nbnbA,int nbnbB);
void pb(int *listeA,int *listeB,int nbnbA,int nbnbB);
void ra(int *listeA,int nbnbA);
void rb(int *listeB,int nbnbB);
void rc(int *listeA,int *listeB,int nbnbA,int nbnbB);
void rra(int *listeA,int nbnbA);
void rrb(int *listeB,int nbnbB);
void rrc(int *listeA,int *listeB,int nbnbA,int nbnbB);
void sa(int *listeA);
void sb(int *listeB);
void sc(int *listeA,int *listeB);
void sd(int *listeA,int *listeB);

#endif
