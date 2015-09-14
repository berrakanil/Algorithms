#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
* Assuming charset is ascii
* Time complexity: O(n)
* Space complexity: O(1)
* n is the number of chars in the string
*/
bool hasUniqueChars(char* string) {
	int length = strlen(string);
	int i = 0, countChar = 0;
	
	if (length <= 0) {
		return false;
	}

	for (i = 0; i < length; ++i) {
		int value = string[i] - 'a';
		if ( (countChar & (1 << value)) == 0) {
			countChar |= (1 << value);
		} else {
			return false;
		}
	}
	return true;
}
