package com.berrakanil.algorithms;

public class ReverseString {	
	/**
	* Time complexity: O(n)
	* Space complexity: O(n)
	* n is the number of chars in the string
	*/
	public static String reverseStringIterative(String str) {
		StringBuilder stringBuilder = new StringBuilder();
		for(int i = str.length() - 1; i >= 0; --i) {
			stringBuilder.append(str.charAt(i));
		}
		return stringBuilder.toString();
	}
}
