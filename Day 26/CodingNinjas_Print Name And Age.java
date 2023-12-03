Problem:
Print name And Age By Keeping The Variables As Private in A Class And Print It In Main Class.

Input:

import java.util.* ;
import java.io.*; 
class Person {
	
	private String name;
	private int age;
	public void setter(String name, int age)
	{
		this.name=name;
		this.age=age;
	}
	public String gettername()
	{
	return name;
	}
	public int getterage()
	{
	return age;
	}
}

class Solution {
	
	public static void main(String args[]) 
	{
		
		Scanner sc=new Scanner(System.in);
		String name=sc.nextLine();
		int age=sc.nextInt();
		Person ob=new Person();
		ob.setter(name,age);
		System.out.print("The name of the person is ");
		System.out.print(ob.gettername());
		System.out.print(" and the age is ");
		System.out.print(ob.getterage());
		System.out.print(".");
	}
}
		
