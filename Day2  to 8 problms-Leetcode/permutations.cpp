/**Write a program to print all permutations of a given string
 C++ program to print all
// permutations with duplicates allowed*/
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{
	// Base case
	if (l == r)
		cout<<a<<endl;
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}
int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}

/** java
// Java program to print all permutations of a
// given string.
public class Permutation
{
	public static void main(String[] args)
	{
		String str = "ABC";
		int n = str.length();
		Permutation permutation = new Permutation();
		permutation.permute(str, 0, n-1);
	}


	//* permutation function
	// @param str string to calculate permutation for
	// @param l starting index
	//* @param r end index

	private void permute(String str, int l, int r)
	{
		if (l == r)
			System.out.println(str);
		else
		{
			for (int i = l; i <= r; i++)
			{
				str = swap(str,l,i);
				permute(str, l+1, r);
				str = swap(str,l,i);
			}
		}
	}


	// Swap Characters at position
	// @param a string value
	// @param i position 1
	// @param j position 2
	// @return swapped string

	public String swap(String a, int i, int j)
	{
		char temp;
		char[] charArray = a.toCharArray();
		temp = charArray[i] ;
		charArray[i] = charArray[j];
		charArray[j] = temp;
		return String.valueOf(charArray);
	}

}

// This code is contributed by Mihir Joshi
*/
/**  C
#include<iostream>
using namespace std;

void stringPermutation(string str, int left, int right) {
   if(left == right)
      cout << str << endl;
   else {
      for(int i = left; i<= right; i++) {
         swap(str[left], str[i]);
         stringPermutation(str, left + 1, right);
         swap(str[left], str[i]); //swap back for backtracking
      }
   }
}

int main() {
   string str = "ABC";
   cout << "All permutations of " << str << " is: " <<endl<<endl;
   stringPermutation(str, 0, str.size()-1);
}
*/
