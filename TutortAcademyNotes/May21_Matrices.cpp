Date : 21st May 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Agenda:

- Follow Up of Fizzbuzz without If-Else/Switch: DONE

- Matrix/2D Arrays : 
- Jagged Array
- Sum and Prod of Matrix- Optimised
- Transpose: 
- Max column sum in a 2D array: 
- Max Row sum in a 2D array: 
- Diff in Diagonal


- Transpose
- Search: LS and Binary Search
- Time and Space Complexity
- CP Trick to Pass All Test Cases: Conditional

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".








Follow Up: Without If-Else/Ternary/Switch: SDE-1/2/3


for (i=0; i<n; i++)
  arr[i] = 5;


for (i=0; i<n; i++)
  arr[i] = 10;


OP: 10

Intuition: Last Changes would be Final/Latest.


Idea: Reverse the if-else approach

Go in Increasing approach


if (i%3==0)
  "Fizz"

else if(i%5==0) 
"Buzz" 

else if (i%15 or i%3 && i%5 ==0)
  "Fizzbuzz"

else
  return i





Code:

for (i=1; i<=n; i++)
{
  res[i] = to_string(i);
}


for (i=3; i<=n; i+=3)
{
  res[i] = "Fizz"
}


for (i=5; i<=n; i+=5)
{
  res[i] = "Buzz"
}


for (i=15; i<=n; i+=15)
{
  res[i] = "FizzBuzz"
}


TC: O(N) + O(N/3) + O(N/5) + O(N/15) = O(N)
SC: O(1)



Extension:


- Strategy Design Pattern (Conditions changed at Run Time)
- Bean Class (Java)
- Lambda (Short Way to Write Big Code)- Java8 Streams









----> Matrix/2D Arrays : 

D: Dimension

1-D Array: [1,2,3,4,5]


Line: 1 D (X or Y Axis)
Rectangle: 2 D (X and Y Axis)
Cube: 3 D (X,Y,Z)


2-D Array: Rows + Cols

[....]
[......]
[..........]


[
[1,2,3]
[1,2,3,4]
]

mat = 
{
  {1,2,3},
  {4,5,6},
  {7,8,9}
}

mat : First Row: No Exact Position
mat[row][col]: Exact Position

mat[2][1]: 8


Code:

int arr[n]; // 1 Dimesnion

int mat[row][col]; // 2 Dimension

int mat[row][col][height]; // 3 Dimensions


Initialising 1 D Array:

int arr[3];
arr = {1,2,3};


Initialising 2 D Array:

int arr[3][2];
arr = {
  {1,2},
  {3,4},
  {5,6}
};


Row: Horizontal
Col: Vertical



Square Matrix: row == col

Rectangular Matrix: row!= col


int arr[2];

Compiler: Reserve 8 Bytes of Contiguous Space in RAM ---> arr



Approach:

int mat[][] = {{1,2}};
Any Matrix Would have MINIMUM 1 ROW
If All Cols are of "Same Length" : col size = mat[0].length;


arr = [1,2,3]
arr.length = 3 (Counting - 1,2,3)

mat[][] = {{1,2},{3,4}};
mat.length = 2 (Counting - {1,2},{3,4})


NOTE: "N Dimesion Array = List of N-1 Dimension Arrays"    
    




CODE:

(A) Case- 1 : If All Cols are of "Same Length" 

public class Main {
    
    static void traversal(int mat[][])
    {
        int i=0, j=0;
        int row = mat.length;
        System.out.println("Row Size: " + row);

        int col = mat[0].length;
        System.out.println("Col Size: " + col);
        
        System.out.println(" ");

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
                 System.out.print(mat[i][j] + " ");  
            
            System.out.println(" ");
        }
        
    }
    
    public static void main(String[] args) 
    {
        int mat[][] = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        };
        
        traversal(mat);
    }
}

OP:

Row Size: 3
Col Size: 4
 
1 2 3 4  
5 6 7 8  
9 10 11 12 



TC: O(row*col)
SC: O(1)




(B) Case- 2 : If All Cols are of "DIFFERENT Length"  -- JAGGED ARRAYS


public class Main {
    
    static void traversal(int mat[][])
    {
        int i=0, j=0;
        int row = mat.length;
        System.out.println("Row Size: " + row);
        
        System.out.println(" ");

        for (i=0; i<row; i++)
        {
            for (j=0; j<mat[i].length; j++)
                 System.out.print(mat[i][j] + " ");  
            
            System.out.println(" ");
        }
        
    }
    
    public static void main(String[] args) 
    {
        // JAGGED ARRAY: Matrix with Varying Cols
        int mat[][] = {
            {1,2},
            {5,6,7},
            {9,10,11,12}
        };
        
        traversal(mat);
    }
}


OP:

Row Size: 3
 
1 2  
5 6 7  
9 10 11 12  



TC: O(row*row.length)
SC: O(1)




Q-2: Sum of All Values in a Matrix
Note: Matrix Can be Jagged Array as well


        int mat[][] = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        };


OP: 78   

_ sumofMatrix(int[][] mat)
{

}



Solution:

(1) Return Type: void : FINE
(2) sum: long instead of int
(3) sum = sum + mat[i][j]- Not Optimised
  sum += mat[i][j] - Optimised
(4) Edge Cases:
  if mat is empty -> return 0/empty
(5) Jagged Arrays




Q-3: Hackerrank: Diagonal Difference
https://www.hackerrank.com/challenges/diagonal-difference/problem


Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  


Primary Diagonal: mat[0][0] to mat[N-1][N-1]
Secondary Diagonal: mat[N-1][0] to mat[0][N-1]


Primary Diagonal Sum = 1 + 5 + 9 = 15
Second Diagonal = 3 + 5 + 9 = 17

Abs Diff = abs(15-17) = 2


Brownie Points: TC: O(N)


int diffOfDiag(int[][] mat)
{

}



Solution:

1 2 3
4 5 6
9 8 9  


Primary Diagonal: mat[0][0] to mat[N-1][N-1]

i == j

1 = mat[0][0]
5 = mat[1][1]
9 = mat[2][2]


Secondary Diagonal: mat[N-1][0] to mat[0][N-1]

i + j == n-1

9: mat[2][0]
5: mat[1][1]
3: mat[0][2]

2+0 = 2 = 3-1
1+1 = 2 = 3-1
0+2 = 2 = 3-1


Solution:

(1) Brute Force: O(N^2)

int d1=0, d2=0;

for (i=0; i<n; i++)
{
  for (j=0; j<n; j++)
  {
    if (i==j)
      d1+= mat[i][j];

    if (i+j == n-1)
      d2+= mat[i][j];

  }
}

return abs(d1-d2);


TC: O(N^2)
SC: O(1)



(2) Optimised: O(N)

i + j = n-1
---> j = n-1-i

a + b = c
b = c-a

Note: 
Represent j in terms of i
--> NO NEED for inner loop for j ---> O(N^2) --> O(N)


int d1=0, d2=0;

for (i=0; i<n; i++)
{
  d1 += mat[i][i];
  d2 += mat[i][n-1-i];
}

return abs(d1-d2);

TC: O(N)
Sc: O(1)



Q-4: LC - Max Sum Column in a Matrix

Variations:

Max Sum Row in a Matrix
Min Sum Row in a Matrix
Min Sum Column in a Matrix




Q: LC -1672. Richest Customer Wealth (Max Sum Row in a Matrix)
https://leetcode.com/problems/richest-customer-wealth/

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.

Example 2:

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
Example 3:

Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17
 

Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100




1 <= m, n <= 50
1 <= accounts[i][j] <= 100


Max Sum of Matrix : Each Value will be maximum and Matrix would be largest
        = 50 * 50 * 100
        = 250000: 2.5 Lakh: int
    

OP - Max Sum of Row : Each Value will be maximum and Matrix would be largest
        = 50 * * 100
        = 5000: int






Next: Transpose

















