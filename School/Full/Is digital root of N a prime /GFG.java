/*
 * Is digital root of N a prime ?
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-May-2018
 *		  Time : 5:52:29 PM
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
			int N = scan.nextInt();
			
			int digital_root = get_Digital_Root(N);
			
			if(is_prime(digital_root))
				System.out.println(1);
			
			else
				System.out.println(0);
		}
		
		scan.close();
	}
	
	static int get_Digital_Root(int n)
	{
		do
		{
			String s = Integer.toString(n);
			
			n = 0;
			
			for(int i=0; i<s.length(); ++i)
				n += s.charAt(i) - '0';
		
		}while(n > 9);
		
		return n;
	}
	
	static boolean is_prime(int dr)
	{
		if(dr == 1)
			return false;
		
		for(int i=2; i<=Math.sqrt(dr); ++i)
			if(dr%i == 0)
				return false;
		
		return true;
	}

}
