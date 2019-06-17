import java.util.Scanner;

/* Java Operators(Arithmetic) | Set 1
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-May-2018
 *		  Time : 10:05:43 PM
 *
 */

public class GFG
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int T = scan.nextInt();
		
		while(T-- > 0)
		{
			int A = scan.nextInt();
			int B = scan.nextInt();
			int C = scan.nextInt();
			
			long discriminant;
			
			if((discriminant = get_discriminant(A,B,C)) < 0)
				System.out.println("COMPLEX");
			
			else
			{
				double root1 = (-B - Math.sqrt(discriminant))/(2*A);
				double root2 = (-B + Math.sqrt(discriminant))/(2*A);
				
				if(root1 < root2)
					print(root1, root2);
				
				else
					print(root2, root1);
			}
		}
		
		scan.close();
	}
	
	static long get_discriminant(int a, int b, int c)
	{
		return b*b - 4*a*c;
	}
	static void print(double root1, double root2)
	{
		System.out.println((float)root1 + " " + (float)root2);
	}
}
