/* Java Reverse a String
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Apr-2019
 *		  Time : 1:51:46 am
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		
		scan.nextLine();
		
		while(testcases-- > 0)
		{
			StringBuffer s = new StringBuffer(scan.nextLine());
			
			System.out.println(s.reverse());
		}
	}
}