#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * * Time complexity: O(n)
 * * Space complexity: O(1)
 * */
bool isSubString(char* str1, char* str2) {
	char* p1 = str1;
	char* p2 = str2;
	bool isSame = false;

	if(str1 != NULL && str2 != NULL && strcmp(str1,str2)) {
		while(*p1 && *p2) {
			if(*p1 != *p2) {
				p2 = str2;
				++p1;
				isSame = false;
			} else {
				++p1;
				++p2;
				isSame = true;
			}
		}
	}

	return isSame;
}
