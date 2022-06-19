Date : 4th June 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:

- Arrays: DONE
- Binary Search and Time Complexity: DONE
- Advanced Questions on Array - DONE
- Two Pointer- DONE
- Question- DONE
- Two Sum: All Solutions: DONE
- Prefix Sum Array- DONE

TODO:
- Questions - 
- Majority Element https://leetcode.com/problems/majority-element
- Product of Array Except Self
- Wiggle Sort: https://www.lintcode.com/problem/508/description
- Intersection of Two Arrays: https://leetcode.com/problems/intersection-of-two-arrays/


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".






Subarray Vs Subsequence vs Subsets


a = [5 2 1 4 3 6]

Subarray = Substrings (STRINGS)

Subarrays:
- Values MUST be CONTIGUOUS 
- Values MUST be In ORDER (Same Order as in Original Array)


Eg:

[5 2 1]: YES
[1 4 3 6]: YES
[1 4 6]: NO
[1 2 5]: NO
[5 2 1 4 3 6]: YES
[5],[2]: YES

Formula for Subarray:

a = [5 2 1 4 3 6]
Size = 6

Subarrays Starting from 5, i = 0: Total = 6 (n-i)

[5]
[5 2]
[5 2 1]
[5 2 1 4]
[5 2 1 4 3]
[5 2 1 4 3 6]

Subarrays Starting from 2, i = 1: Total = 5 (n-i)

[2]
[2 1]
[2 1 4]
[2 1 4 3]
[2 1 4 3 6]




Total Number of Subarrays in an Array 
= 6 + 5 + 4 + 3 + 2 + 1
= 21



Total Number of Subarrays in an Array of size N:
= N + (N-1) + (N-2) + ......... + 1 
= 1 + 2 + 3 + ..........+ N-1 + N
= N * (N+1)/2




CODE:

for (i=0; i<n; i++)
{
  for (j=i; j<n; j++)
    cout<<a[j]<<" ";
}

TC: O(N^2)











Subsequences:

a = [5 2 1 4 3 6]


Subsequences:
- Values NEED NOT be CONTIGUOUS 
- Values MUST be In ORDER (Same Order as in Original Array)


Eg:

[5 2 1]: YES
[1 4 3 6]: YES
[1 4 6]: YES
[1 2 5]: NO
[5 2 1 4 3 6]: YES
[5],[2]: YES



Subsets:

a = [5 2 1 4 3 6]

- ANY POSSIBLE COMBINATION from Elements of Array
- Values NEED NOT be CONTIGUOUS 
- Values NEED NOT be In ORDER (Same Order as in Original Array)


Power Set = 2^N 

Eg:

[5 2 1]: YES
[1 4 3 6]: YES
[1 4 6]: YES
[1 2 5]: YES
[5 2 1 4 3 6]: YES
[5],[2]: YES

[1 2 7]: NO




Subsets
 - Subsequences
  - Subarrays


Syllogism:

All Subarrays are Subsequences
 All Subsequences are Subsets




















Q-2: [CISCO] Find if there is any subarray with sum = 0
    [Google] Find if there is any subarray with sum = K



Given an array of positive and negative integers.
Find if there is any subarray with sum = 0


a = [4 2 -3 1 6]
OP: true

[2 -3 1]
sum = 0



Approaches:

Incorrect:

Sort + Sliding Window: 
NlogN    N

Order is Important: NEVER do Sorting



Eg:

Subarrays
Subsequences
Kth Largest
Kth Smallest
Next Greater
Next Smaller
Prev Greater
Prev Smaller



Solution:

(1) Brute Force: Two Nested Loops

Find All Subarrays, Check if sum == 0


Number of All Subarrays = N*(N+1)/2


TC: O(N^2)
SC: O(1)


(2) Optimised Solution: Prefix Sum


a = [4 2 -3 1 6]
OP: true


prefixSum[i] = a[0] + a[1] + ......... + a[i]


prefixSum[i] = 0
a[0] + a[1] + ......... + a[i] = 0
a[0....i]: Subarray with sum = 0

Subarray Starting from 0 Index with Sum = 0




a = [4 2 -3 1 6]
OP: true

Subarray: [2 -3 1] : Starting from 1 Index




.......i.........j.......

prefixSum[j] = prefixSum[i] + arr[i....j]

prefixSum[i] = Sum Upto ith Index Values = arr[0....i] = K

prefixSum[j] = Sum Upto jth Index Values = arr[0....j] = K

Sum of Values from i to j = K-K = 0

a[i...j]: Subarray

Subarray Starting from Random Index (Not 0) with Sum = 0



Example-1: Subarray with sum = 0 starting from Non-Zero Index
a = [4 2 -3 1 6]

Subarray: [2 -3 1] : Starting from 1 Index


prefixSum = [4 6 3 4 10]
4 is REPEATED



Example-2: Subarray with sum = 0 starting from 0 Index
a = [-1 2 -1 5 6]


Subarray: [-1 2 1]: Starting from 0 Index


prefixSum = [-1 1 0 5 11]
0 contained in prefixSum






Approach:

Calculate prefixSumArray
if prefixSum == 0 OR prefixSum is Repeated
  return true
else
  return false



arr = [1 2 3 1]
Map: Key- Value: Key: Unique

Key: Value

{name: devang}


arr = [1 2 3 1]
Set: [1 2 3]

arr = [1 2 3 1]
Check Duplicates

First Loop: Check for All Values : O(N)

Second Loop: Check for Repeated Value: - Arr: O(N), TC: O(N^2)
            
             Check for Repeated Value: - Set: O(1), TC: O(N)




CODE:

boolean subarrayWithSumZero(int[] arr, int n) 
{
  HashSet<Integer> set = new HashSet<Integer>();
  int prefixSum =0;

  for (i=0; i<n; i++) // O(N)
  {
    prefixSum += arr[i];

    if (prefixSum == 0 || set.contains(prefixSum)) // O(1)
      return true;

    set.add(prefixSum);
  }

  return false;
}


TC: O(N)
SC: O(N)


Variation:

(1) Print Subarrays with sum = 0 

Map: 
prefixSum: i

(2) Count All Subarrays with sum = 0

    int count =0;

    if (prefixSum == 0 || set.contains(prefixSum)) // O(1)
      ++count;







C++:

set<int> set;
set.find(prefixSum)!= set.end() // O(1)




Q: LC - 169: Majority Element


Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?





Understanding:

[1 1 1 1 2 3 4 5]
Majority Element = ?

- INAVLID TEST CASE

N = 8
N/2 = 4

Majority Element: freq > N/2

> N/2: Correct
>=N/2: Incorrect




Solution:

(1) Brute Force: Check freq > N/2: TC: O(N^2)
(2) Map: freq > N/2: TC: O(N)
(3) Sort and check the value at arr[n/2]: O(NlogN)
(4) Partial Sorting
(5) Bayer Moore Algo


[2,2,1,1,1,2,2]
N = 7
N/2 = 3

After Sorting
[1 1 1 2 2 2 2]

arr[N/2] = arr[3] = 2: Majority Element


After Sorting, 
At Index N/2: Majority Element




HW:

(1) Subarray Sum Equals K : Google
(2) 3 Approaches: Majority Element
(3) Read about Bayer Moore Algo







