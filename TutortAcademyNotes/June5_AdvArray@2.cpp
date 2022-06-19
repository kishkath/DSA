Date : 5th June 2022
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
- Majority Element:  https://leetcode.com/problems/majority-element: 


- Wiggle Sort: https://www.lintcode.com/problem/508/description
- Decompress RLE: 
- Kids With the Greatest Number of Candies: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

TODO:
- Product of Array Except Self
- Intersection of Two Arrays: https://leetcode.com/problems/intersection-of-two-arrays/
- Rotate Array: https://leetcode.com/problems/rotate-array/

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".







Solution:

(1) Brute Force: Check freq > N/2: TC: O(N^2)
(2) Map: freq > N/2: TC: O(N)
(3) Sort and check the value at arr[n/2]: O(NlogN)
(4) Partial Sorting
(5) Bayer Moore Algo



(1) Brute Force:


int freq=0;

for (i=0; i<n; i++)
{
  freq=0;
  for (j=i; j<n; j++)
  {
    if(arr[i] == arr[j])
      ++freq;
  }

  if (freq > n/2)
    return arr[i];
}



if freq = 0, j = i;
if freq = 1, j = i+1;


TC: O(N^2)
SC: O(1)



(2) Map


Element: Frequency
Frequency > N/2, Ans = Element


TC: O(N)
SC: O(N)




CODE:


class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // Approach -1: Using Map
        // TC: O(N), SC: O(N)

unordered_map<int, int> counter;

        /*
for (int num: nums)
{
  counter[arr[i]]++;
}


for (auto it: map)
  if (it.second > n/2)
    return it.first;


OR
*/

for (int num: nums)
{
  if (++counter[num] > nums.size()/2)
    return num;
}


  return 0;
  
        
    }
};




[1 2 3 4 5 2]

map<int,int>: 
map[1]: 0
map[1]++: map[1] = 1

for()
  map[arr[i]]++;

1: 0->1
2: 0->1->2
3: 0->1
4: 0->1
5: 0->1




  
  Map<Integer,Integer> map = new HashMap<>();
        for(int num:nums)
        {
            if(map.containsKey(num))
            {
                map.put(num,map.get(num)+1);
            }
            else
            {
                map.put(num,1);
            }

            if(map.get(num)>nums.length/2)
                return num;
        }




"a...z"

int arr[26]: 

a: 10
b: 20
c: 30
d: 40

SC: O(26)

map: 
a: 10
b: 20

Size = 26

SC: O(26)



"aaaaaaaaaaaaa": Size = 15
SC: O(N): O(15) = 15 Size

Map:
"a": 15

Size = 1

SC: O(1)


arr[idx] = val; // O(1) -> All Cases

map.get() // O(1) - Not All Cases, O(log N) - Worst Case (BST)




(3) Sorting:


nums = [2 2 1 1 1 2 2]
OP: 2


After Sorting: 
nums = [1 1 1 2 2 2 2]


Trick:
After Sorting, at Index N/2: Majority Element

Valid: Freq of Majority Element > N/2




    int majorityElement(vector<int>& nums) 
    {
        // Approach -2: Using Sorting
        // TC: O(N*logN), SC: O(1)
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];        
    }



6/2 = 3
arr[3] = 5


(4) Partial Sorting:

nums = [2 2 1 1 1 2 2]
OP: 2


After Complete Sorting: 
nums = [1 1 1 2 2 2 2]


Trick:

After Complete/Partial Sorting, at Index N/2: Majority Element

Valid: Freq of Majority Element > N/2




sort(nums.begin(), nums.end()) --> Complete Array Sorted

sort(nums.begin(), nums.begin() + nums.size()/2);  --> Half Array Sorted

At Index N/2: Majority Element


    int majorityElement(vector<int>& nums) 
    {
        // Approach -3: Using Partial Sorting
        // TC: O(N/2 * log(N/2)) , SC: O(1)
        
        sort(nums.begin(), nums.begin() + nums.size()/2);
        return nums[nums.size()/2];        
    }

TC: O(N/2 *log(N/2)) 
SC: O(1)


nums = [2 2 1 1 1 2 2]
OP: 2

Partial Sorting:

[1 1 2 2 1 2 2]







(5) Optimised - Bayer Moore Algo
https://www.cs.utexas.edu/~moore/best-ideas/mjrty/

T: O(N), SC: O(1)


As we sweep we maintain a pair consisting of a current candidate and a counter. Initially, the current candidate is unknown and the counter is 0.

When we move the pointer forward over an element e:

If the counter is 0, we set the current candidate to e and we set the counter to 1.
If the counter is not 0, we increment or decrement the counter according to whether e is the current candidate.
When we are done, the current candidate is the majority element, if there is a majority.






Trick:

Leslie Lamport

(1) if count == 0
  count++

Two Cases:
(A) Same Element -> ++count;
(B) Diff Element -> count--;

return major;




IP: [3,2,3]
OP: 2


IP: [3 2 2 2 3 1]
OP: Invalid

IP: [2 2 2 2 3 1]
OP: 2


class Solution {
    public int majorityElement(int[] nums) 
    {
        // Bayer-Moore Algo
        // TC: O(N), SC: O(1)
        
        int major = nums[0], count = 1; // major = 2, count = 1
        
        for (int i=1; i<nums.length; i++) // [2 2 2 3 1]
        {
            // New Element -> Increase frequency from 0->1
            if (count == 0)
            {
                ++count; // count = 1
                major = nums[i]; // major  = 2
                
            }
            
            // Same Element -> Increase Frequency by 1
            else if (nums[i] == major)
                ++count; // count = 4
            
            // Diff Element --> Decrease Frequency by 1
            else
                --count; // count = 2
            
        }
        
        return major;   //2   
        
    }
}


Algos:

(1) Bayer Moore
(2) Pigeonhole
(3) Morris Traversal
(4) Bit Manipulation
(5) Randomisation
(6) Divide and Conquer












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








