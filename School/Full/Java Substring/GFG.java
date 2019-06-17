/* Java Substring
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Apr-2019
 *		  Time : 8:50:48 pm
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
			scan.nextLine();
			String s = scan.nextLine();
			
			int L = scan.nextInt();
			int R = scan.nextInt();
			
			System.out.println(s.substring(L,R+1));
		}
	}
}
