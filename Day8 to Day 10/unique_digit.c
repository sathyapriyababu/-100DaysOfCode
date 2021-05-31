/**When a particular range is given to Kyle,
he writes down the all the values within that range
which consists of unique digits. For example
if the range 10-30 is given, the he writes down all
the values except 11 and 22 since their digits are repeated.
However when large ranges are
given, he finds it difficult to identify the numbers.
 Help him by writing a code that prints all the
values in the range that satisfy the given condition.
Input format
Single line input that consists of the range values
Output format
Output displays the values which has unique digits
in the range as shown in sample test case.
Code constraints
Input will contain values greater than 5 digits.
Sample testcases
Input 1
10 300
Output 1
10 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27 28 29 30 31 32 34 35 36 37 38 39 40 41 42
43 45 46 47 48 49 50 51 52 53 54 56 57 58 59 60 61 62 63 64 65 67 68 69 70 71 72 73 74 75
76 78 79 80 81 82 83 84 85 86 87 89 90 91 92 93 94 95 96 97 98 102 103 104 105 106 107 108
109 120 123 124 125 126 127 128 129 130 132 134 135 136 137 138 139 140 142 143 145 146
147 148 149 150 152 153 154 156 157 158 159 160 162 163 164 165 167 168 169 170 172 173
174 175 176 178 179 180 182 183 184 185 186 187 189 190 192 193 194 195 196 197 198 201
203 204 205 206 207 208 209 210 213 214 215 216 217 218 219 230 231 234 235 236 237 238
239 240 241 243 245 246 247 248 249 250 251 253 254 256 257 258 259 260 261 263 264 265
267 268 269 270 271 273 274 275 276 278 279 280 281 283 284 285 286 287 289 290 291 293
294 295 296 297 298
*/
#include<stdio.h>
#include<math.h>
// returns the leftmost position of the repeating digit if present, else -1.
int unique_digit(int n)
{
int a[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
int r,pos=0;
while(n)
{
r=n%10;
if(a[r]==-1)
a[r]=pos;
else
return a[r];
pos++;
n /= 10;
}
return -1;
}
int main()
{
int pos,st,end,i,x,y;
scanf("%d %d", &st, &end);

for(i=st;i<=end;++i)
{
pos=unique_digit(i);
if(pos==-1)
{ printf("%d ", i);
continue; }
else
if(pos==0)
continue;
/*
1105
pos=2;
x=100;
y = 1105%100 = 5
i = i+ (95) - 1 = 1199
which in next iteration becomes 1200
*/
x=pow(10,pos);
y=i%x;
i = i + (x-y) -1; // minus 1 as for will also increment it by 1 always.
}
}
