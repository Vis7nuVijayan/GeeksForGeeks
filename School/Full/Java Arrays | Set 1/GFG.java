/* Java Arrays | Set 1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-May-2018
 *		  Time : 1:36:38 PM
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
			int P;
			int price_sum = 0;
			
			for(int i=0; i<N; ++i)
			{
				P = scan.nextInt();
				price_sum += P;
			}
			
			System.out.printf("%d %.2f\n",price_sum,(float)price_sum/N);
		}
	}

}
