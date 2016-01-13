#include "../../include/MyPoc/recursive.h"



int copyUpperCase(const char* A, char* B) {
	if (*A != '\0') {
		if (*A >= 'A' && *A <= 'Z') {
			*B = *A;
			return copyUpperCase(A + 1, B + 1) + 1;
		}
		return copyUpperCase(A + 1, B);
	}
	return 0;
}

bool existsInStrings(char* strings[], int size, char ch) {
	if (size == 0)
		return false;
	return existsInString(strings[size - 1], ch) + existsInStrings(strings, size - 1, ch);
}

bool existsInString(char* string, char ch) {
	if (*string == ch)
		return true;
	if (*string == '\0')
		return false;
	return existsInString(string + 1, ch);
}

int numWays(int n) {
	if (n <= 2)
		return n;
	return numWays(n - 1) + numWays(n - 2);
}