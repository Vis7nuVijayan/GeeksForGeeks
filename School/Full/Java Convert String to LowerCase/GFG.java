/* Java Convert String to LowerCase
 *
 *		Author : Vishnu Vijayan
 *		  Date : 10-Apr-2019
 *		  Time : 11:39:05 pm
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
			String S = scan.nextLine();
			
			System.out.println(S.toLowerCase());
		}
	}
}