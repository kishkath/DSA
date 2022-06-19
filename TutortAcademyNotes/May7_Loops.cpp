Date : 7th May 2022
Mentor: DEVANG SHARMA
Batch: MAY Batch (DSA) - Tutort Academy

Agenda:
- Introduction: DONE
- Data Types :DONE 
- Operators: DONE
- Basics of DSA: DONE

- Loops: 
- Pattern Printing Questions (Language Agnostic): 


(3) Unary Operators:


Unary: 1 Operand
Binary: 2 Operands
Ternary: 3 Operands



One Operand

- Increment (Pre/Post)
- Decrement (Pre/Post)
- Not (!)




Pre-Increment/Decrement: ++a, --a
Increase/Decrease the Value by 1 BEFORE and then use it.


int a = 10;

++a; //11
--a; //10



Post-Increment/Decrement: a++, a--
Use it and then Increase/Decrease the Value by 1.




Eg: 


int main() 
{
int a = 10;
int c = a++(10 -> 11)  + ++a (11->12);
// 10 + 12 = 22
cout<<c;
}




A-20
B-21
C-22: ANS
D-23


(4) Ternary Operators


3 Operands

int a = 10;
if (a==10)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}

OP: Yes




Ternary Operator Code:

(Condition) ? (Success) : (Non - Success)

(a == 10) ? cout<<"Yes" : cout<<"No";

? -> If
: ->Else




(5) Logical Operators: true/false


&&: AND
||: OR
!: NOT
^: XOR



AND:

1 && 1 = 1
1 && 0 = 0
0 && 1 = 0
0 && 0 = 0

OR:

1 || 1 = 1
1 || 0 = 1
0 || 1 = 1
0 || 0 = 0


NOT:

!0 = 1
!1 = 0


^: XOR

Both Operands Are Same, OP: 0
Both Operands Are Diff, OP: 1


1 XOR 1 = 0 XOR 0 = 0
A XOR A = 0

1 XOR 0 = 0 XOR 1 = 1




----> LOOPS:
Same Thing on Repetition


Q: WAP to Print "Hello World" 1000 Times


print("Hello World")
......
......
1000 Times



Loops:

for i in range(1000):
    print("Hello World")


for: Entry Based
while: Entry Based
do-while: Exit Based



(1) For Loop:


for (initialisation; condition; Increment/Decrement)
{
    // Code to be executed
}    


int i;
for (i=0; i<10; i++)
{
    cout<<i;
}

cout<<i; //10

OP: 0 1 2 3 4 5 6 7 8 9





#include<bits/stdc++.h>
using namespace std;

int main() 
{
int i;
for (i=0; i<10; i++)
{
    cout<<i<<" ";
}

    cout<<endl;
cout<<i; //10
}




int i;
for (i=0; i<=10; i++)
{
    cout<<i;
}

cout<<i; //11


OP: 0-10



for (i=0; i<N; i++) // N Times

for (i=1; i<=N; i++) // N Times



for (int i=1; i<10; )
{
    cout<<i;
}


OP: 1 1 1 1 1 ......Infinite Times
- TLE


int func(int n)
{
    return n-func(int n);
}

OP: Stack Overflow

int a[1000000000000];

int a[10]; // 40 Bytes - Contiguous Memory - RAM


10^12*4 Byte: 40 GB

4 GB: 3.68 GB
16 GB: 14.8 GB


Chrome          Spotify
xxxxxxx.........xxxxxx......xxxxx.x.x.x.x
1 GB    200 Mb    50 Mb      





for (int i=1; ; i++)
{
    cout<<i;
}

OP: 1 2 3 4 5 6 .......INT_MAX/Integer.Max... INT_MIN

OP: TLE


int i=5;
for (; ;)
{
    cout<<i;
}

OP: 5 5 5 5 5 5 5 5...TLE


for (int i=10; i>=0; i--)
{
    cout<<i;
}

OP: 10-0


for (i=0; i<N; i++) - N Times
{

}

TC: O(N)




Nested Loops:
Loop Inside a Loop

for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
        cout<<i<<" "<<j<<endl;
    }
}

Total Number of Executions = N*N= N^2 = 9
TC: O(N^2)


OP:

0 0
0 1
0 2

1 0
1 1
1 2

2 0
2 1
2 2


Q: TC

for (i=0; i<p; i++)
{
    for (j=0; j<q; j++)
    {
        for (k=r; k>=0; k--)
        {

        }
    }
}

TC: O(P*Q*R)









Eg:


for (i=0; i<10;i++)
{
    cout<<i;
}

void func(int n)
{
    if (n==10)
        return;

    cout<<n;
    func(n+1);
}




Google: Google Docs
Facebook: Coderpad
Netflix: Bluejeans, Docs


45 Mins: 2 Coding






