Date : 2nd July 2022
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

TODO:
- Rotate Array: https://leetcode.com/problems/rotate-array/ - 
- XOR Concept: 
- 136. Single Number: 
- 268. Missing Number: 
- 1720. Decode XORed Array
- 1920. Build Array from Permutation
- Product of Array Except Self

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".












Q-8: [LC-349] Intersection of Two Arrays
https://leetcode.com/problems/intersection-of-two-arrays/ 



Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000




Understanding:

nums1 = [1,2,2,1]
nums2 = [2,2]

[2,2] --> [2]: Unique


nums1 = [4,9,5]
nums2 = [9,4,9,8,4]

Common = [4,9,4,9]

Unique: [4,9] or [9,4]


(1) Need Unique Values Only: Set/Map

(2) Intersection Need Not be Contiguous nor in In Order
- Not Subarray, Not Subsequence - Common Subset


Extension: Find Common Subarray/Subsequence between two arrays






    public int[] intersection(int[] nums1, int[] nums2) {
        
    }




Solution:


(1) Approach:

- Sort Both Arrays
- Two Pointers -> Find Common Values -> Put in Set
- Convert Set into Array

Unsorted Array:

nums1 = [1,2,3,4]
nums2 = [4,3,2,1,5]

Check Common Values: O(M*N)


Sorted Array:

nums1 = [1,2,3,4]
        p1

nums2 = [1,2,3,4,5]
        p2


Check Common Values: O(M+N): Two Pointer


Use: Only 1 Set

CODE:

// TC: O(MlogM) + O(NlogN) + O(M) + O(N)
// SC: O(Intersection)

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<Integer>();
        Arrays.sort(nums1); // O (MlogM)
        Arrays.sort(nums2); // O(NlogN)
        
        int i=0, j=0;
        int m = nums1.length;
        int n = nums2.length;
        
        // Two Pointers -> Find Common Values: O(M+N)
        while (i<m && j < n)
        {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else {
                set.add(nums1[i]); // Set: Unique Common Values
                i++;
                j++;
            }
        }
                
        int[] res = new int[set.size()];
        i=0;
        for (Integer num: set)
            res[i++] = num;
        
        return res;
        
    }
}



(2) Approach:

- Sort 1 Array: Smaller Size
- Use Binary Search -> Find Common Values -> Put in Set
- Convert Set into Array


Unsorted Array:

nums1 = [6,3,2,1,5]
nums2 = [4,3,2,1]

Check Common Values: O(M*N)


Sorted 1 Array:

nums1 = [6,3,2,1,5]
        
nums2 = [1,2,3,4]
        

Traverse over nums1 and check if nums1[i] is present in nums2
--> Search in Sorted Array --> Binary Search


Assuming, N < M
M -> Sorted

TC: O(NlogN) + O(M*logN)


CODE:


// TC: O(MlogN) + O(NlogN), N < M
// SC: O(Intersection)

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<Integer>();
        Arrays.sort(nums2); // Sort Smaller One - O(NlogN), Assuming: N<M
        
        int i=0;
        int m = nums1.length;
        int n = nums2.length;
        
        for (Integer num: nums1) // Traverse Bigger One, Find Value Exist in Sorted Smaller One - O(MlogN)
        {
            if (binarySearch(nums2, num))
                set.add(num);
        }
                
        int[] res = new int[set.size()];
        i=0;
        for (Integer num: set)
            res[i++] = num;
        
        return res;
        
    }
    
    
    public boolean binarySearch(int[] nums, int key)
    {
        int l=0, h= nums.length-1;
        
        while(l<=h)
        {
            int m = l + (h-l)/2;
            
            if (nums[m] == key)
                return true;
            
            if (nums[m]>key)
                h = m-1;
            
            else
                l = m+1;
        }
        
        return false;        
    }
    
}



(3) Two Sets:

Approach:

- Create 1 Extra Set to Find Common Values in Both Arrays
- Common Values -> Put in Set
- Convert Set into Array



nums1 = [6,3,2,1,5], M
nums2 = [4,3,2,1], N
OP: [1,2,3]

O(M)
set: [6,3,2,1,5]

answer_set = {}

for (i=0; i<n; i++)
  if set.contains(nums2[i])
    answer.add(nums2[i]) --> Put in answer set





(4) One Set:


Approach:

- Create 1 Set to Find Common Values in Both Arrays
- Common Values -> Put in Set
- Convert Set into Array

nums1 = [6,3,2,1,5], M
nums2 = [4,3,2,1], N
OP: [1,2,3]

O(M)
set: [6,3,2,1,5]

for (i=0; i<n; i++)
  if !set.contains(nums2[i])
    If Not Common -> Delete // Delete: 6,5 -> [1,2,3]
  else
    continue;









CODE:

// TC: O(M) + O(N) 
// SC: O(Intersection) - Array

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<Integer>();
        Set<Integer> answer = new HashSet<Integer>();
        
        int i=0;
        int m = nums1.length;
        int n = nums2.length;
        
        // Put All values of nums1 in set
        for (i=0; i<m; i++) 
            set.add(nums1[i]);
        
        // Find Common Values in Second Array
        for (i=0; i<n; i++)
            if (set.contains(nums2[i])) // O(1)
                answer.add(nums2[i]);
                
        int[] res = new int[answer.size()];
        i=0;
        for (Integer num: answer)
            res[i++] = num;
        
        return res;    
    }
    
}


Lambda Version:

// TC: O(M) + O(N)
// SC: O(Intersection)

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
    
        Set<Integer> set = Arrays.stream(nums2).boxed().collect(Collectors.toSet());

        return Arrays.stream(nums1).distinct().filter(e-> set.contains(e)).toArray();
    }
}
















Q-9: [LC-] Rotate Array
https://leetcode.com/problems/rotate-array/


Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?







Solution:


nums = [1,2,3,4,5,6,7]

K = 0
OP: [1,2,3,4,5,6,7] - Same

K = N or Multiple of N   --> N%K == 0
OP: [1,2,3,4,5,6,7] - Same


K > N
OP: K%N Time Rotate

K < N
OP: K%N = K Time Rotate

N = 3
K = 10
OP: 10%3 = 1 Rotation


    public void rotate(int[] nums, int k) {
        
    }



Solution:


(1) With Extra Space

res[n];

arr[(i+k)%n] = res[i]; // RIGHT SHIFT

arr[(i-k)%n] = res[i]; // LEFT SHIFT


TC: O(N)
SC: O(N)


// TC: O(N)
// SC: O(N)

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> res(n);
        
        if (n==0 || (k<=0))
            return;
        
        int i=0;
        for (i=0; i<n; i++)
        {
            res[i] = nums[i];
        }
        
        // Right Shift
        for (i=0; i<n; i++)
        {
            nums[(i+k)%n] = res[i];
            // i ---> i+k: RIGHT SHIFT
            // i ---> i-k: LEFT SHIFT
        }
    }
};



DRY RUN:

nums = [1,2,3,4,5,6,7], K = 1

res = [7,1,2,3,4,5,6]


i = 0
nums[(0+1)%7] = res[0]
nums[1] = res[0]
nums[1] = 1 --> RIGHT SHIFT


4 Variations:

(1) Right Shift, k > 0
(2) Right Shift, k < 0
(3) Left Shift, k > 0
(4) Left Shift, k < 0



(2) Without Extra Space





HW:

- Merge Sorted Array
- Merge Sorted Linked List


