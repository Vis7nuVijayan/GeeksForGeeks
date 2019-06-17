/* Java Basic Data Types
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Apr-2019
 *		  Time : 9:52:05 pm
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		
		while(testcases-- > 0)
		{
			int n;
			String s;
			float f;
			
			n = scan.nextInt();
			s = scan.next();
			f = scan.nextFloat();
			
			print_input(n, s, f);
		}
	}
	
	static void print_input(int n, String s, float f)
	{
		System.out.println(n + " " + s + " " + f);
	}
}