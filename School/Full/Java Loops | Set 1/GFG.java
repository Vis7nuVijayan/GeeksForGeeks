/* Java Loops | Set 1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-May-2018
 *		  Time : 1:19:07 PM
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int T = scan.nextInt();
		
		while(T-- > 0)
		{
			int N = scan.nextInt();
			
			print(N);
		}
		
		scan.close();
	}
	
	static void print(int n)
	{
		int odd_sum = 0;
		int even_sum = 0;
		
		for(int i=1; i<=n; ++i)
		{
			if(i%2 != 0)
				odd_sum += i;
			
			else
				even_sum += i;
		}
		
		System.out.println(even_sum + " " + odd_sum);
	}
}
