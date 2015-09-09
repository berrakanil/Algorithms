package com.berrakanil.algorithms;

import java.util.HashSet;
import java.util.Set;

public class UniqueCharacters {

	/**
	 * Assuming charset is ascii Time complexity: O(n) Space complexity: O(1) n
	 * is the number of chars in the string
	 */
	public static boolean hasUniqueChars(String str) throws Exception {
		if (str == null) {
			throw new Exception("String can not be null");
		}

		int asciiCounter = 0;
		for (int i = 0; i < str.length(); ++i) {
			int value = str.charAt(i) - 'a';
			if ((asciiCounter & (1 << value)) == 0)
				asciiCounter |= (1 << value);
			else
				return false;
		}
		return true;
	}

	/**
	 * Time complexity: O(n) Space complexity: O(n) n is the number of chars in
	 * the string
	 */
	public boolean hasUniqueCharsWithSet(String str) throws Exception {
		if (str == null) {
			throw new Exception("String can not be null");
		}

		Set<Character> charSet = new HashSet<Character>();
		for (char c : str.toCharArray()) {
			if (charSet.contains(c)) {
				return false;
			} else {
				charSet.add(c);
			}
		}
		return true;
	}
}
