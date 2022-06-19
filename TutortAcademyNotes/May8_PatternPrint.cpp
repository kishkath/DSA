Date : 8th May 2022
Mentor: DEVANG SHARMA
Batch: MAY Batch (DSA) - Tutort Academy

Agenda:
- Introduction: DONE
- Data Types :DONE 
- Operators: DONE
- Basics of DSA: DONE
- Loops: DONE

TODO:
- Questions on Loops and TC
- Pattern Printing Questions (Language Agnostic): 

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".




Time Complexity:

(1) for (i=0; i<N; i++)
  O(N)

(2) for (i=0; i<N/2; i++)
  O(N/2)

(3) for (i=0; i<N; i+=2)
  O(N/2)

(4) for (i=0; i<N; i+=3)
  O(N/3)

(5) for (i=0; i<N; i+=K)
  O(N/K)

(6) for (i=0; i<N/2; i+=K)
  O(N/2K)






Q: Given 3 Values, Find Maximum of 3 Values

a b c


a = 10, b = 20, c = 15
OP: 20


a = 20, b = 20, c =20
OP: 20



#include<bits/stdc++.h>
using namespace std;

int maxOfThree(int a, int b, int c)
{ 
  1st Way:
      int largest=0;  
      largest = c > (a > b ? a : b) ? c : ((a > b) ? a : b);
      return largest;


  2nd Way: 
  int res = INT_MIN:

    if (a>=b && a>=c)
      res = a;

    else if (b>=c && b>=a)
      res = b;

      else  
        res = c;

    return res;


    3rd Way:

    int res = max(a,max(b,c));
    return res;


}

int main() 
{
cout<<(maxOfThree(10,20,5)==20)<<endl;
cout<<(maxOfThree(10,20,30)==30)<<endl;
cout<<(maxOfThree(20,20,20)==20)<<endl;
cout<<(maxOfThree(20,20,10)==20)<<endl;

}

TC: O(1)
SC: O(1)



int max = INT_MIN/ Integer.Min
int min = INT_MAX/ Integer.Max

int: -2Bn to +2Bn

INT_MIN__________________ 0 ________________INT_MAX


for (i=0; i<n; i++)
  res = max(res, arr[i]);


int res = 0;
maxOfThree(-10,-10,-15): -10

Expected OP: -10
Current OP: 0






PATTERN PRINTING:

Two Changing Values:
- Rows: Horiontal: Outer Loops
- Cols: Vertical: Inner Loop
 Two Nested Loops


Rows: Always be Increasing
First Loop - Outer Loop: for (i=0; i<N; i++) 

 -- DECREASING PATTERN:
Cols are Decreasing as Rows are Increasing


N = 5

*****
****
***
**
*

N = 6

******
*****
****
***
**
*



Template/Problem Solving:

Row 1, Col 5 = 1+5 = 6
Row 2, Col 4 = 2+4 = 6
Row 3, Col 3
Row 4, Col 2
Row 5, Col 1


i + j == N+1 (1 Based Indexing)

i + j == N (0 Based Indexing) -- ANS

Row + Col == N


First Loop - Outer Loop: for (i=0; i<N; i++) 

Second Loop - Inner Loop: for (j=0; i+j<N; j++)


#include<bits/stdc++.h>
using namespace std;


void pattern(int N)
{
  int i=0, j=0;
  for (i=0; i<N; i++)
  {
    for (j=0; i+j<N; j++)
    {
      cout<<"*";
    }

    cout<<endl;
  }
}

int main() 
{
//pattern(5);
pattern(6);

}






 -- INCREASING PATTERN:
Cols are Increasing as Rows are Increasing

N = 5

*
**
***
****
*****


N = 6
 
*
**
***
****
*****
******



Template/Problem Solving:

Row 1, Col 1, row == col 
Row 2, Col 2 
Row 3, Col 3
Row 4, Col 4
Row 5, Col 5


I == J : ANS
Row == Col


First Loop - Outer Loop: for (i=0; i<N; i++) 

Second Loop - Inner Loop: for (j=0; j<=i; j++)


#include<bits/stdc++.h>
using namespace std;


void pattern(int N)
{
  int i=0, j=0;
  for (i=0; i<N; i++)
  {
    for (j=0; j<=i; j++)
    {
      cout<<"*";
    }

    cout<<endl;
  }
}

int main() 
{
//pattern(5);
pattern(6);

}




Pattern Questions:
- Increasing
- Decreasing
- Number
- Pascal Triangle




Q: Pattern Printing-2

Test Case-1:

N = 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


Increasing Pattern:


*
**
***
****
*****

* --> Number Increasing



#include<bits/stdc++.h>
using namespace std;


void pattern(int N)
{
  int i=0, j=0;
    int cnt=1;
    
  for (i=0; i<N; i++)
  {
    for (j=0; j<=i; j++)
    {
      cout<<cnt<<" ";
        ++cnt;
    }

    cout<<endl;
  }
}

int main() 
{
//pattern(5);
pattern(6);

}







Master Any DS/Algo:
(1) What (Use Case/Problems)
(2) Why (Need/Applications)
(3) How (Coding/Implementation)


Ctrl + Z: Undo
Ctrl + Y: Redo

DS - Stack


University/Campus:
Multiple Buildings

Task:
Rope of Infinite Length such that, you cover all the Buildings using Minimum Length of Rope.

DS?




ARRAYS:

Use Case:

10 Integers

int a,b,c,,,,j


1000 Integers:

int a,b,....a1,a2....



Collection of "Similar Type of Data Types" Stored in "Contiguous Locations"

[1 2 3 4 5] - Yes, Array of Integers

['a' 'b' 'c' 'd'] - Yes, Array of Characters

[10 20 30 40 p 50 q] - Not an Array

["devang" "sharma" "tutort" "academy"] - Array of Strings

Class obj[10]; - Array of Objects



Syntax:

1st Way:
int a[5]; // Declaration
a = {1,2,3,4,5}; // Defintion


2nd Way:

int[] a = {1,2,3,4,5};  // Declaration + Defintion


int a[5];
a = {1,2,3,4,5,6};

OP: Error, Index Out of Bound


Declaration: Creation

Definition: Assigning Value


int a;  -- Creation --> Decalaration
a = 10; -- Assigning Value ---> Definition


int a = 10;  Declaration + Definition



Indexing:







O(1): Constant


O(1) TC!= 0 Iterations 
Correct: Constant Iterations


O(1) SC!=0 Bytes
Correct: Constant Size



(1) int a,b;
  8 Bytes : Constant
  SC: O(1)

(2) int arr[N];
  4*N Bytes: Variable
  SC: O(N)

(3) for(i=0; i<10; i++)
  10 Iterations
  TC: O(1)


(4) for(i=0; i<N; i++)
  N Iterations
  TC: O(N)






int sum=0;
for (i=0; i<n; i++)
{
  sum = sum + arr[i]; - Diff?
  sum += arr[i]; - Diff?
}










