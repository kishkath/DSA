Date : 10th July 2022
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

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".









-----> Primality Test

To Check if a Number N is PRIME or Not?

Prime: Only 2 Factors: 1 and N

Q: Check if a Number N is Prime or Not?


(1) Check for All Numbers from 1 to N - Count the Number of factors

Prime: Only 2 Factors: 1 and N

Run a Loop from 1 to N:
- if count ==2, PRIME
- else: NOT PRIME


public class Main {
    static boolean isPrime(int N)
    {
        int cnt=0;
        for (int i=1; i<=N; i++)
        {
            if (N%i==0)
                ++cnt;
        }
        
        return (cnt==2);
    }
    
    
    public static void main(String[] args) {
        System.out.println(isPrime(5));
        System.out.println(isPrime(10));
        System.out.println(isPrime(31));
        System.out.println(isPrime(2));
    }
}

T - O(N)
S - O(1)



(2) Check for All Numbers from 2 to N-1 


1,2............,N-1,N: 2 Factors - 1 and N
    
2............N-1: 0 Factors

Run a Loop from 2 to N-1:
- if Anyfactor, NOT PRIME
- else: PRIME




public class Main {
    static boolean isPrime(int N)
    {
        int cnt=0;
        for (int i=2; i<N; i++)
        {
            if (N%i==0)
                return false;
        }
        
        return true;
    }
    
    
    public static void main(String[] args) {
        System.out.println(isPrime(5));
        System.out.println(isPrime(10));
        System.out.println(isPrime(31));
        System.out.println(isPrime(2));
    }
}

T - O(N)
S - O(1)



(3) Check for All Numbers from 2 to N/2 

2 to N-1: Factor

2 to N/2: Factor

Intuition;
If N is NOT A PRIME, 
Its Factor MUST lie between 2 to N/2


N/2 is the BIGGEST Factor of any Number which is NOT Prime
in Range (2...N-1)


Hence, from 2 to N/2: At least 1 Factor MUST Exist


N = 50
Range: 2 to N/2
Factors: 2,5,10,25

N = 10
Range: 2 to 5
Factors: 2,5



i = Loop from 2 to N/2
N%i==0, return false, else true




public class Main {
    static boolean isPrime(int N)
    {
        int cnt=0;
        for (int i=2; i<=N/2; i++)
        {
            if (N%i==0)
                return false;
        }
        
        return true;
    }
    
    
    public static void main(String[] args) {
        System.out.println(isPrime(5));
        System.out.println(isPrime(10));
        System.out.println(isPrime(31));
        System.out.println(isPrime(2));
    }
}



T - O(N/2)
S - O(1)


(4) Check for All Numbers from 2 to sqrt(N)

Euclid Theorem:
- Any Number if it does not have any factor till sqrt(N)
- It wont have any factor after


N = 10
sqrt(10) = 3.1868

2...3: 2 is a factor of 10 and 2 < sqrt(10)
- NOT Prime

N = 50
sqrt(50) = 7.182

2...7: 2,5 are factors of 5 and 2,5 < sqrt(50)
- NOT PRIME


N = 41
sqrt(41) = 6.487

2...6: No fcator of 41 till sqrt(41)
- PRIME



public class Main {
    static boolean isPrime(int N)
    {
        for (int i=2; i*i<=N; i++)
        {
            if (N%i==0)
                return false;
        }
        
        return true;
    }
    
    
    public static void main(String[] args) {
        System.out.println(isPrime(5));
        System.out.println(isPrime(10));
        System.out.println(isPrime(31));
        System.out.println(isPrime(2));
    }
}

T - O(sqrt(N))
S - O(1)





(5) Seive of Eratosthenes


Eratosthenes: Mathematician
Use Case: Find Prime Numbers between Range of Values: [L,R]


- WAP to Print Prime Numbers till N (2 to N)

N = 5
OP: [2 3 5]

N = 11
OP: [2 3 5 7 11]


Approach:
(1) Use Euclid Theorem for Finding Prime in Optimised Time (sqrt(N))
(2) If a Number is Prime, Its Multiple Cannot be PRIME
Multiple of Prime ---> Marked them as false



Code:

void seiveofEratosthenes(int N)
{
  boolean[] prime = new boolean[N+1];

  for (int i=0; i<=N; i++)
    prime[i] = true;

  for (int p=2; p*p<=N; p++)
    // p = 2, p = 3
  {
    if (prime[p] == true) // Marked All values Initially to be true
    {
      for (int i=p*p; i<=N; i+=p)
        // p = 2, i=4; i<=10: i=4, i=6, i=8, i=10
        // p = 3, i=9; i<=10: i=9
        prime[i] = false;
    }
  }


// Printing Prime Numbers from [2,N] -[]: Both Inclusive
// N+1 because of keeping index range, checking for N also
for (int i=2; i<=N; i++)
  if (prime[i] == true)
    System.out.print(i + " ");

}


N = 10
OP: [2 3 5 7]


  for (int p=2; p*p<=10; p++)
---> p =2, p = 3


2: TRUE
3: TRUE
4: FALSE
5: TRUE
6: FALSE
7: TRUE
8: FALSE
9: FALSE
10: FALSE



OP: [2 3 5 7]



Prime factorisation

10 = 2*5

LCM, HCF


CODE:


public class Main {
    
static void seiveofEratosthenes(int N)
{
  boolean[] prime = new boolean[N+1];

  for (int i=0; i<=N; i++)
    prime[i] = true;

  for (int p=2; p*p<=N; p++)
    // p = 2, p = 3
  {
    if (prime[p] == true) // Marked All values Initially to be true
    {
      for (int i=p*p; i<=N; i+=p)
        // p = 2, i=4; i<=10: i=4, i=6, i=8, i=10
        // p = 3, i=9; i<=10: i=9
        prime[i] = false;
    }
  }


// Printing Prime Numbers from [2,N] -[]: Both Inclusive
// N+1 because of keeping index range, checking for N also
for (int i=2; i<=N; i++)
  if (prime[i] == true)
    System.out.print(i + " ");

    System.out.println("");
}

    
    public static void main(String[] args) 
    {
        seiveofEratosthenes(10);
        seiveofEratosthenes(11);
        seiveofEratosthenes(20);

    }
}


OP:


2 3 5 7 
2 3 5 7 11 
2 3 5 7 11 13 17 19 









Q-8: [LC-204] Count Primes
https://leetcode.com/problems/count-primes/


Given an integer n, return the number of prime numbers that are strictly less than n.


Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:

Input: n = 0
Output: 0

Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106





IP: 11
OP: 4

[2 3 5 7]
11 Not Included: Strictly less than N



    public int countPrimes(int n) 
    {
        
    }


Solutions:

(1) O(N^2): From 1 to N, Count Factors == 2 (Strictly less than N)
(2) O(N^2): From 2 to N-1, No Factor
(3) O(N/2): From 2 to N/2: Count Factors
(4) O(sqrt(N)): Euclid Theorem
(5) O(N*log(log N)): seiveofEratosthenes




Q-9: [Microsoft, Amazon-OA] Codechef- Sexy Primes
https://www.codechef.com/problems/EXCG1806


Sexy prime is a prime number n such that n+6 is also prime.

Input: A single integer n
Output: The number of sexy prime factors of the given number n.

Constraints: 
1<=n<=100



Eg:
N = 5: Prime
N+6 = 11: Prime

Hence, 5 is a Sexy prime


N = 3: PRIME
N+6 = 9: No Prime

Hence, 3 is NOT a Sexy prime

N = 7: PRIME
N+6 = 13: Prime

Hence, 7 is a Sexy prime



5-11, 7-13, 11-17, 13-19,  17-23, 23-39 etc

Sexy primes: 5, 7, 11, 13, 17, 23

IP: 10
OP: 2 (5,7)

IP: 20
OP: 5 (5, 7, 11, 13, 17)













static int seiveofEratosthenes(int N)
{
  boolean[] prime = new boolean[N+7];

  for (int i=0; i<=N; i++)
    prime[i] = true;

  for (int p=2; p*p<=N; p++)
    // p = 2, p = 3
  {
    if (prime[p] == true) // Marked All values Initially to be true
    {
      for (int i=p*p; i<=N; i+=p)
        // p = 2, i=4; i<=10: i=4, i=6, i=8, i=10
        // p = 3, i=9; i<=10: i=9
        prime[i] = false;
    }
  }


int numberofSexyPrimes = 0;
for (i=2; i<=N; i++)
{
  if (prime[i] && prime[i+6])
    ++numberofSexyPrimes;
}

return numberofSexyPrimes;
}


TC: O(N*log(log N))


[......
  ...sqrt(N)...
  ......N]






HW:

- Code for Count Numbers
(3) O(N/2): From 2 to N/2: Count Factors
(4) O(sqrt(N)): Euclid Theorem
(5) O(N*log(log N)): seiveofEratosthenes


- Code for Sexy Primes


