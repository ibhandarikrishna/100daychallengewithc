Topic -- Binary search using recursive method

explanation -
program will ask user for
n = size of array
arr[n] = elements of array
num = Desired element to search in array

And the program will return user --
if the entered array is not sorted then the program will first sort that array and then
the program will return first index of the desired element in case of duplicates.
Input format -  ex-1          |  ex-2
3                             |   0
10 6 8                        |   Enter the valid size
10                            |
Output -                      |
sorted array is -             |
6 8 10                        |
element found at index 2.     |

test case --
1 - if the size of array(n) will be less than 0 then program will return a message "enter a valid size"
2 - if desired element wouldn't be there in the array the program will return "Element not found" 

Constraints -
0<n<10^8 

time complexity - O(log n)
space complexity - O(log n)
