Date : 24th July 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Questions:
- XOR Concept: DONE
- 136. Single Number: DONE
- 268. Missing Number: DONE
- 1720. Decode XORed Array: DONE
- Product of Array Except Self: DONE
- Prime Numbers: DONE
- Primality Test: DONE 
- Seive Of Erastothenes: DONE
- Count Primes:https://leetcode.com/problems/count-primes/: DONE 
- Sexy Primes: https://www.codechef.com/problems/EXCG1806: DONE
(Sliding Window Algo) 
- Max Consecutive Ones-1: https://leetcode.com/problems/max-consecutive-ones/
- Max Consecutive Ones-2: https://leetcode.com/problems/max-consecutive-ones-ii/
 (LC Premium)
- Lintcode: https://www.lintcode.com/problem/883/description
- Max Consecutive Ones-3: https://leetcode.com/problems/max-consecutive-ones-iii/

- Strings: DONE
- https://leetcode.com/problems/valid-anagram/: DONE
- https://leetcode.com/problems/first-unique-character-in-a-string/: DONE
- https://leetcode.com/problems/longest-substring-without-repeating-characters/ 

TODO:
- https://leetcode.com/problems/longest-palindrome/
- LC- 30: 
- https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
- Stacks And Queues


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".






LC-340: https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/
LC-159: https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/

https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
- https://leetcode.com/problems/longest-palindrome/
- LC- 30: 
- https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/







Java: 

char: 2 Bytes

Java: UTF-16: Unicode
C++, C: UTF-8

16 -> 16 Bits = 2 Bytes: Java char
8 -> 8 Bits = 1 Byte: C,C++ char


UTF-8: Ascii: 256 = 2^8

0-9, a-z, A-Z, Spaces, Symbols

UTF-16: Ascii + Other Symbals




Number of Unique Chars in K Size Windows








Ques - [Google] - LC-159: https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/
https://www.lintcode.com/problem/928

928 · Longest Substring with At Most Two Distinct Characters

Given a string, find the length of the longest substring T that contains at most 2 distinct characters.

Example

Example 1
Input: "eceba"

Output: 3
Explanation:
T is "ece" which its length is 3.


"eceb": 
Set: ecb - 3 Unique chars 

"eceba":
Set: ecba - 4 Unique chars 

Example 2

Input: "aaa"
Output: 3



"ee"-> 1: e
"eeb" -> 2: e, b



At Most, K

while (count <= K)
{
  ...
}

At Least

while (count>=K)
{
  ......
}

Equal

if (count==K)
{
  ....
}



CODE:

public class Solution {
    /**
     * @param s: a string
     * @return: the length of the longest substring T that contains at most 2 distinct characters
     */


/*

Approach:

Sliding Window + Map/Freq Array



(1) Map/Freq Array: Keep Track of count of each char and uniqueCounter <= K
- if Unique: Expand Window Size, uniqueCounter++
- if Repeated: Decrease Window Size, uniqueCounter--

(2) Maintain Window Size using left and right Pointer

TC - O(N)
SC - O(128)

*/     
    public int lengthOfLongestSubstringTwoDistinct(String s) 
    {
        int[] freq = new int[128];
        int left = 0, right = 0;
        int ans = 0, n = s.length();
        int uniqueCharCount = 0;
        int k = 2;

        while (right < n)
        {
               // right++; // Expanding the Window - ALWAYS
               // Post increment freq =0, means CURR freq is 0 - Unique, 
               // Later will update the freq with freq+1
            if (freq[s.charAt(right++)]++ == 0)
            {
                uniqueCharCount++; // Increase the unique count

                while (uniqueCharCount > k)
                {
                    //  left++; // Shrinking the Window
                    // Shrink the window only when there is repeating char and till freq == 0
                    // freq ==0 , No More Repeating char
                    if (--freq[s.charAt(left++)] == 0)
                    {
                        uniqueCharCount--;  // Decrease the unique count
                    }
                }
            }
            ans = Math.max(ans, right-left);
        }
        return ans;
    }
    
}







Ques: [Google, Appdynamics, NetEase, Uber- OA]
LC - 340: https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
https://www.lintcode.com/problem/386/

386 · Longest Substring with At Most K Distinct Characters


Given a string S, find the length of the longest substring T that contains at most k distinct characters.

Example
Example 1:

Input: S = "eceba" and k = 3
Output: 4
Explanation: T = "eceb"

Example 2:

Input: S = "WORLD" and k = 4
Output: 4
Explanation: T = "WORL" or "ORLD"

Challenge
O(n) time


Understanding:

K = 3

"ece": 
Set: ec - 2 Unique chars 

"eceb": 
Set: ecb - 3 Unique chars - Ans, OP: 4

"eceba":
Set: ecba - 4 Unique chars 

Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

Size = 128






    public int lengthOfLongestSubstringKDistinct(String s, int k) {
        // write your code here
    }



Solution:

Approach:

Sliding Window + Map/Freq Array



(1) Map/Freq Array: Keep Track of count of each char and uniqueCounter <= K
- if Unique: Expand Window Size, uniqueCounter++
- if Repeated: Decrease Window Size, uniqueCounter--

(2) Maintain Window Size using left and right Pointer

TC - O(N)
SC - O(128)



CODE:



public class Solution {
    /**
     * @param s: A string
     * @param k: An integer
     * @return: An integer
     */

/*

Approach:

Sliding Window + Map/Freq Array



(1) Map/Freq Array: Keep Track of count of each char and uniqueCounter <= K
- if Unique: Expand Window Size, uniqueCounter++
- if Repeated: Decrease Window Size, uniqueCounter--

(2) Maintain Window Size using left and right Pointer

TC - O(N)
SC - O(128)

*/

Input: S = "eceba" and k = 3
Output: 4
Explanation: T = "eceb"



    public int lengthOfLongestSubstringKDistinct(String s, int k) 
    {
        int[] freq = new int[128];
        int left = 0, right = 0;
        int ans = 0, n = s.length(); // n = 5, S = "eceba" and k = 3
        int uniqueCharCount = 0;

        while (right < n) // 0<5
        // right = 1, freq[e] = 1
        // right = 2, freq[c] = 1 
        // right = 3, freq[e] = 2  
        // right = 4, freq[b] = 1          
        {
               // right++; // Expanding the Window - ALWAYS
               // Post increment freq =0, means CURR freq is 0 - Unique, 
               // Later will update the freq with freq+1
            if (freq[s.charAt(right++)]++ == 0) 
            //freq[e]==0, freq[c]==0, freq[e] == 0, freq[b] == 0
            {
                uniqueCharCount++; // Increase the unique count
                // uniqueCharCount=1, 'e'
                // uniqueCharCount=2, 'c'
                // uniqueCharCount=3, 'b'

                while (uniqueCharCount > k)
                {
                    //  left++; // Shrinking the Window
                    // Shrink the window only when there is repeating char and till freq == 0
                    // freq ==0 , No More Repeating char
                    if (--freq[s.charAt(left++)] == 0)
                    {
                        uniqueCharCount--;  // Decrease the unique count
                    }
                }
            }
            ans = Math.max(ans, right-left); // ans = 1, ans = 2, ans = 3, ans = 4
        }
        return ans; //4
    }
}









STACKS
- Use Case: DONE
- Applications:
- Code:


QUEUES
- Use Case
- Applications:
- Code:


Questions:
- Reverse Array/String
- Balanced Parenthesis: Flaipkart, Amazon, Google
- Variations of Balanced Parenthesis
- NGE
- Area of Histogram/Trapping Rainwater






- What (Use Case/Problem)
- Why (Applications)
- How (Coding/Implementation)



STACKS:


Use Case: Most Recently Used Element in O(1) Time

Most Recently Used Element = Top Most Element

LIFO Order: Last In First Out 
             (Last Inserted, First Deleted) 



Real Life Example:

Packet of Bread, Bangles



OPEN:

___5___: PICK: TOP
___4___
___3___
___2___
___1___


100 Breads below 1


Breads are placed one above another in a Stack Order

First Bread: Top of Packet
5 Breads: 1 to 5

5th Bread on Top - Open the Packet
- Access the 5th Bread First

To Access the Top Most Element (5th Bread)
---> No Iterations

TC: O(1): Constant Time

Not Dependent upon Stack Size


N = 100
N = 10^9








HW:


https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
- https://leetcode.com/problems/longest-palindrome/
- LC- 30: 
- https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

