Date : 15th May 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:
- Introduction: DONE
- Data Types :DONE 
- Operators: DONE
- Basics of DSA: DONE
- Loops: DONE
- Questions on Loops and TC: DONE
- Pattern Printing Questions (Language Agnostic): DONE

TODO:
- How to setup leetcode and submit a question: DONE
- Arrays: DONE
- Find max element is an array: DONE
- Find max element and min element in a single pass:  DONE

- Find 2 max elements in a single pass: 
- Reverse an array of chars
- Max column sum in a 2D array

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".




int[] arr = new int[10];

ArrayList<Integer> al = new ArrayList<Integer>();
al.insert(1);

Default: 256

Java 6: 50%: 1.5x
Java 8 : 100%: 2x

Internal Implementation: https://www.javatpoint.com/internal-working-of-arraylist-in-java






Q: Find 2 max elements in a single pass: 


arr = [10,12,20,4]

OP:
first_max = 20
second_max= 12


arr = [10,20,20,4]

OP:
first_max = 20
second_max= 20



void find2Max(int arr[], int n)
{

}

TC, SC



Edge Cases:


(1) arr.size() < 2
- "Invalid Input"

(2) Repeated Values

arr = [10,20,20,4]

OP:
first_max = 20
second_max= 20



Solutions:

(1) Sort the Array


first = arr[n-1];
second = arr[n-2];

Edge Case of Duplicated Values: YES


TC: O(NlogN)
SC: O(1)



(2) Two Traversal:


first max:  
    arr[i]>first
    first = arr[i]


second max:


1 2 4 3

Left to Right

first = 1
second = 0


2>first
first = 2
second = previous first = 1

4>first
first  = 4
second = previous first = 2

3<first and 3>second
first = No Change
second = new value = 3



(3) Single Traversal:

#include<bits/stdc++.h>
using namespace std;
        
void find2Max(int arr[], int n) 
{
    int first = INT_MIN, second = INT_MIN;
    int i=0;
    
    if (n<2)
    {
        cout<<"Invalid IP";
        return;
    }
    
    for (i=0; i<n; i++)
    {
        if (arr[i]>first) // 1 2:second 3: first  4
        {
            second = first;// second = 3
            first = arr[i]; // first = 4
        }
        
        // second < arr[i] <first
        else if (arr[i]>second)
        {
            second = arr[i];            
        } 
    }
    
    cout<<first<<" "<<second<<endl;
    
}

int main() 
{
    int arr[]= {-2,1,10,15};
    int n = sizeof(arr)/sizeof(arr[0]); // Number of Elements in Array
    find2Max(arr,n);
    
    int arr2[]= {-2,1,10,15,15};
    int n2 = sizeof(arr2)/sizeof(arr2[0]); // Number of Elements in Array
    find2Max(arr2,n2);
    
    int arr3[]= {2,13,15,17,9,5,12,8,16,19,18,19};
    int n3 = sizeof(arr3)/sizeof(arr3[0]); // Number of Elements in Array
    find2Max(arr3,n3);
    
    int arr4[]= {4,1};
    int n4 = sizeof(arr4)/sizeof(arr4[0]); // Number of Elements in Array
    find2Max(arr4,n4);

    int arr5[]= {1,1};
    int n5 = sizeof(arr5)/sizeof(arr5[0]); // Number of Elements in Array
    find2Max(arr5,n5);
    
    int arr6[]= {1};
    int n6 = sizeof(arr6)/sizeof(arr6[0]); // Number of Elements in Array
    find2Max(arr6,n6);

    
}


TC: O(N)
SC: O(1)



Note: Why INT_MIN instead of arr[0]

[4,1]

first = arr[0], second = arr[0]

first = 4, second = 4


  - Condition Never Hit
    else if (arr[i]>second)
        {
            second = arr[i];            
        } 




HW: Max 3 Elements in an Array in Single Pass







Q: Reverse and array of chars/int


arr[] = [1,2,3,4,5]
OP: [5,4,3,2,1]

Bonus: In Space: O(1)



void reverse(int arr[], int n)
{

}

Solutions:

(1) Using Inbuilt Functions

C++: reverse(v.begin(), v.end());
Py: A[::-1]
Java: Reverse Arraylist, Not Array

TC: O(N)
SC: O(1)

(2) Create extra Array and move right to left

int b[n];
for (i=n-1; i>=0; i--)
{
  b[n-1-i] = a[i];
}

TC: O(N)
SC: O(N)


(3) Two Pointer/Swap

void reverse(int arr[], int n)
{
  int start =0, end = n-1;
  while (start<=end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--
  }
}

OR

void reverse(int arr[], int n)
{
  for (i=0; i<n/2; i++)
    swap(arr[i], arr[n-1-i]);
}

TC: O(N/2)
SC: O(1)


(4) Using Stack:

Stack: Reverse Order

TC: O(N)
SC: O(N)






Q: Reverse Vowels of a String
LC 345- https://leetcode.com/problems/reverse-vowels-of-a-string/

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.




leetcode

Vowels: eeoe
Reverse: eoee

OP: l e o t c e d e



IP: "abceo"

aeo --> reverse: oea

OP: "obcea"



string reverseVowels(string s) 
{

}



Solution:

(1) Brute Force: Create Extra Array and then replace

Extra Map: Only Vowels and Index

TC: O(N)
SC: O(V)- Number of Vowels


(2) Optimised Solution - Two Pointer/Swap - In Place Solution



- Check for Vowels: a,e,i,o,u, A,E,I,O,U

- Two Pointer

TC: O(N)
SC: O(1)


/*

"leetcode"
"eeoe" ---> "eoee"    REVERSE
"leotcede"

*/

// TC: O(N)
// SC: O(1)

class Solution {
public
    
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c== 'U' );
    }
    
    string reverseVowels(string s) 
    {
    int start=0, end = s.length()-1;
        while (start<end)
        {
            if (!isVowel(s[start]))
            {
                start++;
                continue;
            }
            
            if (!isVowel(s[end]))
            {
                end--;
                continue;
            }
            
            // Vowel - Swap
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
        return s;
    }
};


TC: O(N)
SC: O(1)





Q: Fizzbuzz

LC- 412: https://leetcode.com/problems/fizz-buzz/

Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]
Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
 

Constraints:

1 <= n <= 104



vector<string> fizzBuzz(int n) {
        
    }





 3 ---> Fizz
 5 --> Buzz
 3 and 5 ---> FizzBuzz
 none ---> As it is



N = 5

1: 1
2: 2
3: Fizz
4: 4
5: Buzz




Solution:



 3 ---> Fizz
 5 --> Buzz
 3 and 5 ---> FizzBuzz
 None ---> As it is


if ()

else if()  

else if ()

else





if (i%3==0)
  "Fizz"

else if(i%5==0) 
"Buzz" 

else if (i%15 or 1%3 && i%5 ==0)
  "Fizzbuzz"

else
  return i




Eg: 15 - "Fizz"

Correct OP: "Fizzbuzz"




Correct Solution:

ALWAYS GO FROM LARGEST TO SMALLEST: Pass All Test cases


if (i%15==0)
  "Fizzbuzz"

else if(i%5==0) 
"Buzz" 

else if (i%3 ==0)
  "Fizzbuzz"

else
  return i



Since 3 and 5 are coprime - replace else if codition

[15,5,3] OR [15,3,5]


if (i%15==0)
  "Fizzbuzz"

else if (i%3 ==0)
  "Fizzbuzz"

else if(i%5==0) 
"Buzz" 


else
  return i




Extendable:

Multiple Conditions:

3- Fizz
5 - Buzz
15 - Fizzbuzz
4 - Devang
8 - Sachin
16 - Elon


Follow Up

SDE-1: Without If-else
  2 Answers - Switch, _

SDE-2: Extendable (Design pattern, Quality Code)

SDE-3: Extendable and Dynamic (Conditions Changing at Run Time)
      (Complexity, Design pattern, Quality Code, Lambda Expressions)












      