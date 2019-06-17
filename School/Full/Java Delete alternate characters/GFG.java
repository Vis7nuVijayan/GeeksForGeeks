/* Java Delete alternate characters
 *
 *		Author : Vishnu Vijayan
 *		  Date : 14-Apr-2019
 *		  Time : 10:08:58 am
 *
 */

import java.util.Scanner;


public class GFG
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int testcases = scan.nextInt();
		scan.nextLine();
		
		while(testcases-- > 0)
		{
			StringBuffer S = new StringBuffer(scan.nextLine());
			
			System.out.println(delete_characters(S));
		}
	}
	
	static StringBuffer delete_characters(StringBuffer S)
	{
		for(int i=S.length()-1; i>=0; --i)
		{
			if((i&1) == 1)
				S.deleteCharAt(i);
		}
		
		return S;
	}
}