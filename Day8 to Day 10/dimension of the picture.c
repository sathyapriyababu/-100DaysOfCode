/*Ram wants to keep a profile picture on Gmail.Gmail has some restriction over the dimension of the picture that we can upload.
The minimum dimension of the picture can be L x L, where L is the length of the side of the square.

Dimension of a photo is denoted as W x H,
where W - width of the photo and H - Height of the photo

When any photo is uploaded following events may occur:
  1. If any of the width or height is less than L, the user is prompted to upload another one. Print "CHANGE" in this case.
  2. If width and height, both are large enough and
    (a) equal to L, then it is accepted. Print "ACCEPTED" in this case.
    (b) else user is prompted to crop it. Print "CROP" in this case.
Input format
The input contains L and followed by two space-separated integers W and H.
Output format
Print appropriate text for each photo in a new line.
The output should be in Uppercase.
Code constraints
1 <= L,W,H <= 1000
Sample testcases
Input 1
180 180 180
Output 1
ACCEPTED
Input 2
150 640 540
Output 2
CROP
Input 3
175 150 180
Output 3
CHANGE
*/
#include<stdio.h>

int main()
{
   int L,W,H;
   scanf("%d%d%d",&L,&W,&H);


   if((L<1 && L>1000) ||(H<1 && H>1000) || (H<1 && H>1000))//for checking constraints
   return 0;

   if(W==L && H==L) printf("ACCEPTED");
   else
   if(W<L || H<L) printf("CHANGE");
   else
   if(W>L || H>L) printf("CROP");

  return 0;
}

