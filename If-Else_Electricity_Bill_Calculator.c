HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
2
 
All Contests  PeaceMakers Army  If-Else_Electricity Bill Calculator
If-Else_Electricity Bill Calculator
Problem
Submissions
Leaderboard
Discussions
Submitted a few seconds ago • Score: 10.00Status: Accepted
 Test Case #0
 Test Case #1
 Test Case #2
 Test Case #3
 Test Case #4
 Test Case #5
 Test Case #6
 Test Case #7
 Test Case #8
 Test Case #9
 Test Case #10
 Test Case #11
 Test Case #12
 Test Case #13
 Test Case #14
 Test Case #15
 Test Case #16
 Test Case #17
 Test Case #18
 Test Case #19
 Test Case #20
 Test Case #21
 Test Case #22
 Test Case #23

Submitted Code
Language: C

 Open in editor
1
#include <stdio.h>
2
​
3
int main()
4
{
5
   int unit;
6
   
7
   float bill;
8
   scanf("%d",&unit);
9
   if(unit<0){
10
       printf("Invalid Input!");
11
       return 0;
12
   }
13
   if(unit>=0 && unit<=100){
14
       
15
       bill=5*unit;
16
       
17
   }
18
   else if(unit>100 && unit<=300){
19
      
20
       bill=7*(unit-100) + 500;
21
   }
22
   else if(unit>300){
23
        
24
       bill=10*(unit-300) + 500 +1400;
25
   }
26
   if(bill<=1200.00){
27
       bill-=bill*0.1;
28
   }
29
   printf("The electricity bill is: %.2f.",bill);
30
​
31
    return 0;
32
}
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

