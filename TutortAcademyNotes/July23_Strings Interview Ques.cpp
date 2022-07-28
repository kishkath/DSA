Date : 23rd July 2022
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
- Stacks And Queues


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".








(3) Space Optimisation: Using Array of 26 Size


s = "cat" 
t = "act"

OP: true

CODE:

class Solution {
    // Using Arrays:
    // TC: O(N) + O(26)
    // SC: O(26)
    
    public boolean isAnagram(String s, String t) 
    {
        if (s.length()!=t.length())
            return false;

        if (s==t)
            return true;
        
        int[] arr = new int[26];
        int i=0;
        // arr = [all 0]
        
        // arr[0]: a, arr[1]: b...arr[25]: z
        // s = "cat" t = "act"
        for (i=0; i<s.length(); i++)
        {
            arr[s.charAt(i)-'a']++; // C++/Java : 
            // c-a = 2 -> arr[2]++ = [0,0,1....0]
            // a-a = 0 -> arr[0]++ = [1,0,1....0]
            // t-a = 23 -> arr[23]++ = [1,0,1...,1..0]
            // arr: [a:1, c:1, t:1, rest:0]
            

           // ord(s[i]-'0') / Python
            arr[t.charAt(i)-'a']--;
        }

        // arr = [0,0,c:0........t:0]
        
        // Anagram - All Values : 0 after for loop
        
        for (i=0; i<26; i++)
        {
            if (arr[i]!=0) // arr[i]!=0
                return false;
        }
        
        return true;
    }
}


Follow Up:

Unicode: 256 Size

Array Approach:

int arr[26]: a-z
int arr[256]: Unicode - Ascii characters: 0 to 255

Change arr size to 256


Map Approach:

No Changes Required


Unicode: 0-9, a-z, A-Z, %^&* etc: ASCII - 256







----> Palindrome:

Left to Right, Right to Left: SAME


"katak": L to R
"katak": R to L


12321: Palindrome


boolean isPalindrome(String s)
{

}


Solutions:

(1) Reverse String and Check

string s2 = reverse(s.begin(), s.end()); // In Place Function
return s2 == s;


TC: O(N)
SC: O(1)


(2) Two Pointers:

int left = 0, right = n-1;

while(left<=right)
{
  if (s[left]!=s[right])
    return false;

  left++;
  right--;
}

TC: O(N/2)
SC: O(1)


(3) Travel Till Half and Check


for (i=0; i<n/2; i++)
{
  if (s[i]!=s[n-i-1])
    return false;
}

TC: O(N/2)
SC: O(1)








Q: [LC-387] First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/


Given a string s, find the first non-repeating character in it and return its index. 
If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0


Example 2:

Input: s = "loveleetcode"
Output: 2


Example 3:

Input: s = "aabb"
Output: -1
 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.


  public int firstUniqChar(String s) {
        
    }



String:

DNA Sequence: Millions of Size
A T G C



Solutions:


(1) Brute Force:
Two Nested Loops

Check for First Character repeated, return from there

TC: O(N^2)
SC: O(1)


(2) Map
- char: freq

if (freq == 1)
  return char;


Order is Important:

LinkedHashMap: Java
unordered_map: C++


TC: O(N) + O((Unique(String)))
SC: O((Unique(String)))

(3) Array

freq[26];

Check for freq==1

TC: O(N) + O((Unique(String)))
SC: O((Unique(String)))



CODE:

class Solution {
    public int firstUniqChar(String s) 
    {
        int freq[] = new int[26];
        int i=0;
        
        for (i=0; i<s.length(); i++)
            freq[s.charAt(i)-'a']++;
        
        for (i=0; i<s.length(); i++)
            if (freq[s.charAt(i)-'a']==1)
                return i;
        
        return -1;
    }
}














Q: [LC-3] Longest Substring Without Repeating Characters
https://leetcode.com/problems/longest-substring-without-repeating-characters/




Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.




Solution:

Non Repeating Characters --> Unique Characters: Set/Map

Longest Substring Without Repeating Characters -- Maximum Size of Non Repeating Window

Approach: 

Sliding Window + Set


(1) If Unique Characters (Not present in Set),
Increase Window Size: j++

(2) If Repeating Characters (Present in Set),
Decrease Window Size: i++

Maintain ans = max(j-i+1)


DRY RUN:


"abcabcbb"


i=0, j=0

i=0, j=1
s[i] = a, s[j] = b
Unique Characters: Increase Window: j++

ans = max(j-i+1) = 2


i =0, j=2
s[i]=a, s[j] = c
Unique Characters: Increase Window: j++

ans = max(j-i+1) = 3


i=0, j = 3
s[i] = a,   s[j] = a 
SAME: Decrease Window Size: i++




CODE:
https://leetcode.com/submissions/detail/754276674/

class Solution {
public:
    // TC: O(N)
    // SC: O(K) - K : Size of Max Unique Chars
    
    int lengthOfLongestSubstring(string s) 
    {
        if (s.size()==0)
            return 0;
        
        unordered_set<char> set;
        int i=0, j=0, n = s.size();
        int ans =1;
        
        
        while (i<n && j<n)
        {
            // Unique Value --> Expand Window: j++
            
            // if !set.contains(s[j]): Java
            // if s[j] not in set: Py
            if (set.find(s[j]) == set.end())
            {
                set.insert(s[j]);
                j++;
                ans = max(ans, j-i);
            }
            
            // Repeating Value --> Shrink Window: i++
            else
            {
                set.erase(s[i]);
                i++;
            }
        }
        
        return ans;
        
    }
};



HW:

https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/
https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/

