#include "../include/MyPoc/func.h"
#include "../include/MyPoc/recursive.h"
#include <stdio.h>
#include<malloc.h>
#include<string.h>


void main() {
	//Var Decleration
	int exit = 1, choice, size, steps, numWay;
	char *A, *B;
	char** strings;
	char ch;
	bool res;
	int result;

	//USER INTERFACE
	while (exit) {
		puts("*********** Menu **********");
		puts("1) copyUpperCase");
		puts("2) existsInStrings");
		puts("3) numWays");
		puts("4) Exit");
		puts("***************************");
		puts("Enter Your choice");
		scanf_s("%d", &choice);
		switch (choice)
		{
			//copyUpperCase
		case 1:
			puts("Please Enter a seaquence of chars a-z/A-Z ");
			A = AddString();
			B = (char*)calloc(strlen(A), sizeof(char));
			result = copyUpperCase(A, B);
			printf("The number Of Upper Case I copied is %d \n", res);
			printf("New String with only uppercase is: %s\n", B);
			break;
			//existsInStrings	
		case 2:
			puts("How many string you want to check?");
			scanf_s("%d", &size);
			strings = (char**)calloc(size, sizeof(char*));
			if (strings == NULL) {
				puts("Memory Allocation Falied!");
				return;
			}
			for (int i = 0; i < size; i++) {
				puts("Enter A Strings");
				strings[i] = AddString();
			}
			getchar();//clean the buffer
			puts("Enter a char to check if its in the strings");
			scanf_s("%c",&ch);
			printf("Will now check if char '%c' is in one of the following strings:\n", ch);
			for (int i = 0; i < size; i++) {
				printf("%d) %s\n", i + 1, strings[i]);
			}
			res = existsInStrings(strings, size, ch);
			puts("#### The result is ####");
			//Will Print TRUE if res is True False otherwise
			printf(res ? "\tTRUE :)  \n " : "\tFALSE :( \n");
			break;
			//numWays
		case 3:
			puts("How many steps are in the ladder?");
			scanf_s("%d", &steps);
			numWay = numWays(steps);
			printf("The number of ways to climb a %d steps ladder is: %d\n", steps, numWay);
			break;
			//Exit
		case 4:
			puts("Byte byte!");
			exit = 0;
			break;

		default:
			puts("Wrong Choice please try again");
			break;
		}
	}


}