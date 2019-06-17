/* At least two greater elements
 *
 *		Author : Vishnu Vijayan
 *		  Date : 13-Apr-2019
 *		  Time : 6:23:32 pm
 *
 */

import java.util.Arrays;
import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		
		while(testcases-- > 0)
		{
			int N;
			N = scan.nextInt();
			
			int A[] = new int[N];
			
			for(int i=0; i<N ; ++i)
				A[i] = scan.nextInt();
			
			Arrays.sort(A);
			
			for(int i=0;i<N-2; ++i)
				System.out.print(A[i] + " ");
			
			System.out.println();
		}
	}
}