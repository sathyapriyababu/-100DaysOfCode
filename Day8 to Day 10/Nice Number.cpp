/*Nice Number
"The Greatest Furniture Expo" is a biggest fair exhibiting furniture products,
services and equipment, interior services, decoration plans,
modular kitchen accessories, bedroom furniture, stylish sittings etc
in the Furniture industry. It is a 4-day event and on the inaugural day
of the event, the Event coordinators have announced for a Lucky lottery contest.
According to the Lucky lottery, the visitors’ entry tickets are
collected and the visitors whose ticket numbers are nice numbers are
chosen as winners and attractive discount coupons are distributed to
the winners. A nice number is a positive integer which has
exactly 4 divisors.
The Event coordinators wanted to know if a specific’s entry
ticket number is a nice number or not. Write a
program using functions which determines if a given number
is a nice number or not.
Function Specifications:
Use the function return type and the argument type as:
def findType(int)
The Function should return 1 if the number is nice or return 0
if it is not a nice
number.
Note:
The main function is already provided and well defined. The function mentioned
above is to be defined by you to solve this problem.
Input format
First line of the input is an integer that corresponds
to the entry ticket number of a visitor.
Output format
Output should display "Nice" if the given ticket number
is a nice number. Print "Not Nice"

Sample testcases
Input 1
6
Output 1
Nice
Input 2
4
Output 2
Not Nice
*/
#include<iostream>
using namespace std;
int NiceNum(int n)
{
    int i,j=0;
    for(i=2;i<=n/2;i++)
       {
        if(n%i==0)
        j++;
       }
    if(j==2)
        return 1;
    else
        return 0;
}

int main()
{

    int n;
     cin>>n;

    if(NiceNum(n)==1)
        cout<<"Nice num";
    else
        cout<<"Not a Nice num";
return 0;
}
