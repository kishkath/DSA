Date : 19th June 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Topics:
- Arrays: DONE
- Binary Search and Time Complexity: DONE
- Prefix Sum Array- DONE
- Questions - DONE
- Two Pointer- DONE
- Question- DONE

TODO:
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
- CP Trick to Pass all Test Cases-EXTRA
- Recursion: 


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".








Q: LC- 53: Maximum Subarray
https://leetcode.com/problems/maximum-subarray/description/



Given an integer array nums, find the contiguous subarray 
(containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:

Input: nums = [1]
Output: 1

Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.




Approach:

[]: Sum = 0

Solutions:

(1) Brute force
(2) Kadane
(3) Divide and Conquer - Prefix And Suffix
(4) prefixsum and difference


Brute Force:

Find Sum of All subarrays, then find max
All Subarrays - Two Nested Loops

TC: O(N^2)


Optimised - Kadane




Input: nums = [5,4,-1,7,8]
Output: 23


prefixsum = [5 9 8 15 23]



Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6

prefixsum = [-2 -1 -4 0 -1 1 2 -4 0]
              0 1  2  3  4 5 6 7 8

Max Suabarray: 2-(-4) = 6



----> Kadane Algo

- Sliding Window


(1) Start Traversing your array
(2) For Each Element -> 
Keep: currSum and prevSum
(3) Find Max of All sum

Edge case:
sum < 0
Reset sum = 0



CODE:

[-2,-1,-3]

Ans = [-1]


    public int maxSubArray(int[] nums) 
    {
        int n = nums.length;
        int maxSum = Integer.MIN_VALUE; // -2^31
        int currSum = 0;
        
        int i=0;
        for (i=0; i<n; i++)
        {
            currSum += nums[i]; // currSum = -2, currSum = -1, currSum = -3
            maxSum = Math.max(currSum, maxSum); // maxSum =-2, maxSum = -1
            
            if (currSum < 0)
                currSum = 0;
        }
        
        return maxSum; // -1
    }


CPP: INT_MIN: -2^31


Empty Subarray Allowed

    public int maxSubArray(int[] nums) 
    {
        int n = nums.length;
        int maxSum = 0;
        int currSum = 0;
        
        int i=0;
        for (i=0; i<n; i++)
        {
            currSum += nums[i];
            maxSum = Math.max(currSum, maxSum);
            
            if (currSum < 0)
                currSum = 0;
        }
        
        return maxSum;
    }


Your input
[-2,-1,-3]

Output
-1

Expected
-1




[-2,-1,-3]

Subarrays:
[]: 0
[-2]: -2
[-2 -1]: -3
[-2 -1 -3]: -6
[-1]: -1
[-3]: -3
[-1 -3]: -4

Max Sum = 0

(containing at least one number), Max = -1







Q: LC-152: Maximum Product Subarray
https://leetcode.com/problems/maximum-product-subarray/


Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.




Input: nums = [2,3,-2,4]
Output: 6



Subarrays:

[2]: 2
[2 3]: 6 
[2 3 -2]: -12
[2 3 -2 4]: -48


Max product = 6





Solution:




[....i......j......]

Subarray with Max Sum = [i....j]

Product of arr[i....j] = max (prefix, suffix)

Edge case:
If 0 is present, Reset Prod -> 1


Approach:
(1) Find prefix prod, handle 0 case
(2) Find suffix prod, handle 0 case
(3) Find max(pref, suff)


CODE:

    public int maxProduct(int[] A) 
    {
        int len = A.length;
        int prod = 1;
        int max = Integer.MIN_VALUE;
        int i=0;
        
        // Prefix Product
        // prefix_prod = prefix_prod * A[i] = Multiply form Beginning
        
        for (i=0; i<len; i++)
        {
            //int val = prod*=A[i];
            max = Math.max(prod*=A[i], max);
            //System.out.println(val);
            
            // Edge Case for 0 in Subarray 
            // [-3, 0, 1, -2]
            // If prod, not set to 1:
            // prefix_prod = [-3,0,0,0] - Need Special Handling
            // Need: [-3 0 1 -2]
            
            if (A[i] == 0)
                prod = 1;
        }
        
        prod = 1;
        
        // Suffix Product
        // suffix_prod = suffix_prod * A[n-i-1] = Multiply form End
        
        for (i = len-1; i>=0; i--)
        {
            max = Math.max(prod*=A[i], max);
            
            // Edge Case for 0 in Subarray
            if (A[i] == 0)
                prod = 1;            
        }
        
        return max;
        
    }







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
- CP Trick to Pass all Test Cases-EXTRA
- Recursion: 

----> Time and Space Complexity



High Level Languages:
Java, C, C++, Go, Perl, Python

Converter: 
Compilation: Source Code ---> Machine Code

Machine: 0/1

Compilation + Execution --> Online IDE

Compilation:

javac Main.java
(Java Compile)


Main.java -----> Main.class (Byte Code)

Main.class ---> Execute

java Main
(Java Run)


System.out.pritln("Dev");
OP: Dev


Run Without Compile
System.out.pritln("Shar,a");
OP: Dev

Run With Compile:
OP: Sharma


What Happens During Compilation?
(Source Code ---> Machine Code)


- Check for Syntax Error (({;...}))
- Check for Compile Time Errors
(Calling an undefined function, variable, scope)
- Allocate memory to Static Data Structures (Arrays etc)
- Check for Memory Errors: MLE
- Check for Div by 0 Error



int arr[100]; //400 Bytes -> RAM: Compilation


int a = 10/0; 
OP: Arithmetic Exception


After Compilation:

(1) Success: Machine Code will be Generated
(2) Error: No Machine Code will be Generated



Notepad --> Java Code ---> javac Main.java ----> Main.class ----> java Main
----> OP



Execution:
Takes the Machine Code and Executes it


Flow:

Source Code ----> Compilation ---> Machine Code ----> Execution ----> OP


- Compiled Time Languages (C++, C, Go, Java, C# etc)







