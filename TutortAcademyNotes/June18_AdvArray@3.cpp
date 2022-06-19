Date : 18th June 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:
- Arrays- DONE
- Binary Search and Time Complexity-DONE
- Questions- DONE
- Prefix Sum - DONE

Questions:
- Two Sum with all approaches and a basic understanding of hashmap: DONE
- Given an array replace every element with a greater element on the right side: DONE
(not including the current element) 
- Given an array replace every element with a greater element on the left side: DONE
(not including the current element) 
- Majority Element:  https://leetcode.com/problems/majority-element: DONE
- [Google] Wiggle Sort: https://www.lintcode.com/problem/508/description - DONE


- Decompress RLE: 
- Kids With the Greatest Number of Candies: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/


TODO:
- Product of Array Except Self
- Intersection of Two Arrays: https://leetcode.com/problems/intersection-of-two-arrays/
- Rotate Array: https://leetcode.com/problems/rotate-array/

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".







Q- LC: Wiggle Sort: 

LC Premium: https://leetcode.com/problems/wiggle-sort/
Lintcode: https://www.lintcode.com/problem/508/description


Given an unsorted array nums, reorder it in-place such that

nums[0] <= nums[1] >= nums[2] <= nums[3]....

Please sort the array in place and do not define additional arrays.

Example
Example 1:

Input: [3, 5, 2, 1, 6, 4]
Output: [1, 6, 2, 5, 3, 4]
Explanation: This question may have multiple answers, and [2, 6, 1, 5, 3, 4] is also ok.

Example 2:

Input: [1, 2, 3, 4]
Output: [1, 4, 2, 3] or [1 3 2 4]


TC: ?
SC: O(1) - Fixed



    nums[0] <= nums[1] >= nums[2] <= nums[3]....

Index     0        1          2           3



Hint: 
Pattern: Number in Odd Index: PEAK






Solutions:


(1) Sorting:


Intuition Behind Sorting:

Pattern After Sorting: <= <= <= <=
Need Pattern: <= >= <= >= <= >=

Odd Index: Higher --> Swapping



- Sort the Array
- Increase Index by 2
- Swap the Values


[_ _ _ _ _ ....Incre]
Odd Index: Higher --> Swapping



Edge Cases:

(1) arr.length == 1
No Wiggle

[1], [2]

(2) arr.length == 2

[2 1] ---> [1 2]

if (arr[0] > arr[1]), swap
else -> No Change


CODE:



Input: [1, 2, 3, 4]
Output: [1, 4, 2, 3] or [1 3 2 4]


    public void wiggleSort(int[] nums) 
    {
/*

Intuition Behind Sorting:

Pattern After Sorting: <= <= <= <=
Need Pattern: <= >= <= >= <= >=

Odd Index: Higher --> Swapping

        // T: O(NlogN) + O(N/2)
        // S: O(1)
*/

        if (nums.length < 2)
            return;

          //[1, 2, 3, 4]
        Arrays.sort(nums);
        int i=1; // Odd Index Swapping

        for (; i<nums.length-1; i+=2) // i = 1, i = 3 - Not Accepted
        {
             // Swap the values:   Odd Index: Higher --> Swapping
             int temp = nums[i];
             nums[i] = nums[i+1];
             nums[i+1] = temp; // [1 3 2 4]
        } 

    }




for (; i<n; i++)


Last Index: n-1
i++: 1 : <n

i+=2: 2: <n-1

i+=3: 3: <n-3




1 6



Why Not start from i = 2?

//[1, 2, 3, 4]
         2

[1 2 4 3]

1 < 2 <4: Not Wiggle




(2) Optimised Solution: Without Sorting

Pattern: Number in Odd Index: PEAK



If Index is Odd: arr[i] >= arr[i-1], else swap
                  ODD  >= EVEN

If Index is Even: arr[i] <= arr[i-1], else swap
                    EVEN <= ODD





CODE:

{
    public void wiggleSort(int[] nums) 
    {
/*

Pattern: Number in Odd Index: PEAK



If Index is Odd: arr[i] >= arr[i-1], else swap
                  ODD  >= EVEN

If Index is Even: arr[i] <= arr[i-1], else swap
                    EVEN <= ODD


        // T: O(N)
        // S: O(1)


        a, b
        a < b --- After Swapping --> a > b
*/

        if (nums.length < 2)
            return;

        for (int i=0; i<nums.length-1; i++)
        {
            // If Index is Even
            if (i %2 == 0)
            {
                if (nums[i] > nums[i+1]) // Even Index Val > Odd Index Value
                {
                    swap(nums, i, i+1);
                }
            }

            else //  // If Index is Odd
            {
                if (nums[i] < nums[i+1]) // Odd Index Val < Even Index Val
                {
                    swap(nums, i, i+1);
                }
            }

        }

        return;
    }


    public void swap(int[] nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}




HW: 

https://www.lintcode.com/problem/509
https://www.lintcode.com/problem/507







Q: Kids With the Greatest Number of Candies: 
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/



There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.


arr[i]: Individiual Candies
x: Extra Candies

arr[i] + x: MAX of Array: TRUE, Else: Return FALSE 


Example 1:

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 

Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.

[5:MAX 3 5 1 3] true

- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.

[2 6:MAX 5 1 3]: true

- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.




Example 2:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
Example 3:

Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]
 

Constraints:

n == candies.length
2 <= n <= 100
1 <= candies[i] <= 100
1 <= extraCandies <= 50




    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        
    }



Solution:

(1) Find Max in Array
(2) For Each Kid, 
arr[i] + extraCandies >= max
  return true

else
  return false


TC: O(N)
SC: O(1)


candies > max: Incorrect
candies >= max: Correct



CODE:

    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) 
    {
        int len = candies.length;
        List<Boolean> ans = new ArrayList<Boolean>(len);
        int max = 0;
        
        for (int candy: candies)
        {
            max = Math.max(candy, max);
        }
        
        for (int candy: candies)
        {
            ans.add(candy + extraCandies >=max);
        }
        
        return ans;
        
    }














Q: [Amazon] Decompress RLE

RLE: Run Length Encoding

char: freq

aabbbc: a2b3c1: ENCODING

a2b3c1: aabbbc: DECODING


YT 

_ _ _ 

22 Min: 30 sec







We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  
For each such pair, there are freq elements with value val concatenated in a sublist.
Concatenate all the sublists from "left to right" to generate the decompressed list.

Return the decompressed list.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [2,4,4,4]
Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4] is [2,4,4,4].


Example 2:

Input: nums = [1,1,2,3]
Output: [1,3,3]
 

Constraints:

2 <= nums.length <= 100
nums.length % 2 == 0
1 <= nums[i] <= 100






Understanding:

nums = [1 2 3 4]

[freq, val]

[1,2]
freq = 1
val = 2

OP: [2]


[3,4]
freq = 3
val = 4

OP: [4 4 4]

Final OP: [2 4 4 4]






Solution:

Even Index: Freq
Odd Index: Val


i=0, i+=2; EVEN
arr[i]: freq
arr[i+1]: val


while (freq--)
{
  ans.push_back(val);
}


Push val -  freq number of times




Next Class:

- TC, SC, 
- CP Tricks, Recursion








