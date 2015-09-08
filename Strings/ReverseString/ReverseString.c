#include "stdio.h"
#include "string.h"

/**
* Time complexity: O(n)
* Space complexity: O(1)
* n is the number of chars in the string
*/

void reverseStringIterative(char* string) {
	char* begin = string;
	char* end = string;

	while(*end) {
		++end;
	}
	--end;
	
	char tmp;
	while(begin < end) {
		tmp = *begin;
		*begin++ = *end;
		*end-- = tmp;
	}
}


/**
* Time complexity: O(n)
* Space complexity: O(n)
* n is the maximum recursion depth
*/
void swap(char* c1, char *c2) {
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void recursiveReverse(char* str, int begin, int end) {
	if( begin < end) {
	 	swap(&str[begin],&str[end]);
		recursiveReverse(str, ++begin, --end);
	}
}

void reverseStringRecursive(char* str) {
	int length = strlen(str);
	recursiveReverse(str, 0 , length - 1);
}
