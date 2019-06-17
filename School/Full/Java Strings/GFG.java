/* Java Strings | Set 1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-May-2018
 *		  Time : 1:46:07 PM
 *
 */

import java.util.Scanner;


public class GFG
{

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int T = scan.nextInt();
		scan.nextLine();
		
		while(T-- > 0)
		{
			String s1 = scan.nextLine();
			String s2 = scan.nextLine();
			
			print_reverse(s1, s2);
		}
		
		scan.close();
	}
	
	static void print_reverse(String s1, String s2)
	{
		s1 += s2;
		
		for(int i=s1.length()-1; i>=0; --i)
			System.out.print(s1.charAt(i));
		
		System.out.println();
	}

}
