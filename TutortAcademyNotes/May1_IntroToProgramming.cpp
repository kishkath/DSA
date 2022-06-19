Date : 1st May 2022
Mentor: DEVANG SHARMA
Batch: MAY Batch (DSA) - Tutort Academy

Agenda:
- Introduction: DONE
- Data Types :DONE 
- Operators: DONE
- Basics of DSA: DONE

- Loops: 
- Pattern Printing Questions (Language Agnostic): 

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".






Introduction:

"DEVANG SHARMA"

Grab, London
Cisco- Canada, India, London
Google SGP
OYO Gurgaon



Open Source: DONE


CP:
- Topcoder World Finalist: 2021-  TCO 2021
- Codejam, Hacker Cup: World SemiFinalist


Offers:
27 Offers: 25 India, 2 SGP
59 Offers: Today




Batch: 2005-2022
Current Domain: IT



Language Agnostics:

C++, JAVA(MOST), Go, Scala, Swift, Python





---> DSA Basics:



DSA: Data Structures and Algorithms



Practical Example:

Task: 20 Litres of Water
5 Buckets, Capacity: 10L Each


Ways:


1st Way: 
B1- 10L, B2- 10L, Rest Empty: Efficient Use of Resources

2nd Way:
B1- 4L
B2- 4L
B3- 4L
B4- 4L
B5- 4L
Wastage of Resources


Bucket: Storing Water
Ways: Ways to Store Water


Water: Data
Bucket: Data Structures
Ways: Algorithms




Data Structures:
- Containers Used to Store Data to perform operations on it.

Eg: Arrays, Stacks, Queues, Linked Lists, Trees, Graphs, RBT, Tries, Sets,  Maps etc


Algorithms:
- Step by Step Process to Solve the Task Using Appropriate Data Structures

Eg: Dynamic Programming (DP), Recursion, Backtracking, Binary Search, Greedy, Hashing






Variables and Constants:

Variable = Vary + Able
          = Changes Value


Eg:

int a=10;

int: 4 Bytes
Reserve 4 Bytes in Memory (RAM): Name "a"

Assignment,
a = 10 ----> RHS is Assigned to LHS 
10 is assigned to a

a = b: b is assigned to a


CODE:

public class Main {
    public static void main(String[] args) {
        int a = "devang";
        System.out.println(a);
    }
}

error: incompatible types: String cannot be converted to int [in Main.java]
        int a = "devang";
--- RHS to LHS




Constant: Cannot Change the Value

        const int b = 20; : C++, Perl, Go   
        final int b = 20; // JAVA



CODE:

// "static void main" must be defined in a public class.
public class Main {
    public static void main(String[] args) {
        int a = 10;
        System.out.println(a);
        a = 20;
        System.out.println(a);
        
//      const int b = 20; : C++, Perl, Go   
        final int b = 20;
        System.out.println(b);
        b = 40;
        System.out.println(b);

        
        
    }
}






----> DATA TYPES:

Data Type is IDENTITY of Any Variable or Constant


int a; 
--> a will take only integer values


string b
--> b will take only string values



Compiled Time Languages:
Strictly Typed Languages

int a =10;
Data Type of a: int
Value in a : 10

a = "abc"; -- ERROR

Eg: C++, Java, Go, Perl, C# etc


Interpreted Languages:
Loosely Typed Languages


a = "abc"
a = 10 -- No ERROR

Eg: Python, Javascript



Program Flow:

Program.java ---> Compiled (javac) ---> Program.class (Machine Code/Binary) ---> Output

JAVA ----  Machine Code ---> 10101010 ---> OP







-----> Types of Data Types

(1) Primitive/Pre-Defined 


- Number (4 - byte, short, int, long)
- Character (1 - char)
- Boolean (1  - boolean)
- Decimals (2 - float, double)


1 Bit: 0/1 (true-1, false-0)
1 Byte: 8 Bits


ASCII Characters: 1 Byte: 8 Bits = 2^8 = 256 (0 to 255)

char: ASCII

a: 97
z: 97+25

A: 65
Z: 65+25


Java: 

char: ASCII (NO)
char: UTF-16 Encoding: 16 Bits = 2 Bytes

char takes 2 Bytes in JAVA


(1) char: 'a'-'z', 'A'-'Z','0'-'9', symbol- '&', !, *, etc


      2 Bytes (JAVA) 
Size: 1 Byte (All Other Languages)
CODE:
char a = 'b';


(2) boolean: true/false - 1/0 - 1 BIT 
(0: false, 1: true)

(3) byte: 1 Byte (-2^7 to 2^7-1) (-128 to 127)

(4) short: 2 Byte (-2^15 to 2^15-1) (-32568 to 32567)

(5) int: 4 Bytes (-2^31 to 2^31-1) (-2 Bn to 2 Bn)

Constraints:
0 <= n <= 5 * 10^6

byte: -128 to 127
byte n: NO

short: -32568 to 32567
short n: NO

int: -2Bn to +2 Bn (-2*10^9 to 2*10^9)
int n: YES    

(6) long: 8 Bytes (-2^63 to 2^63-1)

(7) float: 4 Bytes (4 Digits Decimal Precision)

(8) double: 8 Bytes (8 Digits Decimal Precision)


Decimal:

float: 223.251234 = 223.2512 (4 Digits Precision)
double: 223.251234 = 223.25123400 (8 Digits Precision)



Formula to Calculate Range of data type:


1 Byte: 8 Bits of Data

_ _ _ _ _ _ _ _

Every Place: 0 or 1

Ways to Fill 1 Place: 2 (0 or 1)


Total Number of Ways to Fill Complete 8 Places: 
= 2*2*...8 = 2^8 = 256

2^8 = 256 = (0 to 255)


1 Bit Differs: +ve and -ve 

5: 101
-5: 001

1 Bit Reserved for Sign
Left Number of Ways: 2^(8-1) = 2^7


Formula:

(1) Calculate Bits from Bytes = N
(2) 1 Bit Reserved for +/- Numbers
(3) Range: -2^(N-1) to 2^(N-1)-1



1 Byte = 8 Bits
N = 8
1 Bit Reserved for +/- Numbers
Range: -2^7 to 2^7-1 = -128 to 127


-128 to -1: 128 Values
0 to 127: 128 Values
Total : 256 Values


Not Storing Negative Values: unsigned
1 Byte = 8 Bits
N = 8
Range: 0 to 2^8-1 = 0 to 255

0 to 255: 256 Values






0 <= a <= 65

__ a : Best Choice:

byte a: Correct: 1 Byte - BEST Choice, No memory wastage
short a: Correct: 2 Bytes
int a: Correct: 4 Bytes
long a: Correct: 8 Bytes

__ a = 909093029309390903920
Best Choice: long

byte a = 150;
OVERFLOW --> Garbage Value: WA (Silent Killer)



<=10^9: int
<=10^15: long
<=10^21: long long
<=10^30: BigInteger
>10^30: String




(2) Non Primitive/ User Defined Data Types

- String
- Array
- Interfaces





---> Operators:

(1) Mathematical Operators


+: Addition
-: Subtraction
*: Multiplication
/: Division
%: Modulus (Remainder)


50%7 = 1 (Remainder)
50/7 = 7 (Quotient)


--- Operator Overloading


One Operator behaves DIFFERENTLY with different data types


Eg: 

+: Operator

int: Add the Number
String: Concatenate the String

5 + 2 = 7
"dev" + "ang" = "devang"  (Concatenation/Append/Merge)


(2) Relational Operators: true/false

<
>
<=
>=
==: Equal To
!= Not Equal To



Note:

In Programming,

= : Assignment
== : Equality
!= : Inequality


In JS,

==: Value Check Only: Soft Check
===: Value and Data Check : Hard Check


a = 10
b = "10"

In JS: 

a == b: true
a === b: false










