/**Wildcard Pattern Matching

Given a text and a wildcard pattern, implement
wildcard pattern matching algorithm that finds
if wildcard pattern is matched with text.
The matching should cover the entire text (not partial text).
The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

For example,

Text = "baaabab",
Pattern = “*****ba*****ab", output : true
Pattern = "baaa?ab", output : true
Pattern = "ba*a?", output : true
Pattern = "a*ab", output : false

Each occurrence of ‘?’ character in wildcard
pattern can be replaced with any other character
and each occurrence of ‘*’ with a sequence of
characters such that the wildcard pattern
becomes identical to the input string after replacement.

Let’s consider any character in the pattern.

Case 1: The character is ‘*’
Here two cases arise

We can ignore ‘*’ character and move to
next character in the Pattern.
‘*’ character matches with one or more
characters in Text. Here we will move
to next character in the string.
Case 2: The character is ‘?’
We can ignore current character in Text
and move to next character in the Pattern and Text.
Case 3: The character is not a wildcard character
If current character in Text matches with current
character in Pattern, we move to next character
in the Pattern and Text. If they do not match,
wildcard pattern and Text do not match.
We can use Dynamic Programming to solve this problem –
Let T[i][j] is true if first i characters in given
string matches the first j characters of pattern.



DP Initialization:

// both text and pattern are null
T[0][0] = true;

// pattern is null
T[i][0] = false;

// text is null
T[0][j] = T[0][j - 1] if pattern[j – 1] is '*'
DP relation :

// If current characters match, result is same as
// result for lengths minus one. Characters match
// in two cases:
// a) If pattern character is '?' then it matches
//    with any character of text.
// b) If current characters in both match
if ( pattern[j – 1] == ‘?’) ||
     (pattern[j – 1] == text[i - 1])
    T[i][j] = T[i-1][j-1]

// If we encounter ‘*’, two choices are possible-
// a) We ignore ‘*’ character and move to next
//    character in the pattern, i.e., ‘*’
//    indicates an empty sequence.
// b) '*' character matches with ith character in
//     input
else if (pattern[j – 1] == ‘*’)
    T[i][j] = T[i][j-1] || T[i-1][j]

else // if (pattern[j – 1] != text[i - 1])
    T[i][j]  = false
    */

    // C++ program to implement wildcard
// pattern matching algorithm
#include <bits/stdc++.h>
using namespace std;

// Function that matches input str with
// given wildcard pattern
bool strmatch(char str[], char pattern[], int n, int m)
{
	// empty pattern can only match with
	// empty string
	if (m == 0)
		return (n == 0);

	// lookup table for storing results of
	// subproblems
	bool lookup[n + 1][m + 1];

	// initailze lookup table to false
	memset(lookup, false, sizeof(lookup));

	// empty pattern can match with empty string
	lookup[0][0] = true;

	// Only '*' can match with empty string
	for (int j = 1; j <= m; j++)
		if (pattern[j - 1] == '*')
			lookup[0][j] = lookup[0][j - 1];

	// fill the table in bottom-up fashion
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// Two cases if we see a '*'
			// a) We ignore ‘*’ character and move
			// to next character in the pattern,
			//	 i.e., ‘*’ indicates an empty sequence.
			// b) '*' character matches with ith
			//	 character in input
			if (pattern[j - 1] == '*')
				lookup[i][j]
					= lookup[i][j - 1] || lookup[i - 1][j];

			// Current characters are considered as
			// matching in two cases
			// (a) current character of pattern is '?'
			// (b) characters actually match
			else if (pattern[j - 1] == '?'
					|| str[i - 1] == pattern[j - 1])
				lookup[i][j] = lookup[i - 1][j - 1];

			// If characters don't match
			else
				lookup[i][j] = false;
		}
	}

	return lookup[n][m];
}

int main()
{
	char str[] = "baaabab";
	char pattern[] = "*****ba*****ab";
	// char pattern[] = "ba*****ab";
	// char pattern[] = "ba*ab";
	// char pattern[] = "a*ab";
	// char pattern[] = "a*****ab";
	// char pattern[] = "*a*****ab";
	// char pattern[] = "ba*ab****";
	// char pattern[] = "****";
	// char pattern[] = "*";
	// char pattern[] = "aa?ab";
	// char pattern[] = "b*b";
	// char pattern[] = "a*a";
	// char pattern[] = "baaabab";
	// char pattern[] = "?baaabab";
	// char pattern[] = "*baaaba*";

	if (strmatch(str, pattern, strlen(str),
				strlen(pattern)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
/** java
// Java program to implement wildcard
// pattern matching algorithm
import java.util.Arrays;
public class GFG {

	// Function that matches input str with
	// given wildcard pattern
	static boolean strmatch(String str, String pattern,
							int n, int m)
	{
		// empty pattern can only match with
		// empty string
		if (m == 0)
			return (n == 0);

		// lookup table for storing results of
		// subproblems
		boolean[][] lookup = new boolean[n + 1][m + 1];

		// initailze lookup table to false
		for (int i = 0; i < n + 1; i++)
			Arrays.fill(lookup[i], false);

		// empty pattern can match with empty string
		lookup[0][0] = true;

		// Only '*' can match with empty string
		for (int j = 1; j <= m; j++)
			if (pattern.charAt(j - 1) == '*')
				lookup[0][j] = lookup[0][j - 1];

		// fill the table in bottom-up fashion
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				// Two cases if we see a '*'
				// a) We ignore '*'' character and move
				// to next character in the pattern,
				//	 i.e., '*' indicates an empty
				//	 sequence.
				// b) '*' character matches with ith
				//	 character in input
				if (pattern.charAt(j - 1) == '*')
					lookup[i][j] = lookup[i][j - 1]
								|| lookup[i - 1][j];

				// Current characters are considered as
				// matching in two cases
				// (a) current character of pattern is '?'
				// (b) characters actually match
				else if (pattern.charAt(j - 1) == '?'
						|| str.charAt(i - 1)
								== pattern.charAt(j - 1))
					lookup[i][j] = lookup[i - 1][j - 1];

				// If characters don't match
				else
					lookup[i][j] = false;
			}
		}

		return lookup[n][m];
	}


	// Driver code
	public static void main(String args[])
	{
		String str = "baaabab";
		String pattern = "*****ba*****ab";
		// String pattern = "ba*****ab";
		// String pattern = "ba*ab";
		// String pattern = "a*ab";
		// String pattern = "a*****ab";
		// String pattern = "*a*****ab";
		// String pattern = "ba*ab****";
		// String pattern = "****";
		// String pattern = "*";
		// String pattern = "aa?ab";
		// String pattern = "b*b";
		// String pattern = "a*a";
		// String pattern = "baaabab";
		// String pattern = "?baaabab";
		// String pattern = "*baaaba*";

		if (strmatch(str, pattern, str.length(),
					pattern.length()))
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}
*/
/** DP Memoisation solution:-

// C++ program to implement wildcard
// pattern matching algorithm
#include <bits/stdc++.h>
using namespace std;

// Function that matches input str with
// given wildcard pattern
vector<vector<int> > dp;
int finding(string& s, string& p, int n, int m)
{
	// return 1 if n and m are negative
	if (n < 0 && m < 0)
		return 1;

	// return 0 if m is negative
	if (m < 0)
		return 0;

	// return n if n is negative
	if (n < 0)
	{
		// while m is positve
		while (m >= 0)
		{
			if (p[m] != '*')
				return 0;
			m--;
		}
		return 1;
	}

	// if dp state is not visited
	if (dp[n][m] == -1)
	{
		if (p[m] == '*')
		{
			return dp[n][m] = finding(s, p, n - 1, m)
							|| finding(s, p, n, m - 1);
		}
		else
		{
			if (p[m] != s[n] && p[m] != '?')
				return dp[n][m] = 0;
			else
				return dp[n][m]
					= finding(s, p, n - 1, m - 1);
		}
	}

	// return dp[n][m] if dp state is previsited
	return dp[n][m];
}


bool isMatch(string s, string p)
{
	dp.clear();

	// resize the dp array
	dp.resize(s.size() + 1, vector<int>(p.size() + 1, -1));
	return dp[s.size()][p.size()]
		= finding(s, p, s.size() - 1, p.size() - 1);
}

// Driver code
int main()
{
	string str = "baaabab";
	string pattern = "*****ba*****ab";
	// char pattern[] = "ba*****ab";
	// char pattern[] = "ba*ab";
	// char pattern[] = "a*ab";
	// char pattern[] = "a*****ab";
	// char pattern[] = "*a*****ab";
	// char pattern[] = "ba*ab****";
	// char pattern[] = "****";
	// char pattern[] = "*";
	// char pattern[] = "aa?ab";
	// char pattern[] = "b*b";
	// char pattern[] = "a*a";
	// char pattern[] = "baaabab";
	// char pattern[] = "?baaabab";
	// char pattern[] = "*baaaba*";

	if (isMatch(str, pattern))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
*/
