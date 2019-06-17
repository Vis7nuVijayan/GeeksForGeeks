/* Jumpy Ball
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-May-2018
 *		  Time : 9:03:13 PM
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
			long H = scan.nextLong();
			
			System.out.println(get_distance_travelled(H));
		}
		
		scan.close();
	}
	
	static long get_distance_travelled(long h)
	{
		long distance = 0;
		
		while(h > 0)
		{
			distance += 2*h;
			h /= 2;
		}
		
		return distance;
	}

}
