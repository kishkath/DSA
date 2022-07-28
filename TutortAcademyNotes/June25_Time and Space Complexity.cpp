Date : 25th June 2022
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

TODO:

- Space Complexity - Auxliary and In memory - DONE
- CP Trick to Pass all Test Cases-EXTRA
- Pattern Trick of LC- EXTRA
- Recursion: 


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".





Interpreted Languages:
- Directly execute the code line by line.

Eg: Python, Javascript



Workflow for Interpreted Languages:

1 Line ---> OP



C++/Java/Go: (Compiled Language)

System.out.println("Devang");
int a = 4/0;

OP: Arithmetic Exception: Div by Zero 


Python: (Interpreted Languages)

____
print("Devang")
a = 5/0
print("Sharma")
_____


OP:
Devang
Error



----> Strictly Typed vs Loosely Typed Languages:

Strictly Typed --> Compiled Time Languages: C++,C, Java, Go:


int a = 10;
a = "dev";

OP:
String cannot be converted to int languages


Note:
Each Literal (Variable/Constant) is associated with a Data Type which is checked till tempHead
Program Execution end.



Lossely Typed --> Interpreted Languages: Python, JS

a = "Devang"
typeof(a): String


a = 10
typeof(a): Number




Time Complexity:
Time Taken to RUN the Program/ Execution Time for a Program



Space Complexity:
Memory Occupied during the RUN Time / Execution Memory for a Program



Why a Notation is required?


Same Code: Java: 20 LOC, 2 KB: .class File Size


M1 Mac: 1.4 sec
Windows:
Linux:


Solution:

There MUST be a Generic Template (Irrespective of Languages/OS) which EVERY Developer Across the Globe
Understands

Notation:

(1) Big O
(2) Small o
(3) Theta
(4) Omega
(5) Alpha


Big O Notation:
- Used to define the Time and Space Complexity of a Program
- Provided Asymptotic Complexity



Order of Complexity:

O(1) < O(log N) < O(N) < O(NlogN) < O(N^2) < O(N^3) < O(base ^ N) < O(N!) < O(N^N)


BEST ----------------------------------------------------------------------- WORST

FASTER ----------------------------------------------------------------------- SLOWER




Use of Order of Complexity:

(1) Compare Different Complexity:

Ramesh: O(N)
Suresh: O(NlogN)

Faster?
Ramesh


Ramesh: O(N) - Linear
Suresh: O(logN) - Binary


Faster?
Suresh

- Check Best and Worst
- Arrange Different Algos from Worst to Best Case


(2) More than 1 Operations in Single Program With Different Complexity


int f1() - Printing an Array
{
  O(N)
}


int f2()- Binary Search
{
  O(log N)
}

Total TC of Program?

TC: O(N) + O(logN) ~= O(N)

Ans: Always HIGHEST Complexity (Slowest in Execution)

N = 100
log N = 6.56
2^k = 100
k = ? (b/w 6 and 7)


N + log N = 106.56 ~= 100


O(N) + O(log N) + O(N^2) = O(N^2)

O(N!) + O(N^2) + O(NlogN) = O(N!)


Limiting Reagent:
Slowest Element will Determine the rate of reaction







------> How to Find Complexity from Code



Theoretical Way:
Master Theorem - Recurrence Relation


Practical Way:

"Always Find Complexity Based Upon Approach"

TRICK:
Number of Traversal/Iteration/Computations ---> O() ----> Time Complexity


Practical Example:

4 Students in a class
Pen is lost

Task: Search for Pen



(1) Make Everyone stand in a line and search one by one

S1 S2 S3 S4
= 4 Traversal/Iteration


N People: N traversals


O(N): Linear Time Complexity - Traverse ALL Elements One by One

CODE:

for (i=0; i<n; i++) - O(N)


(2) Ask Each Person to Search for All Other


S1: S1 S2 S3 S4
S2: S1 S2 S3 S4
S3: S1 S2 S3 S4
S4: S1 S2 S3 S4



Total Traversals: 4*4 = 4^2 = 16

4---> N: Traversals = O(N*N) = O(N^2)


CODE:

for (i=0; i<n; i++) // O(N)
{
  for (j=0; j<m; j++) // O(M)
  {
    //
  }
}

TC: O(N*M)


(3) Pen Found in Your Pocket

O(1): Constant Time


CODE:

int a = 10;
print(arr[0])


TC: O(1)


(4) Logarithmic Time

Approach:

Make All Stand in 1 Line, Search Half of them at each step


                S1 S2 S3 S4
               [S1 S2]  [S3 S4]
              [S1][S2]   [S3][S4]  


At Every Iteration ---> Divide into half

TC: O(log N) --> Binary Search



Q-1:

for (i=0; i<n; i++)

TC: O(N)

Q-2:

for (i=0; i<n/2; i++)

TC: O(N/2)

Q-3:

for (i=0; i<n; i+=2)

TC: O(N/2)

Q-4:

for (i=0; i<n; i+=3)

TC: O(N/3)

Q-5:

for (i=0; i<n; i+=K)

TC: O(N/K)

Q-6:

for (i=0; i<n/2; i+=2)

TC: O(N/4)




Diff between O(N/2) and O(log N):

64 ---> 32: O(N/2)

64 --> 32 --> 16 --> 8 --> 4 --> 2 --> 1: O(log N)







Space Complexity Trick:

- Array
- Stack
- Queue
- Map
- Set


O(N) Space in In-Memory: STACK: Static Memopry


Stack: Compile Time Memory - STATIC Memory - In Memory

Heap: Run Time Memory - DYNAMIC Memory - Auxliary Memory

Recursion: O(N)
- Always identified at Run Time



int fact(int n)
{
  if (n<=1)
    return n;

  return fact(n-1);
}


fcat(5)


























