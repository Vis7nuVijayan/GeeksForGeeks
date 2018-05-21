/* Java Switch Case statement
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-May-2018
 *		  Time : 10:49:47 PM
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
			int user_choice = scan.nextInt();
			
			switch(user_choice)
			{
				case 1:
					int R = scan.nextInt();
					System.out.println(Math.PI * R * R);
					break;
					
				case 2:
					int L = scan.nextInt();
					int B = scan.nextInt();
					System.out.println(L * B);
			}
		}
		
		scan.close();
	}
}
