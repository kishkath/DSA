Date : 26th June 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Topics:
- Arrays: DONE
- Binary Search and Time Complexity: DONE
- Prefix Sum Array- DONE
- Questions - DONE
- Two Pointer- DONE
- Question- DONE
- Compilation: DONE
- Execution: DONE
- Compiled Languages and Interpreted Languages: DONE
- What is TC and SC- DONE
- Why O Notation is Required- DONE 
- Order of O Complexity - DONE
- Compare different algos- faster and slowest - DONE
- Total Complexity in multiple functions with different complexities- DONE
- How to Find Complexity from Code? - DONE
- Time and Space Complexity - Real Life Meaning - DONE
- Space Complexity - Auxliary and In memory - DONE
- CP Trick to Pass all Test Cases-EXTRA - DONE
- Pattern Trick of LC- EXTRA
- Recursion: 



"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".











Space Complexity Trick:

(1) Stack: Compile Time Memory - STATIC Memory - In Memory

(2) Heap: Run Time Memory - DYNAMIC Memory - Auxliary Memory


In Memory/Stack:
- Array
- Stack
- Queue
- Map
- Set


O(N) Space in In-Memory: STACK: Static Memopry


Auxliary Memory/Heap:

Recursion: O(N)
- Always identified at Run Time



int fact(int n)
{
  if (n<=1)
    return n;

  return fact(n-1);
}


Main: fact(5)


Sequence:

fact(5) -> fact(4) -> fact(3) -> fact(2) -> fact(1)

Stored Sequential Calls:

fact(1)
fact(2)
fact(3)
fact(4)
fact(5)

- Stack Order: Recursion Stack




Program:

Constraints:

Space Limit: 128 MB per TC


Stack: 64 MB
Heap: 64 MB


Stack:           Heap:

|                 Up
|                 |
|                 |
Down              | 



RAM: 8 GB
Secondary: HDD/Pen Drive - 500 GB

File I/O:

file.open("D:/folder/file");









------> CP Trick to Pass all Test Cases - EXTRA

CP: Competitive Programming

Constraints:
The Upper Limit/Threshold which will be used to test your code


(1) Range of Values ---> data type

int: -2 Bn to +2 Bn: <= 10^9
long: -40Tn to +40Tn > 10 ^9

Note: >10^21: Big Integer


int arr[] = new int[n];
long sum = 0;

Sum Max Value = 10^9 * 10^4 = 10^13 > Range of int -> Use long



Constraints:

1 <= arr[i] <= 10^9/1e9
1 <= n <= 10000

Time Limit: 1 sec per TC
Memory Limit: 128 MB per TC


Range of TC:

TC-1: arr[i] = 10^9
TC-2: arr[i] = 1
.....................



(2) Time and Space Complexity Required to Pass All Test Cases


Time Limit: 1 sec per TC
Memory Limit: 256 MB per TC


1 sec = 10^8 Computations = 100 Mn Computations : CONSTANT (Platform Independent)



1 <= N <= 10^4        O(N^2) = 10^4 *10^4 = 10^8 Computations: All TC Passed

1 <= N <= 10^5        O(N^2) = 10^5 *10^5 = 10^10 Computations: Not All TC Passed
                                                              Eg: 7 TC Passed, 3 TLE

1 <= N <= 10^5        O(N) = 10^5 Computations: All TC Passed



Algo: Complexity

Binary Search: O(log N)
Two Pointer: O(N)
Sorting: O(NlogN)
Linear Search: O(N)
Nested Loops: O(N^2)


Trick:

(1) Check the upper limit of Contraints
(2) Compare with 10^8
(3) Figure what the complexity required to pass all tc
(4) Reverse Engineer to Find Algo to use





MLE Case:


Constraints:

1 <= arr[i] <= 10^9/1e9
1 <= n <= 10000

Time Limit: 1 sec per TC
Memory Limit: 128 MB per TC


1 <= n <= 10000
Max Arr Size: 10^4
int arr[10^4] = 4*10^4 Bytes = 40 KB


1 <= n <= 10^9
Max Arr Size: 10^9
int arr[10^9] = 4*10^9 Bytes = 4 GB - MLE


Recursion without a Base Case:



int fact(int n)
{
  return fact(n-1);
}

OP: MLE: Stack Overflow

Memory Changes Involved

......
fact(4)
fact(5)


for (i=1 ; ;i++ )
{
cout<<i<<endl;
}


OP: TLE 
No memory changes involved




1 <= tc <= 100
1 <= arr[i] <= 10^9
1 <= n <= 1000


Non Optimised Way:


cin>>tc;
while (tc--)
{
  int n;
  cin>>n;
  int arr[n];
}


Optimised Way:

int tc, int n;
int arr[1001];// All values: 0
cin>>tc;
while (tc--)
{
  cin>>n;
  // Input n values
}

 



1 Contest: 1000 People

90 Mins, 3 Ques

30% - All TC

300 People ----> 50 People

20 Openings

Top 50: Quickest Solutions - Interviews

CP: 15 Minutes - 3 Questions: Helpful





List of Leetcode Pattern Questions:
- Blind 75: https://leetcode.com/discuss/interview-question/460599/blind-75-leetcode-questions/1366280
- Grind 75: https://www.techinterviewhandbook.org/grind75


----> Pattern Trick of LC:

(1) If Input Array is Sorted:
  - Binary Search
  - Two Pointers


(2) If Asked for All Permutations/Subsets:
  - Backtracking

(3) If Given a Graph
  - DFS
  - BFS

(4) If Given a Linked List
  - Two Pointers (Fast and Slow) to Nodes of LL

(5) If Recursion is Not Allowed
  - Stack

(6) In Solve In-Place (SC: O(1))
  - Swap

(7) Maximum/Minimum/Largest/Smallest:
  - DP

(8) Top K Items/Least K Items/Kth Max/Kth Min
  - Heap (Min Heap/Max Heap) - PQ
  - Greedy

(9) Common Strings:
  - Map
  - KMP: Advanced
  - Trie: Auto Suggestion

(10) Best Complexity for Lookup/Search and Insertion: 
  - Map/Set: O(1)

(11) Sorting: O(NlogN)
    If Range is Given (1 <= val <= n) - O(N) - Count Sort and Bucket Sort

(12) Range Based Query
    - Segment Trees
    - Fenwick Trees

(13) BST:
    - Inorder Solution







-----> RECURSION:

A Function which calls itself inside its definition

Recursion:

func()
{
  ...
  func();
}



Not A Recursion:

func()
{
  ....
}


func2()
{
  func();
}



Factorial of a Number:
Product of All Values from 1 to N


N! = 1*2*3*4.........N

5! = 5*4*3*2*1 = 120 = 5 * 4!
4! = 4*3*2*1 = 24 = 4 * 3!
3! = 3*2*1 = 6 


N! = N * (N-1)!  --- TRIGGER ALERT

func(N) = N * func(N-1) --- RECURSION


prefixSum[i] = prefixSum[i-1] + arr[i] --- TRIGGER ALERT

prefixSumFunc(n) = prefixSumFunc(n-1) + arr[i]  -- RECURSION



func(N) = N * func(N-1) --- RECURSION


int factorial(int n)
{
  return n * factorial(n-1);
}

factorial(5);

OP:

5 * factorial(4)
= 20 * factorial(3)
= 60 * factorial(2)
= 120 * factorial(1)
= 120 * factorial(1)
= 0 * factorial(0)
= 0 * factorial(-1)................


Base Condition:
Tells Recursion to Stop


for (i=0; condition; i++)


Correct Code:


int factorial(int n)
{
  if (n==1 || n==0)
    return 1;

  return n * factorial(n-1);
}


factorial(5);

OP:

5 * factorial(4)
= 20 * factorial(3)
= 60 * factorial(2)
= 120 * factorial(1)
= 120 * factorial(1)
= 120


Constraints:
0 <= N <= 100


Recursion Stack:

factorial(1)
factorial(2)
factorial(3)
factorial(4)
factorial(5)

N calls, that is why, O(N) Space Complexity - Auxliary Memory

Recursion Stack - Sequence Calls stored in Stack Fashion - On the Top






All Recursive Code can be Solved by Iteration?
- Yes

All Iterative Code can be Solved by Recursion?
- Yes



Fibonacci Series:
0 1 1 2 3 5 8 13 21......


first = 0
second = 1

Nth Number = (N-1)th + (N-2)th --- TRIGGER ALERT

fibbo(n) = fibbo(n-1) + fibbo(n-2) -- RECURSION



HW:
- Write Recursive Version of fibbo(n)
- Write Iterative Version of fibbo(n)

- Write Iterative Version to Sort Array
- Write Recursive Version to Sort Array



Next Class:
XOR and Bit Manipulation
Linked Lists























