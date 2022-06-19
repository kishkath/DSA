Date : 22nd May 2022
Mentor: DEVANG SHARMA
Batch: May Batch (DSA) - Tutort Academy

Topics:

TODO:
- Arrays: 
- Binary Search and Time Complexity: 

- Prefix Sum Array- 
- Questions - 
- Two Pointer- 
- Question- 

- Compilation: DONE
- Execution: DONE
- Compiled Languages and Interpreted Languages: DONE
- What is TC and SC- DONE
- Why O Notation is Required- DONE 
- Order of O Complexity - DONE
- Compare different algos- faster and slowest - DONE
- Total Complexity in multiple functions with different complexities- DONE
- How to Find Complexity from Code? - DONE
- Time and Space Complexity - Real Life Meaning - DONE
- Space Complexity - Auxliary and In memory - DONE

- Stack and Heap Direction Growth: 
- CP Trick to Pass all Test Cases-EXTRA
- Recursion: 



"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".





11th June: Sat: 
12th June:


Transpose of a Matrix:

{
[1 2 3]
[4 5 6]
[7 8 9]
}


Transpose: Rows will becomes Cols and Vice-Versa

1 4 7 
2 5 8
3 6 9


Q: Print Transpose of a Matrix

void transpose(vector<vector<<int>> mat)
{

}

Matrix: M*N

1 2 3 8
4 5 6 10
7 8 9 11




Solution:

(1) Create an Extra Matrix:

int b[col][row];

b[i][j] = a[j][i];

TC: O(row*col)
SC: O(N*M)


(2) Directly print It


mat[m][n] -> transpose: n*m



#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<vector<int>> mat
    {
        {1, 2, 3, 8},    
        {4, 5, 6, 10},
        {7, 8, 9, 11}
    };
    
    int row = mat.size(); // 3
    int col = mat[0].size(); //4
    
    int i=0, j=0;
    cout<<"Transpose: "<<endl;
    for (j=0; j<mat[0].size(); j++) // j=0; j<4
    {
        for (i=0; i<mat.size(); i++) // i=0; i<3
        {
            cout<<mat[i][j]<<" "; // mat[0][0], mat[1][0], mat[2][0]: 1 4 7
        }
        cout<<endl;
    }
    
}






- Arrays: 

- Linear Search
- Binary Search
- Prefix Sum
- Two Pointer




Two Types:

Unsorted Array = [5,2,1,4,3]

Sorted Array = [1, 2, 3, 4, 5]



Case 1 - Unsorted Array:

-----> Search in Unsorted Array: Linear Search/Sequential Search

Return the index of key it it exists in array, 
else return -1


a = [5 2 1 3 4 -6 -2]

key = -6
OP: 5

key = 10
OP: -1



Approach:

Traverse each and every element of the array and 
check if arr[i] == key
If found, return index
If not found in arr, then return -1


IMP: 
Brownie Points(INTERVIEW)

Best Case: O(1), key = arr[0]
Worst Case: O(N), key does not Exist or key == arr[n-1]

SC: O(1)


CODE:

Duplicate Values: First Index

int linearSearch(int[] arr, int key)
{
  for (i=0; i<arr.length; i++)
  {
    if (arr[i] == key)
      return i;
  }

  return -1;
}





Duplicate Values: Last Index

int linearSearch(int[] arr, int key)
{
  int ans = -1;
  for (i=0; i<arr.length; i++)
  {
    if (arr[i] == key)
      ans = i;
  }

  return ans;
}

TC: 
SC: O(1)


HW- LC: Return First and Last Index of an Array



COMMON BUG:

[1 2 3 4 5] 
key = 4, Expected OP: 3
Received OP: -1

int linearSearch(int[] arr, int key)
{
  for (i=0; i<arr.length; i++)
  {
    if (arr[i] == key)
      return i;
    else
      return -1;
  }
}




-----> Insert in Unsorted Array



a = [2 5 1 3 4 7 _ _ _]
Insert 6 at index 1


OP: [2 5 1 3 4 7 _ _]



(1) Shift All Elements after 2 to the right // O(N-x)
[2 _ 5 1 3 4 7 _]

(2) arr[1] = 6 // O(1)

TC: O(N-x)






-----> Replace in Unsorted Array



a = [2 5 1 3 4 7]
Replace 6 at index 1


OP: [2 6 1 3 4 7]

arr[idx] = val;
TC: O(1)




Operations        Time     Space

Search            O(N): W   O(1)
Insert            O(N): W   O(1) 
Replace            O(1)     O(1)
Delete            O(N): W   O(1)






Case 2: Sorted Array


---> Search in Sorted Array

Return the index of key if it exists in array, 
else return -1


a = [1 2 3 4 5]

key = 3
OP: 2

key = 1
OP: 0

key = 20
OP: -1




1 2 3 4 5
l   m   h

3: mid
2: mid-1
4: mid+1

if (key == arr[mid])
  return mid;

else if (key > arr[mid])  // 10 > 3: RIGHT, Focus Area: [4 5]: [mid+1, h]
  low = mid+1;

else      // -2 < 3: LEFT, Focus Area: [1 2]: [low, mid-1]
  high = mid-1;





Approach:

a,b

a == b: key == arr[mid]
a > b: key > arr[mid]
a < b: key < arr[mid]





CODE:

int binarySearch(int[] arr, int key)
{
int low = 0,
int high = arr.length-1;
int mid;

while (low <= high)
{
mid = low + (high-low)/2  // Optimisation

if (key == arr[mid])
  return mid;

else if (key > arr[mid])  // 10 > 3: RIGHT, Focus Area: [4 5]: [mid+1, h]
  low = mid+1;

else      // -2 < 3: LEFT, Focus Area: [1 2]: [low, mid-1]
  high = mid-1;
}

return -1;
}


mid = (low+high)/2 = low/2 + high/2
mid = low + (high-low)/2 = low + high/2 -low/2 = low/2 + high/2


(low+high) --> Can Give Overflow
(high-low) --> No Overflow


long: 8 Bytes
long long: 10 Bytes


Overflow:

int: -2^31 to 2^31-1
    : -2 Bn  to +2 Bn

int a = 1.5 Bn
int b = 1.5 Bn

int c = a+b; // Overflow
print(c) : Negative Value: Garbage Value

Silent Killer: WA



NOTE:
When Taking Sum or Product, Always Think of Overflow

To Avoid Overflow:
(1) Use long or long long
(2) Use Modulo Arithmetic




















