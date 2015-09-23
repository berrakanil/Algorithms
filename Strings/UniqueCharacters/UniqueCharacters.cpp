#include <iostream>
#include <string>
#include <bitset>
#include <stdexcept>
#include <exception>

class UniqueCharacters {

	public:
		/**
		 * * Assuming charset is ascii
		 * * Time complexity: O(n)
		 * * Space complexity: O(1)
		 * * n is the number of chars in the string
		 * */
		static bool hasUniqueChars (const std::string& str) throw(){
			int length = str.size();
			std::bitset<256> bs;
			if (str.empty()) {
				throw std::invalid_argument("String can not be null");
			}
			for(int i = 0; i < str.size(); ++i) {
				if (bs.test(str[i])) {
					return false;		
				} else {
					bs.set(str[i]);
				}
			}
			return true;
		}
};
