Problem:
You are given a string S. Your task is to check whether the string is palindrome or not.
For checking palindrome, consider alphabet and numbers only and ignore the symbols and whitespaces.

Input:

import java.util.* ;
import java.io.*; 
public class Solution {

	public static boolean checkPalindrome(String str)
	 {
	
		 int left=0;
		 int right=str.length()-1;
	while(left<right)
	{
		
		 char leftchar=Character.toLowerCase(str.charAt(left));
		 char rightchar=Character.toLowerCase(str.charAt(right));
		 
		 if((Character.isLetter(leftchar) || Character.isDigit(leftchar)) && 
		 (Character.isLetter(rightchar) || Character.isDigit(rightchar)) )
		 {
			 if(leftchar==rightchar)
			 {
				 left++;
				 right--;
			 }
			 else
			 return false;
		 }
		 else if(!Character.isLetter(leftchar) && !Character.isDigit(leftchar))
		 {
			 left++;
		 }
		 else if(!Character.isLetter(rightchar) && !Character.isDigit(rightchar))
		 {
			 right--;
		 }
	 
	}
	return true;
	 }
}
