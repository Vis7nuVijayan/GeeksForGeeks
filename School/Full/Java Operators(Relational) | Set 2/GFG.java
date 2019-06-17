/* Java Operators(Relational) | Set 2
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Apr-2019
 *		  Time : 9:43:49 pm
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		
		while(testcases-- > 0)
		{
			int A = scan.nextInt();
			int B = scan.nextInt();
			
			if( A > B)
				System.out.println(A + " is greater than " + B);
			
			else if( A < B)
				System.out.println(A + " is less than " + B);
			
			else
				System.out.println(A + " is equals to " + B);
		}
	}
}