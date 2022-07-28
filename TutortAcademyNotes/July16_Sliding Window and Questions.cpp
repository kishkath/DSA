Date : 16th July 2022
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
- Prime Numbers: DONE
- Primality Test:  DONE
- Seive Of Erastothenes: IMP : DONE
- Count Primes:https://leetcode.com/problems/count-primes/: DONE
- Sexy Primes: https://www.codechef.com/problems/EXCG1806: DONE

TODO:

(Sliding Window Algo) 
- Max Consecutive Ones-1: https://leetcode.com/problems/max-consecutive-ones-i/
- Max Consecutive Ones-2: https://leetcode.com/problems/max-consecutive-ones-ii/
 (LC Premium)
- Lintcode: https://www.lintcode.com/problem/883/description
- Max Consecutive Ones-3: https://leetcode.com/problems/max-consecutive-ones-iii/
- Strings

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".










---> Sliding Window Algo 


Q: [LC-485] Max Consecutive Ones-1 
https://leetcode.com/problems/max-consecutive-ones/



Given a binary array nums, return the maximum number of consecutive 1s in the array.


Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.


Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.




int findMaxConsecutiveOnes(vector<int>& nums) {
        
    }



Same Question:
Find the length of largest subarray of 1 in a binary array


Approach:

A Variable ans to find largest subarray of 1

If arr[i] == 0, reset ans = 0
else ans-> ++ans

Final Ans: Max of All Ans  

Note:
arr[i]==arr[i+1] -> Largest Subarray of consecutive values

Dry Run:

ans = 0

[1,1,0,1,1,1]
 ^
ans = 0->1


[1,1,0,1,1,1]
   ^
ans = 1->2


[1,1,0,1,1,1]
     ^
ans = 0: RESET

[1,1,0,1,1,1]
       ^
ans = 0->1


[1,1,0,1,1,1]
         ^
ans = 1->2


[1,1,0,1,1,1]
           ^
ans = 2->3


Final Ans = max(2,3) = 3



CODE:

class Solution {
public:
    
    /*
    
    Same Question:
Find the length of largest subarray of 1 in a binary array

T: O(N)
S: O(1)

*/
    
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans = 0;
        int res = INT_MIN;
        
        // if arr[i] == 0, reset ans = 0
        // else ans = ans+1
        for (int val: nums)
          res = max(res, ans = val == 0? 0: ans+1);
                
        return res;
    }
};


T: O(N)
S: O(1)














Q: Max Consecutive Ones-2: https://leetcode.com/problems/max-consecutive-ones-ii/
 (LC Premium)
- Lintcode: https://www.lintcode.com/problem/883/description



Given a binary array, find the maximum number of consecutive 1s in this array if you can flip at most one 0.



The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000.


Example 1:
  Input:  nums = [1,0,1,1,0]
  Output:  4
  
  Explanation:
  Flip the first zero will get the the maximum number of consecutive 1s.
  After flipping, the maximum number of consecutive 1s is 4.

Example 2:
  Input: nums = [1,0,1,0,1]
  Output:  3
  
  Explanation:
  Flip each zero will get the the maximum number of consecutive 1s.
  After flipping, the maximum number of consecutive 1s is 3.
  



Same Question:

Maximum Length of Subarray of 1 by flipping at most one zero
number_of_flip <= 1



[1,0,1,1,0]
Condition: Flip at most 1 zero to find maximum number of consecutive ones


[1,0,1,1,0] Curr ans = 2

If I flip 0 at index 4:
[1,0,1,1,1] Curr ans = 3


If I flip 0 at index 1:
[1,1,1,1,0] Curr ans = 4

Final Ans = 4





Q: [LC - 1004] - Max Consecutive Ones III
https://leetcode.com/problems/max-consecutive-ones-iii/

Given a binary array nums and an integer k, 
return the maximum number of consecutive 1s in the array if you can flip at most k 0s.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.


Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.
0 <= k <= nums.length


Variation:

Max Consecutive Ones - 3: Flip At Most K Zeroes 
Max Consecutive Ones - 2: Flip At Most 1 Zeroes (K=1)
Max Consecutive Ones - 1: Flip At Most 0 Zeroes (K=0)


    int longestOnes(vector<int>& nums, int k) {
        
    }




Solution:



Approach:

Sliding Window:

Sliding: Moving in Nature
Window: Range of Values


....i......j.......


- A Window (Range of Values) Moving in Nature
- Range (Size of Window) can be fixed or variable
Fixed Size: K Size Window
- Every Window will ALWAYS be Subarray


Two Pointer: Sorted Values
i..........j


if (key < arr[i])
  i++;

else if (key > arr[i])
  j--


Sliding Windows: Superset
Two Pointer: Subset (Sorted list of values)



Translation:

return the maximum number of consecutive 1s in the array if you can flip at most k 0s.

OR

Find the longest subarray with AT MOST K 0s



Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
OP; [1,1,1,0,0,1,1,1,1,1,1]



0,1,1,1,1,0: Flipped K = 2 Zeroes
1,1,1,1,1,1: Total- OP: 6



0,1,1,1,1,0: Longest Subarray with At most K=2 Zeroes




Find the longest subarray with AT MOST K 0s

At Most K=  0 to K
Window Size = 0 to K

Irrespective of i and j position, arr[i...j] -> Always a Subarray
Sliding Window: ...i....j...


j = 0 to N

For Each A[j], 
Find the longest subarray with at Most K Zeroes

i....j

increment j: Expanding the Window
increment i: Shrinking the Window


(1) if A[i...j] has zeroes < K
continue to increment j

Meaning:

My Count < K, 
EXPAND My Window Size: j++


(2) if A[i...j] has zeroes > K
continue to increment i

Meaning:

My Count > K, 
SHRINK My Window Size: i++




CODE:

class Solution {
    
    /*
    Transaltion: Find the longest subarray with AT MOST K Zeroes
    i, j: Two Ends of Sliding Window
    
    
    
j = 0 to N

For Each A[j], 
Find the longest subarray with at Most K Zeroes

i....j

increment j: Expanding the Window
increment i: Shrinking the Window


(1) if A[i...j] has zeroes < K
continue to increment j

Meaning:

My Count < K, 
EXPAND My Window Size: j++


(2) if A[i...j] has zeroes > K
continue to increment i

Meaning:

My Count > K, 
SHRINK My Window Size: i++

*/
    // T: O(N)
    // S: O(1)
    
            // i,j: Two Ends of Window
          // i=0, j = 0 to N: Increasing
          // j++: Window Increasing
          // i++: Window Decreasing
    public int longestOnes(int[] nums, int k) 
    {
        int i = 0, j;
        for (j=0; j<nums.length; j++)
        {
            // count < k, Increase Window Size
            // Since j is always increasing - you are inside loop of j-> j++
            if (nums[j] == 0)
                k--;
            
            
            // count > k, Decrease Window Size
            // i++: Shrinking the Window
            if (k<0 && nums[i++]==0)
                k++;
        }
        
            // Length of longest subarray with AT MOST K Zeroes
                return j-i;        
    }
}

https://leetcode.com/submissions/detail/748306970/

T: O(N)
S: O(1)



DONE:

Arrays
2D Arrays
Two Pointers
LS, BS
Prefix Sum
XOR and Questions - Bit Manipulation
Array Rotation
Primes and Seive
Sliding Window

TODO:
Strings
Sorting
Stack and Queues
Linked Lists
Sets and Maps
DP
Backtracking
Greedy
Heaps
Trees
Graphs
Trie




Next Class:
Wiggle Sort-2: O(N) Time



HW:
LC Preimum - IMP - https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
https://leetcode.com/problems/longest-repeating-character-replacement/




