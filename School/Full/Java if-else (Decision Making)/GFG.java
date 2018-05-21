/* Java if-else (Decision Making)
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-May-2018
 *		  Time : 10:04:27 PM
 *
 */

import java.util.Scanner;

public class GFG
{

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int T = scan.nextInt();
		
		while(T-- > 0)
		{
			int m = scan.nextInt();
			int n = scan.nextInt();
			
			if(m == n)
				System.out.println("equal");
			
			else if (m > n)
				System.out.println("greater");
			
			else
				System.out.println("lesser");
		}
		
		scan.close();
	}

}