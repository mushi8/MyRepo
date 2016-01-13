#include<malloc.h>
#include<string.h>
#include<stdio.h>
#include "../../include/MyPoc/func.h"


char* AddString() {
	char* name;
	char buffer[100];
	getchar();
	scanf_s("%[^\n]s", &buffer);
	name = (char*)malloc(strlen(buffer) + 1);
	if (name == NULL) {
		puts("Memory Allocation for string Failed");
		return NULL;
	}
	name = _strdup(buffer);
	return name;
}