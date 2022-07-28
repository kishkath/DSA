Date : 17th July 2022
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

TODO:

- Strings: DONE
- https://leetcode.com/problems/valid-anagram/: DONE
- https://leetcode.com/problems/first-unique-character-in-a-string/
- https://leetcode.com/problems/longest-substring-without-repeating-characters/ 
- https://leetcode.com/problems/longest-palindrome/
- Stacks And Queues


"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".





Strings:
Array of Characters

char ch = {'d', 'e', 'v', 'a', 'n', 'g'};
String s = new String(ch);


OR


String str = "devang";

OP: "devang"



CODE:


// "static void main" must be defined in a public class.
public class Main {
    public static void main(String[] args) 
    {
        char[] ch = {'d', 'e', 'v', 'a', 'n', 'g'};
        String s = new String(ch);
        System.out.println(s);

        String str = "devang";
        System.out.println(str);
        System.out.println(str.length());
        
        int i=0;
        for (i=0; i<str.length(); i++)
            System.out.print(str.charAt(i) + " ");
        System.out.println();
        
        
        // contains() - true/false - O(1)
        // Tells Whether a character OR SEQUENCE of characters are present or not in a String
        
        System.out.println(str.contains("d"));
        System.out.println(str.contains("q"));
        System.out.println(str.contains("dev")); //devang
        System.out.println(str.contains("dve"));

        // Equals(): Equality of Two Objects based upon value - true/false - O(1)
        System.out.println(str.equals("devang"));
        System.out.println(str == "devang");
        
        // p and q are variables of String type
        String p = "test"; 
        String q = "test";
        System.out.println(p==q);
        System.out.println(p.equals(q)); // Value Comparison
        
        // m and n are OBJECTS of String Class type        
        String m = new String("test");
        String n = new String("test");
        System.out.println(m==n); // Comparing Objects based upon hashcode - false
        System.out.println(m.equals(n)); // Comparing based upon value - true
        
        String name = "devang";
         System.out.println(name);
        name = "sharma";
         System.out.println(name);
  
/*

Strngs are Immutable in Java?
- Immutability based upon reference (hashcode) not on values 
- Multiple values can be assigned to same string, Only the reference would change to newly assigned value (In the String Pool), hashCode(Reference) will NOT CHANGE
    
*/    
    
    // concat(): Concatenation/Append String to Another String - Return a String
        System.out.println(str.concat(" sharma"));
        System.out.println(str + " sharma");
        System.out.println(str);

    // replace(): Replaces All Occurences of the given character or Sequence of Characters/ Subarray in a String - Returns a String 
        System.out.println(str.replace("a", "b"));
        String s2 = "aaaab";
        System.out.println(s2.replace("a", "b"));
        System.out.println(str.replace("dev", "abc"));
        
    //indexOf(): Gives the index of character or Subarray in a String (Substring) - returns int 
    // If does not exits, returns -1
    // In case of multiple occurence of character/Subarray, Only first occurence would be returned    
        
        System.out.println(str.indexOf('d'));
        System.out.println(str.indexOf('q'));
        System.out.println(str.indexOf("ev")); // Give Starting Index
        System.out.println(str.indexOf("dvg"));
        System.out.println(s2.indexOf('a'));
        
    //equalsIgnoreCase(): Equality of Two Strings irrespective of cases - Upper case and Lower case
        
        String str2= "DEVANG";
        System.out.println(str.equals(str2));
        System.out.println(str.equalsIgnoreCase(str2));
        
   // toUpperCase() and toLowerCase()
        
        str2 = "aBcD%^io356253653#q!";
        System.out.println(str2.toLowerCase());
        System.out.println(str2.toUpperCase());
            
        
    }
}


OP:

devang
devang
6
d e v a n g 
true
false
true
false
true
true
true
true
false
true
devang
sharma
devang sharma
devang sharma
devang
devbng
bbbbb
abcang
0
-1
1
-1
0
false
true
abcd%^io356253653#q!
ABCD%^IO356253653#Q!







Q: Check if a String "b" is a Substring of another String "a"?

a = "devang"
b = "dev"

OP: true



a = "devang"
b = "dvg"

OP: false (Its a Subsequence)


boolean checkSubstring(String a, String b)
{

}


Solutions:

(1) Brute Force:
- First Find Common Character
- Two Pointers (First Pointer- First String, Second Pointer - Second String)

TC: O(M+N)


(2) a.contains(b) - true/false


boolean checkSubstring(String a, String b)
{
  a.contains(b);
}

TC: O(1)

(3) Using indexOf()

boolean checkSubstring(String a, String b)
{
  if (a.indexOf(b)!=-1)
    return true;
  else
    return false;
}

TC: O(1)






Q: [LC-242]- Valid Anagram
https://leetcode.com/problems/valid-anagram/

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?




Solutions:


Edge Cases:


if (s.size()!=t.size())
  return false;

if (s==t)
  return true;



(1) Sorting


Anagram: All Characters present with SAME Frequency

Sort Both Strings:
All SAME Charcaters would be Adjacent


- Sort Both Strings
- Compare Two Strings - If Same, Anagram else, no


s = "anagram", t = "nagaram"

After Sorting:
s = "aaagmnr", t = "aaagmnr"


CODE:

class Solution {
public:
    // T: 2*O(NlogN)
    // S: O(1)
    
    bool isAnagram(string s, string t) 
    {
        if (s.size()!=t.size())
            return false;

        if (s==t)
            return true;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;        
    }
};



T: 2*O(NlogN)
S: O(1)




(2) Hashing - Map


Anagram: All Characters present with SAME Frequency



class Solution {
public:
    // T: O(N) + O(26)
    // S: O(26)
    
    bool isAnagram(string s, string t) 
    {
        if (s.size()!=t.size())
            return false;

        if (s==t)
            return true;
        
        unordered_map<int,int> mp;
        for (int i=0; i<s.size(); i++) // O(N)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for (auto it: mp) // O(26)
        {
            if (it.second) // it.second!=0
                return false;
        }
        
        return true;
    }
};


//"aaaaaaaab": 9 values, N = 9
//    mp: a-8, b-1, Size = 2

T: O(N) + O(26)
S: O(26)





HW:
- Array Based Solution for Anagram Question 
- Unicode Values - Variation in Hashmap and Array Approach
- Assigment Ques on Strings and Sliding Window











