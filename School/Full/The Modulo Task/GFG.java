/* The Modulo Task
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-May-2018
 *		  Time : 11:11:09 PM
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
			long N = scan.nextLong();
			
			System.out.println(get_largest_modulus(N));
		}
		
		scan.close();
	}
	
	static long get_largest_modulus(long n)
	{
		return n/2+1;
	}
}
