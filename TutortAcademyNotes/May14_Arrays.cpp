Date : 14th May 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:
- Introduction: DONE
- Data Types :DONE 
- Operators: DONE
- Basics of DSA: DONE
- Loops: DONE
- Questions on Loops and TC: DONE
- Pattern Printing Questions (Language Agnostic): DONE

TODO:
- How to setup leetcode and submit a question: DONE
- Arrays: DONE
- Find max element is an array: DONE
- Find max element and min element in a single pass:  DONE

- Find 2 max elements in a single pass: 
- Reverse an array of chars
- Max column sum in a 2D array

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".






----> How to setup Leetcode and submit a Question

Important:

(1) Discuss Section - Company, Compensation
(2) Top 100 Questions - IMP
(3) Top Interview Questions - IMP
(4) Lintcode: Free Questions, Filter by Company

Strategy:
(1) Top 100 Questions:
(2) Top Interview Questions:
(3) Blind 75 : https://leetcode.com/discuss/interview-question/460599/blind-75-leetcode-questions/1366280
(4) Grind 75 : https://www.techinterviewhandbook.org/grind75
(5) Company Specific Questions: Last 2-3 weeks before Interview, Sort By Latest


System Design:
(1) Designing Data Intensive Applications - Books
(2) Alex Xu: System Design Interview- Insider Guide Part-2 - Books
(3) Grokking the System Design Interview: Educative.io: 
(4) Grokking the Object Design Interview: Educative.io:
(5) Exponent - System Design Interview
(6) High Scalability
(7) Donne Martin: Github - Good

LLD:
- SOLID, DRY, KISS
- Robustness, Clean and Modular
- Peer Code Review

Eg: Question
Build Chat Applications

Client- REST/SOAP
Server- Web Sockets










-------> ARRAYS:

a = [1 2 3 4 5]
size = 5

Indexing:  0 to size-1 = 0 to 4

a[0] = 1
a[1] = 2
a[3] = 4

a[5] = CT Error - Index Out of Bound
a[-1] = CT Error - Index Out of Bound



Purpose of Indexing:


Books: Collection of Pages = Array of Pages

Page Numbering: Uniquely Identify the Page in the Book
Indexing: Uniquely Identify the Element in the Array


----> Contiguous/Continuous Location


int a[] = {1,2,3,4,5};
Index: 0 to 4



int: 4 Bytes
Total Memory: 20 Bytes in Memory: Primary Memory: RAM (Registers)


Address of a[0] = 1 = Base Address = 1000: ASSUME

Address of a[1] = 2 = 1000 + 1*4 = 1004

Address of a[2] = 3 = 1000 + 2*4 = 1008

........................................


Address of a[k]  = Base Address + k*4 (data type size)



---- 1------------- ----- 2-----------  --- 3--------

1000 1001 1002 1003 1004 1005 1006 1007 1008 1009




JAVA:

Array: Static
ArrayList: Dynamic
Vector: Dynamic 

C++:
Array: Static
Vector: Dynamic

Python:
List: Dynamic

Go:
arr[]: Dynamic




Ques, IP, OP, Function, Company Name
30 sec - Code (Any Language), TC, SC


Q-1: Print All Values/Traversal in Array


a = {1,2,3,4,5}
OP: 1 2 3 4 5


CODE:

public class Main {
    
    // 1st Method - Iterating Over Index
    static void printArray(int[] arr, int n)
    {
        int i=0;
        for (i=0; i<n; i++)
            System.out.print(arr[i] + " ");
    }
    
    // 2nd Method - Iterating Over Values
    static void printArray2(int[] arr, int n)
    {
        for (int val: arr)
            System.out.print(val + " ");
    }

    public static void main(String[] args) 
    {
      int[] arr= {1,2,3,4,5};
      int n = arr.length;
      printArray(arr,n); 
      System.out.println();  
      printArray2(arr,n); 
    }
}


TC: O(N)
SC: O(1)



Q-2: Sum of All Elements in an Array:

a[] = {1,2,3,4,5}
OP: 15


Approach:

sum = 0
sum = A[0]....A[n-1]
    = for (arr[i]): i: 0 to n-1


CODE:


long sumOfArray(int[] arr, int n)
{
  long sum =0;
  for (int i=0; i<n; i++)
    sum += arr[i];

return sum;
}


TC: O(N)
SC: O(1)

Note:
Whenever taking Sum or Product, Always Think About OVERFLOW.


int: -2Bn to +2Bn

int a = 1.5 Bn;
int b = 1.5 Bn;

int c = a + b; // Overflow 
- Silent Killer

c = Garbage Value

Expected OP != Garbage Value ---> WA (Wrong Answer)


10 TC, 8 Passed, 2 WA: Integer Overflow

10 TC, 0 Passed, 10 WA: Logic Incorrect








for (int i=0; i<n; i++)
{
  sum = sum + a[i];
  sum += a[i]; - Efficient
}


-----> CP Trick:


for (int i=0; i<n; i++)
{
  sum = sum + a[i];
}

- Creating a Copy of Sum, Then Adding arr[i], Then Assigning to Sum
- O(N)

for (int i=0; i<n; i++)
{
  sum += a[i];
}

- Adding arr[i] and then Assigning to Sum
- O(1)





Q-3: Find Max Element in An Array
Q-4: Find Max and Min Element in An Array in a Single Pass



a[] = {10,-2,30,45,56}
OP:

Max: 56
Min -2

void maxandminElement(int arr[], int n)
{

}


Solution:

(1) Brute Force: Sort the Array

a[] = {10,-2,30,45,56}

After Sorting:

a = [-2,10,30,45,56]

arr[0]: Min
arr[n-1]: Max

C++: sort(a,a+N); // Quick Sort
TC: O(NlogN)


Java: Arrays.sort(arr); // Tim Sort: Hybrid Sort= Quick + Merge + Insertion
TC: O(NlogN)


TC: O(NlogN)
SC: O(1)


(2) Two Pass:

void maxandminElement(int arr[], int n)
{
  int min_e = arr[0];
  int max_e = arr[0];
  int i=1;

  for (i=1; i<n; i++)
  {
    if (arr[i] > max_e)
      max_e = arr[i];
  }

  for (i=1; i<n; i++)
  {
    if (arr[i] < min_e)
      min_e = arr[i];
  }


cout<<max_e<<" "<<min_e;
}

TC: O(N) + O(N)
SC: O(1)


(3) One Pass: Most Optimised

void maxandminElement(int arr[], int n)
{
  int min_e = arr[0];
  int max_e = arr[0];
  int i=1;

  for (i=1; i<n; i++)
  {
    if (arr[i] > max_e)
      max_e = arr[i];
 
    if (arr[i] < min_e)
      min_e = arr[i];
  }


cout<<max_e<<" "<<min_e;
}

TC: O(N) 
SC: O(1)



(4) Two Pass: STL (Standard Template Library)

void maxandminElement(int arr[], int n)
{
  int min_e = *min_element(arr,arr+n);
  int max_e = *max_element(arr,arr+n);

  cout<<max_e<<" "<<min_e;
}

TC: O(N) + O(N)
SC: O(1)













