/*The program must accept a string S and an integer N as the input. The program must print the
desired pattern as shown below:
String: abcdefghijk
N: 3
Output:
a
*b
**c
*d
e
*f
**g
*h
i
*j
**k
Explanation:
Here N is 3. The highest possible height of the string pattern must be 3. Start from the height as
1. Increment till the value n(=3) is reached. Once the height is reached start decrementing.
Repeat the process until all the characters in the string are printed.
Input format
Two lines of input where first line has the string and second line has the value of N.
Output format
Output is displayed as shown is sample test case.
Sample testcases
Input 1
abcdefghijk
3
Output 1
a
*b
**c
*d
e
*f
**g
*h
i
*j
**k
Input 2
samples
4
Output 2
s
*a
**m
***p
**l
*e
s
*/
// C++ program to print Step Pattern
#include <iostream>
using namespace std;
// function to print the steps
void steps(string str, int n)
{
// declare a flag
bool flag;
int x = 0;

// traverse through all the characters in the string
for (int i = 0; i < str.length(); i++) {

// if the x value is 0.. then
// we must increment till n ...
// set flag to true
if (x == 0)
flag = true;

// if the x value is n-1 then
// we must decrement till 0 ...
// set flag as false
if (x == n - 1)//3== 4-1 -->3
flag = false;

// print x *s
for (int j = 0; j < x; j++)
cout << "*";
cout << str[i] << "\n";
//G
//*o
//**K
//***u
//**l
//*a
//k
//*a
//**n
//***n
//**a
//*n

// checking whether to
// increment or decrement x
if (flag == true)
x++;//1//2//3//1//2//3
else
x--;//2//1//0//2//1//0
}

}
int main()
{
// Get the String and the number n
int n;
string str;
cin>>str>>n;//Gokulakannan 4
// calling the function
steps(str, n);
return 0;
}
