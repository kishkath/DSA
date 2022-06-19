Date : 28th May 2022
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









Time Complexity of Binary Search:


Mathematical Way:

= O(N/2) + O(N/4) + O(N/8) + O(N/16) +......O(N/2^K-1)


Here, r = 1/2

Sum of GP = a(1-r^n)/(1-r), r<1

TC: O(log (base 2) N)



Theoretical Way:

Master Theorem:

Recurrence Relation:

T(N) = T(N/2) + C


OP: O(log (base 2) N)





O(log N) <  O(N)


N = 1024
1 Iteration = 1 sec

O(N) = 1024 Iterations = 1024 sec = 17 Mins 4 sec

O(log N) = 10 Iterations = 10 sec


Prod:

E-Commerce: Flipkart/Amazon
Search Catalague: uuid







Questions:

(1) Reverse an Array: DONE
- Extra Array
- Two Pointers and Swap
- Travelling Half and Swap a[i],a[n-i-1]
- Stack



Q-2: [Amazon] Leaders in an Array

Leader: There is NO Element greater than it on the WHOLE Right Side of the Array


a = [16 17 4 3 5 2]

OP: [17 5 2]


16: 17 4 3 5 2: NO
17: 4 3 5 2: YES
4: 3 5 2: NO
3: 5 2: NO
5: 2: YES
2: _: YES


30 Sec: Code, TC, SC



Solutions:

(1) Brute Force: Two Nested Loops

for (i=0; i<n; i++)
{
  for (j = i+1; j<n; j++) // Values on Right
  {
    // There is a Value greater than arr[i] on right, NOT A LEADER
    if (arr[i] < arr[j])
      break;
  }

  if (j==n) - YES, Its a Leader
    cout<<arr[i]<<" ";
}


TC: O(N^2)
SC: O(1)




(2) Optimised Solution:


Traverse from Right to Left
max = Right Most Element

Right Most Element ---> ALWAYS A Leader

if (arr[i] > max)
  max = arr[i]
  max ---> Leader


CODE:

int max = arr[n-1];
cout<<max; // ALWAYS A Leader

for (i=n-2; i>=0; i--)
{
  if (arr[i] > max)
  {
    max = arr[i]; // Update max
    cout<<max; // Leader
  }
}

TC: O(N)
SC: O(1)


DRY RUN:

a = [16 17 4 3 5 2]

OP: [17 5 2]


Right to Left


max = 2: YES
a[i] = 5
5 > 2: YES
max = 5
a[i] = 3
a[i] = 4
a[i] = 17
17 > 5: YES
max = 17
a[i] = 16

OP: [2 5 17]





Variations:

- Leader: No Element Greater On Right Side - Right to Left, maintain max
- Leader: No Element Greater On Left Side - Left to Right, maintain max
- Leader: No Element Smaller On Right Side - Right to Left, maintain min
- Leader: No Element Smaller On Left Side - Left to Right, maintain min


Questions for HW:

- Given An Array replace every Element with a greater element on the right side
(Not Including the Current Element)


a = [16 17 4 3 5 2]

OP: [17 -1 5 5 -1 -1]

https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/


- Given An Array replace every Element with a greater element on the left side
(Not Including the Current Element)





TODO:

- Prefix Sum
- PS Questions
- Two Pointers
- TP Questions








Q: Two Sum

Given an Array a[] of size n and a target
Find the pair(s) with sum == target


a = [0,-1,2,-3,1,-1]
target = -2


Pair = ?

OP: [-1,-1], [-3,1]


LC-1: Two Sum

https://leetcode.com/problems/two-sum/

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]






30 sec, 3 Approaches, TC, SC

Solutions:


(1) Brute Force: Two Nested Loops: TC: O(N^2), SC: O(1)

(2) Sorting and Two Pointer: TC: O(NlogN), SC: O(1)

(3) Hashing: Set or Map: TC: O(N), SC: O(N)

(4) Remainder Based Approach: O(N+x)




(1) Brute Force

a + b == target


for (i=0; i<n; i++) // a
{
  for (j=i+1; j<n; j++) // b
  {
    if (arr[i] + arr[j] == target)
    {
      ++count;
    }
  }
}


TC: O(N^2)
SC: O(1)




(2) Sorting and Two Pointer:



Sliding Window: SUPERSET
- Two Variable pointers which can move either directions
- Reason: Sliding Window


......i......j.......

arr[i]....arr[j] : Window

i and j Both are Movable
- Increase the Window Size
- Decrease the Window Size





Two Pointer: SUBSET

- Sorted List of Values

[1 2 3 4 5]
i        j

1st Pointer: Beginning
2nd Pointer: End

Move to Right: INCREASING VALUES
i++


Move to Left: DECREASING VALUES
j--





Sorting and Two Pointer:

- Sort the Array
- Two Pointer

[1 2 3 4 5]
  
target = 6

Pairs: [1,5], [2,4]



[1 2 3 4 5]
l        r

arr[l] + arr[r] = 1+5 = 6: TARGET

l = 1, r = 4
arr[1] + arr[4] = 2 + 5 = 7 > 6: curr_sum > target: DECREASE - Right to Left
r--;
l = 1, r = 3
arr[1] + arr[3] = 2 + 4 = 6


l = 0, r = 3
arr[0] + arr[3] = 1 + 4 = 5 < 6: curr_sum < target: INCREASE - Left to Right
l++;

  


l =0     r =4 



sort(arr,arr+n); // O(NlogN)
int l = 0, r  = n-1;
while (l<r)
{
  if (arr[l] + arr[r] == target)
  {
    ++count;
    l++;
    r--;
  }

  else if (arr[l] + arr[r] < target)
    l++; // curr_sum < target

  else
    r--; // curr_sum > target
}

TC: O(NlogN)
SC: O(1)

O(NogN) + O(N) = O(NlogN)



(3) Hashing: Set or Map

target : 6
In Hand: 1 (a)
Need: 6-1 = 5 (target - a)

In Hand: a
Need: target - a


a + b == target
b = target - a: temp


In Hand: a
Need: target - a: temp



You are trying to insert a in set/map and: // All Values - O(N)

if (temp/b exist in set/map) // Searching in Set/Map - O(1)
  return true
else
  return false


TC: O(N*1) = O(N)
SC: O(N)



CODE:

set<int> s;
for (i=0; i<n; i++)
{
  if (s.find(target-arr[i])!= s.end())
    ++count;

  s.insert(arr[i]);
}

Map: Dupicate values in Array
Set: Unique Value in Array

JAVA:

s.contains(target-arr[i]);


SET:

s.find(val)!= s.end() : VALUE FOUND IN SET



s.find(5)!= s.end(): Value Exist in Set

s.find(10) == s.end(): Value DOES NOT Exist in Set

1- BEGIN
2
3
4
5
____
____
end() - Iterator

Set/Map: RBT











