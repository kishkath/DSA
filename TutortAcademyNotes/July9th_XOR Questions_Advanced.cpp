Date : 9th July 2022
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
- Rotate Array: https://leetcode.com/problems/rotate-array/ - DONE
- XOR Concept: DONE
- 136. Single Number: DONE
- 268. Missing Number: DONE
- 1720. Decode XORed Array: DONE
- Product of Array Except Self: DONE

TODO:

- Prime Numbers: 
- Primality Test:  
- Seive Of Erastothenes: 
- Count Primes:https://leetcode.com/problems/count-primes/: 
- Sexy Primes: https://www.codechef.com/problems/EXCG1806:

(Sliding Window Algo) 
- Max Consecutive Ones-1: https://leetcode.com/problems/max-consecutive-ones-i/
- Max Consecutive Ones-2: https://leetcode.com/problems/max-consecutive-ones-ii/
 (LC Premium)
- Lintcode: https://www.lintcode.com/problem/883/description
- Max Consecutive Ones-3: https://leetcode.com/problems/max-consecutive-ones-iii/

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".







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


(2) Brute Force:

Two Nested loops

Outer Loop: 0 to N
Inner Loop: All Array

Check if i==arr[j]

TC: O(N^2)
SC: O(1)


(3) Sorting and Check (Linear Search)

- Sort the Array
- Check for nums[i] = i


TC: O(NlogN) + O(N)
SC: O(1)


(4) Sorting and Binary Search

- Sort the Array
- Binary Search for Missing Number


TC: O(NlogN) + O(log N)
SC: O(1)


(5) SUM and Formula:

Sum of [0...N] = Sum of [1...N] = N*(N+1)/2

Missing Number = Total Sum - Array Sum




    // T: O(N), S: O(1)
    
    public int missingNumber(int[] nums) 
    {
        int i=0, n = nums.length;
        int expected_sum = n*(n+1)/2;
        int curr_sum =0;
        // 1 <= n <= 104
        // 0 <= nums[i] <= n (10^4) - Will Pass
        // Range of int; -10^9 to 10^9 

        // 0 <= nums[i] <= 10^7 - WA
        
        for (i=0; i<nums.length; i++) 
            curr_sum += nums[i];
        
        return expected_sum-curr_sum;
    }



Optimised:


    // T: O(N), S: O(1)
    
    public int missingNumber(int[] nums) 
    {
        int i=0, n = nums.length;
        int expected_sum = n*(n+1)/2;
        // 1 <= n <= 104
        // 0 <= nums[i] <= n (10^4) - Will Pass
        // Range of int; -10^9 to 10^9 

        // 0 <= nums[i] <= 10^7 - WA
        
        for (i=0; i<nums.length; i++) 
            expected_sum -= nums[i];
        
        return expected_sum;
    }


Optimisation: Used 1 Variable instead of 2


Solution:
Optimisation: Withing Range of int

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

    // T: O(N), S: O(1)
    
    public int missingNumber(int[] nums) 
    {
        // [9,6,4,2,3,5,7,0,1]
        int i=0, n = nums.length;
        int sum = n; // sum = 9
        
        
        for (i=0; i<nums.length; i++) 
            sum += i - nums[i]; // 0-9 = -9, 1-6 = -5, -2, 1, 1, 0, -1, 7, 7
        // sum  = 0, -5, -7, -6, -5, -4, 1, 8
        
        return sum;
    }





















Q: 1720. Decode XORed Array: DONE
https://leetcode.com/problems/decode-xored-array/

There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.

 

Example 1:

Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]

Example 2:

Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
 

Constraints:

2 <= n <= 104
encoded.length == n - 1
0 <= encoded[i] <= 105
0 <= first <= 105



Understanding:

Orig: [1 2 3 4]
XOR of Adjacent Values = [1^2, 2^3, 3^4] = [val, val, val] - Encoded




Orig Array: N
Encoded Array with XOR of Adjacent Values
Encoded Array Size: N-1

Given: Encoded Array: encoded[]
Find: Original Array: arr[]

encoded[i] = arr[i] ^ arr[i+1]



    public int[] decode(int[] encoded, int first) {
        
    }



Solution:


According to XOR Property:
The Inverse of XOR is also a XOR


If you have:

c = a^b

You have c and b
Need to Find a:

a = c^b = b^c

You have c and a
Need to Find b:

b = c^a = a^c


// "static void main" must be defined in a public class.
public class Main {
    public static void main(String[] args) 
    {
        int a = 10, b = 15, c= 0;
        c = a^b;
        int ans = c^b; // a = c^b
        System.out.println(ans == a);
        
        ans = c^a; // b = c^a
        System.out.println(ans == b);
        
        
    }
}







encoded[i] = arr[i] ^ arr[i+1]

c = a^b
a = c^b = b^c


arr[0] = first
arr[i+1] = encoded[i] ^ arr[i] = arr[i] ^ encoded[i]




CODE:

class Solution {
public:
    
    /*
    
    encoded[i] = arr[i] ^ arr[i+1]
    c = a^b
    a = c^b = b^c


arr[0] = first
arr[i+1] = encoded[i] ^ arr[i] = arr[i] ^ encoded[i]

*/
    // TC: O(N), SC: O(N)
    
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> orig;
        orig.push_back(first); // [1 0 2 1]
        
        int i=0;
        for (i=0; i<encoded.size(); i++)
            orig.push_back(orig[i] ^ encoded[i]); // 1^1 = 0, 0^2 = 2, 2^3 = 1
        
        return orig; // [1 0 2 1]
    }
};

Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]











Q: Product of Array Except Self: 
https://leetcode.com/problems/product-of-array-except-self/

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity? 
(The output array does not count as extra space for space complexity analysis.)







arr = [1 2 3 4]

prod[i] = arr[0] *....arr[n-1]/ arr[i]

prod[0] = 1*2*3*4/arr[0] = 24/1 = 24

Output: [24, 12, 8, 6]






Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

For 0: OP: Product of All Values Except 0



Solution:

n == 1/0
  return 1/Invalid Input



(1) With Using / Operator

prod[n];

int mul = 1;
for (i=0; i<n; i++)
  mul*= arr[i];

for (i=0; i<n; i++)
{
  if (arr[i]!=0)
    prod[i] = mul/arr[i];
  else
    prod[i] = mul;
}


TC: O(N)
SC: O(N)


(2) Without Using / Operator


arr: [0.........i......n-1]

prod[i] = Prod of All values except i



Approach:

- Create Product of left half: Prefix Product [0 to i-1]

- Create Product of right half: Suffix Product [i+1 to n-1]

- ans[i] = prefix[i] * suffix[i]

Two Solutions:

(1) Create left[] and right[]

TC: O(N), S: O(N)

(2) Use Variables left and right


TC: O(N), S: O(1)


CODE:

class Solution {
    
    // T: O(N), S: O(N)
    public int[] productExceptSelf(int[] nums) 
    {
        int n = nums.length;
        int[] res = new int[n];
        int i=0;
        
        // Prefix Product
        int left = 1;
        for (i=0; i<n; i++)
        {
            if (i>0)
               left *= nums[i-1];
            
            res[i] = left;
        }
        
        // Suffix Product
        int right = 1;
        for (i=n-1; i>=0; i--)
        {
            if (i<n-1)
               right *= nums[i+1];
            
            res[i] *= right;
        }
        
        return res;
    }
}


(3) Smart Approach:


Not Allowed: / Operator

Division = Multiplication With Inverse

5/2 = 5*(1/2) = 5 * (Inverse of 2) = 5 * pow(2,-1)

/ = pow(arr[i]*, -1)

pow: O(1)

TC: O(N)
SC: O(N)








