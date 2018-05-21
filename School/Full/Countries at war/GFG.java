/*
 * Countries at war
 *
 *		Author : Vishnu Vijayan
 *		  Date : 13-May-2018
 *		  Time : 12:36:49 AM
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
			
			int A[] = get_soldier_power(N, scan);
			int B[] = get_soldier_power(N, scan);
			
			print_war_result(A, B);
		}
		
		scan.close();
	}

	static int[] get_soldier_power(int n, Scanner scan)
	{
		int power[] = new int[n];
		
		for(int i=0; i<n; ++i)
			power[i] = scan.nextInt();
		
		return power;
	}
	
	static void print_war_result(int a[], int b[])
	{
		int A_wins = 0;
		int B_wins = 0;
		
		for(int i=0; i<a.length; ++i)
		{
			if(a[i] > b[i])
				++A_wins;
			
			else if(a[i] < b[i])
				++B_wins;
		}
		
		System.out.print(A_wins + " " + B_wins);
		
		if(A_wins > B_wins)
			System.out.println(" A");
		
		else if(A_wins < B_wins)
			System.out.println(" B");
		
		else
			System.out.println(" DRAW");
	}
}
