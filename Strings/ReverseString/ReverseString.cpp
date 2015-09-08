#include <iostream>
#include <string>
#include <algorithm>


class ReverseString {

public:	
	/**
	* Time complexity: O(n)
	* Space complexity: O(1)
	* where n is the number of chars in the string
	*/
	static void reverseStringIterative(std::string& string) {
		std::reverse(string.begin(), string.end());
	}

	/**
        * Time complexity: O(n)
        * Space complexity: O(n)
        * where n is the maximum recursion depth
        */	
	static void reverseRecursive(std::string& string, int begin, int end) {
                if (begin < end) {
                        std::swap(string[begin],string[end]);
                        reverseRecursive(string, ++begin, --end);
                }
        }

	static void reverseStringRecursive(std::string& string) {
		int length = string.size();
		reverseRecursive(string, 0, length - 1);
	}
};
