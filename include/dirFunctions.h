#ifndef DIRFUNCTIONS_H
#define DIRFUNCTIONS_H

#include<stdio.h>

enum StatusFolder 
{
	F_TRUE,
	F_FALSE
};

struct dirContent
{
	enum StatusFolder s;
	char *name;
	char *path;
};

struct dirContent **dirGetContent(const char *path, int *size);
struct dirContent** dirGetPinned(int *size);

char *readLine(FILE *file);

#endif
