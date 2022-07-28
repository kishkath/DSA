
Date : 3rd July 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Questions:
- Two Sum with all approaches and a basic understanding of hashmap: DONE
- Given an array replace every element with a greater element on the right side: DONE
(not including the current element) 
- Given an array replace every element with a greater element on the left side: DONE
(not including the current element) 
- Majority Element:  https://leetcode.com/problems/majority-element: DONE
- Wiggle Sort: https://www.lintcode.com/problem/508/description:  DONE
- Decompress RLE: DONE
- Kids With the Greatest Number of Candies: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/: DONE
- Intersection of Two Arrays: https://leetcode.com/problems/intersection-of-two-arrays/ - DONE
- Rotate Array: https://leetcode.com/problems/rotate-array/ - 

TODO:
- XOR Concept: 
- 136. Single Number: 
- 268. Missing Number: 
- 1720. Decode XORed Array
- 1920. Build Array from Permutation
- Product of Array Except Self

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".







(2) Without Extra Space


K %= nums.size();


- Reverse Complete Array 
- Reverse Array from 0 to K
- Reverse Array from K to N



nums = [1,2,3,4,5,6,7], K = 3
Output: [5,6,7,1,2,3,4]


nums.size() = 7
K%N = 3

(1) reverse (nums.begin(), nums.end()); // S: O(1)

reverse = [7 6 5 4 3 2 1]

(2) reverse (nums.begin(), nums.begin() + K);

reverse = [5 6 7 4 3 2 1]

(3) reverse (nums.begin() + K, nums.end());

reverse = [5 6 7 1 2 3 4]


In-Space/In-Place Solution : S: O(1), Modify Original DS, Do not create additional DS



CODE:

// TC: O(N) + O(N)
// SC: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int K) 
    {
        int n = nums.size();
        
        if (n==0 || (K<=0))
            return;
        
        K%= n;
        
        reverse (nums.begin(), nums.end()); // S: O(1), O(N)
        //reverse = [7 6 5 4 3 2 1]

        reverse (nums.begin(), nums.begin() + K); // O(K)
        //reverse = [5 6 7 4 3 2 1]

        reverse (nums.begin() + K, nums.end()); // O(N-K)
        //reverse = [5 6 7 1 2 3 4]

    }
};




4 Variations:

(1) Right Shift, k > 0
(2) Right Shift, k < 0
(3) Left Shift, k > 0
(4) Left Shift, k < 0






---> Bits Manipulation

(1) And, Or, Not Operators
(2) Left Shift and Right Shift Operators (<<, >>)
(3) XOR Operators


XOR Concept

XOR Gate:

0 XOR 0 = 0
0 XOR 1 = 1
1 XOR 0 = 1
1 XOR 1 = 0


Extended Version of XOR on Bits to Numbers

TRICK: Apply on Numbers ---> Perform Bitwise XOR Operation on Binary Values (Bits)

(1) A ^ A = 0

5^5 = 0
101 ^ 101 = 000

CODE:

    int res = 10;
    int ans = res^res;
    cout<<ans;


(2) Commutative

A ^ B = B ^ A

A + B = B + A
A * B = B * A

A - B != B - A // Not Commutative
A / B != B / A // Not Commutative


CODE:

    int a = 10, b = 15;
    int c = a^b;    
    cout<<c<<endl;
    
    int d = b^a;
    cout<<d<<endl;



(3) A ^ 0 = A

Note: 0 is Idenity of XOR

A opr B = A
B -> Identity of opr

A + 0 = A
0: Additive identity

A * 1 = A
1: Product Identity


1010 ^ 0000 = 1010


CODE:

    int a = 20;
    int ans = a^0;    
    cout<<ans; 




(4) A^A^A^A^A.......: Even Times: 0
                      Odd Times: A

A^A = 0
A^0 = A


A^A^A = (0)^A = A^0 = A

A^A^A^A = 0^A^A = A^A = 0


(5) A^A^B = B^A^A = A^B^A = B
Position DOES NOT Matter




Questions:
- 136. Single Number: 
- 268. Missing Number: 
- 1720. Decode XORed Array







Q-9: [LC - 136] Single Number

https://leetcode.com/problems/single-number/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.


Expectation: T-O(N), S- O(1)



  public int singleNumber(int[] nums) {
        
    }


Solutions:


(1)
(2)
(3) 
(4)
(5)


(1) Brute Force Solution:

Two Nested Loops, 
if (arr[i]!=arr[j]), return that number


TC: (N^2)
SC: O(1)

(2) Sorting:

[2 1 2] --> [1 2 2]

All Duplicated Values will be Together


CODE:

class Solution {
public:
    // TC: O(NlogN) + O(N)
    // SC: O(1)
    
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        
        // [4,1,2,1,2] -> [1 1 2 2 4]
        for (i=1; i<n; i+=2)
        {
            if (nums[i]!=nums[i-1])
                return nums[i-1];
        }
        
        return nums[n-1];
    }
};


(3) Using Map

Element: Frequency

if freq == 1
  return ans

TC: O(N)
SC: O(N)


(4) Using XOR


Duplicate Value (Even Frequency): XOR = 0
Single Value: XOR = Single Value

CODE:

    // T: O(N)
    // S: O(1)
    
    int singleNumber(vector<int>& nums) 
    {
        int ans = 0;
        for (auto x: nums)
            ans ^= x;
        
        return ans;
    }



(5) Using Set

Approach:
- Convert into set
- Find Sum*2 of Set
- Ans = Sum*2 of Set - Sum of Array : Single Number

Array: [4 1 2 1 2]

Set: [1 2 4]
Sum of Set *2 = 7*2 = 14
Sum of Array: 10

OP: Sum of Set*2 - Sum of Array 
  = 14-10
  = 4

TC: O(N)
SC: O(N)







Q-10: [LC-268] Missing Number
https://leetcode.com/problems/missing-number/


Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?




Understanding:

n  = arr.size();

Range: [0,n]
Total Values : N+1 (0,1,2,....n)
Given Values: N

1 Missing Number --> Find that



Solution:


(1) XOR

[3,0,1] Missing: 2

Expected: [0...N] = [0,1,2,3,...N]
Current: 1 Value Missing

Do XOR of values of arr[i] with [0...N]

(3^0^1)^(0^1^2^3) = 2

(Arr Values) ^ (0...N)  = Missing Number




    // T: O(N), S: O(1)
    
    public int missingNumber(int[] nums) 
    {
        int ans =0, i=0;
        

        /*

(3^0^1)^(0^1^2^3) = 2

(Arr Values) ^ (0...N)  = Missing Number

*/

        
        for (i=0; i<nums.length; i++) // i = 0 to n-1
            ans = ans^i^nums[i];
        
        // i = n
        return ans^i;
    }




T: O(N)
S: O(1)



int sum = n*(n+1)/2

n >= 10^4L: Overflow



HW:
- Single Number-2
- Single Number-3: IMP
- First Missing Positive
- Find the Duplicate Number
- Couples Holding Hands: Medium
- Find Unique Binary String: IMP






