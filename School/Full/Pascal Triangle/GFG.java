/* Pascal Triangle
 *
 *		Author : Vishnu Vijayan
 *		  Date : 21-Apr-2019
 *		  Time : 3:47:31 pm
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		
		while(testcases-- > 0)
		{
			int K = scan.nextInt();
			
			int pascal_triangle[][] = new int[K][];
			pascal_triangle[0] = new int[1];
			pascal_triangle[0][0] = 1;
			
			for(int i=1; i<K; ++i)
			{
				pascal_triangle[i] = new int[i+1];
				Fill_Pascal_Row(pascal_triangle[i], i, pascal_triangle[i-1]);
			}
			
			Print_Pascal_Row(pascal_triangle[K-1]);
		}
	}
	
	static void Fill_Pascal_Row(int[] pascal_row, int k, int[] pascal_prev_row)
	{
		pascal_row[0] = 1;
		
		for(int i=1; i<k; ++i)
			pascal_row[i] = pascal_prev_row[i] + pascal_prev_row[i-1];
		
		pascal_row[k] = 1;
	}
	
	static void Print_Pascal_Row(int[] pascal_row)
	{
		for(int i : pascal_row)
			System.out.print(i + " ");
		
		System.out.println();
	}
}