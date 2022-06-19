Date : 29th May 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:

- Arrays: DONE
- Binary Search and Time Complexity: DONE
- Advanced Questions on Array - DONE
- Two Pointer- DONE
- Question- DONE
- Two Sum: All Solutions: DONE

- Prefix Sum Array- 
- Questions - 
- Majority Element https://leetcode.com/problems/majority-element
- Product of Array Except Self
- Wiggle Sort: https://www.lintcode.com/problem/508/description
- Intersection of Two Arrays: https://leetcode.com/problems/intersection-of-two-arrays/


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".











---------> PREFIX SUM Array/Running Sum Array


Given an array a[] of size n.
Prefix sum Array is another Array of SAME SIZE N such that:

prefixSum[i] = a[0] + a[1] + a[2]......+ a[i]
             = Sum of all elements upto arr[i]




a = [10 20 10 5 15]

prefixSum[] = [10 30 40 45 60]

prefixSum[i] = Sum of arr[0...i]


prefixSum[i] = (a[0] + a[1] + a[2]......+ a[i-1]) + a[i]

prefixSum[i-1] = (a[0] + a[1] + a[2]......+ a[i-1])


prefixSum[i] = prefixSum[i-1] + a[i] --- TRIGGER ALERT


Sum of Values till (i)
= 
Sum of Values till (i-1)
 + 
a[i]





void prefixSum(int []arr, int n)
{
  int[] prefixSum = new int[n];
  prefixSum[0] = arr[0];

  for (int i=1; i<n; i++)
    prefixSum[i] = prefixSum[i-1] + arr[i];
}


TC: O(N) 
SC: O(N)


O(N^2) + O(N) = O(N^2)

N = 100
N^2 = 10000

N^2 + N = 10100 ~= 10000

x + dx ~=x










TC: O(1)

for (i=0; i<4; i++)
{
  cout<<i;
}
// 4 Times: Constant

N = 10000000000000
N = 1

TC: O(N)

for (i=0; i<N; i++)
{
  cout<<i;
}
// N Times: Variable

N = 10000000000000
N = 1


SC: O(1) - Constant Space

int a,b; // 8 Bytes



SC: O(N) - Linear Space

int[] arr = new int[n]; // 4*N Bytes

















fact(n) = n * fact(n-1)--- TRIGGER ALERT

fibo(n) = fibo(n-1) + fibo(n-2);--- TRIGGER ALERT


int func(int n)
{
  if (n==1)
    return 0;

  return n + func(n-1);
}


main()
{
  func(5);
}


func(5) -> func(4) -> func(3) -> func(2) -> func(1)








Q-1: [Microsoft] Find Equilibrium Index in An Array

Equilibrium Index in an array is an index such that:

Sum of Elements on its left == Sum of Elements on its right

Index: i: Equilibrium Index
Sum of arr[0....i-1] = Sum of arr[i+1......n-1]

_ _ _ i _ _ _ 


a[] = [-7 1 5 2 -4 3 0]
OP: 3

idx = 3
left: [-7 1 5]
right: [-4 3 0]

leftsum = -1
rightsum = -1



Edge Cases:

Can there be Multiple Equilibrium Index in an Array?
- YES

a = [0 0 0 0]
- All Indices are Equilibrium Indices


a = [10]
OP: 0

leftsum = 0
rightsum = 0


a = []
OP: -1


Can Even Size Array have Equilibrium Index?

a = [6 10 3 3]
OP: 1




Solution:

(1) Brute Force: Two Nested Loops

For Every Element, Calculate leftsum and rightsum

if (leftsum == rightsum)
  return i;



CODE:

a = [6 10 3 3]
OP: 1


{
  int lsum, rsum;

  for (i=0; i<n; i++) // i=0, i<3
  {
    lsum=0;
    for (j=0; j<i; j++)
      lsum += a[j]; //i=0: 0, i = 1: 6

    rsum =0;
    for (j=i+1; j<n; j++)
      rsum += a[j]; //i=0: 16, i = 1: 6

    if (lsum == rsum)
      return i; // 1
  }

  return -1;
}

TC: O(N^2)
SC: O(1)




(2) Optimised Approach: Prefix Sum Array


Approach:

Initialise leftsum = 0
Get the totalSum of Array - totalSum

totalSum = totalSum - arr[i] ---> RIGHTSUM


leftsum == totalSum, return i

Update leftsum:
  leftsum += a[i]




CODE:

{
  int totalSum = 0;
  int leftsum = 0;

  for (i=0; i<n; i++)
    totalSum += a[i];

  for (i=0; i<n; i++)
  {
    /*

    a[] = [-7 1 5 2 -4 3 0]
    totalSum = 0

    i = 0
    totalSum = totalSum - a[0] = 0 - (-7) = 7 : RIGHTSUM
  
  */

    totalSum = totalSum - a[i]; // RIGHTSUM

    if (leftsum == totalSum)
      return i;

    leftsum += a[i];
  }

  return -1;
}


TC: O(N)
SC: O(1)


HW: 

- Pivot Element - LC
(https://leetcode.com/problems/find-pivot-index)
- Prefix Sum Ques - LC
(Running Sum Array)
(https://leetcode.com/problems/running-sum-of-1d-array/)


