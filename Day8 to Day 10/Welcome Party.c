/*Welcome Party
New Year is shortly arriving and the students of St.
Philip’s College of Business are eager to receive
the freshers for the coming year. The Welcome party
for the freshers is going to be organized
in a week’s time and in connection to that the College
Management has ordered the students to renovate their
class room block.The Class room block has N rooms
 in it numbered from 1 to N. Each room is currently painted
in one of the red, blue or green colors. Students are
given configuration of colors of their class room block
by an array consisting of N values. In this array, color red will
be denoted by '1', green by '2' and blue by '3'.
The Management wanted the class room block to be repainted
such that each class room has same color. For painting,
Students have all the 3 color paints available and
mixing any 2 color paints will result into 3rd color paint i.e
1 + 2 = 3
2 + 3 = 1
3 + 1 = 2
For example, if a room is already painted in green color,
painting that room red color,
will make the color of the room blue.
Also, students have many buckets of paint of each color.
Simply put, you can assume that they will not run
out of paint. Students are a bit lazy, so they does not want to
work much and therefore, has asked you to find
the minimum number of rooms they have to repaint (possibly zero)
in order to have all the rooms with same color as told
by the Management. Can you please help them?

Input format
First line of input contains an integer N, denoting the
number of class rooms in the College’s class room black.
Assume that the maximum value for N as 50.Next line of
input contains N values, denoting the current color configuration of
rooms.
Output format
Print the minimum number of rooms that need
to be painted in order to have all the
rooms painted with same color i.e red, blue or green.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
3
1 1 1
Output 1
0
Input 2
3
1
2
3
Output 2
2
*/

#include<stdio.h>
int main()
{
    int n,k=0,c=0,j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
      {
         if(arr[i]==1)
        k++;
        if(arr[i]==2)
          j++;
        if(arr[i]==3)
            c++;
      }
      if(k>j)
      {
          if(k>c)
            printf("%d",n-k);
           // printf("1.1");
          else
            printf("%d",n-c);
           // printf("1.2");
      }
      else if(j>c)
        {printf("%d",n-j);
        printf("2");
        }
      else
      {printf("%d",n-c);
      printf("3");
      }

    return 0;
}
