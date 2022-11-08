#Problem
You have a binary string SS. You can perform the following operation on SS:

Select any substring S_{L.....R}
L…R
​
  (1 \le L \le R \le |S|)(1≤L≤R≤∣S∣) which is sorted in non-decreasing order and remove it from SS. (Both the left and right halves are concatenated after performing the operation)
For e.g. if S = 100011000S=100011000, we can perform the following operation: 100\underline{011}000 \rightarrow 100000100 
011
​
 000→100000

Find the minimum number of operations required so that the final binary string SS is sorted in non-decreasing order.

Note that a substring is formed by deleting some (possibly zero) characters from the beginning and some (possibly zero) characters from the end of the string.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the length of the binary string SS.
The second line of each test case contains a binary string SS of length NN containing 00s and 11s only.
Output Format
For each test case, output the minimum number of operations required so that the final binary string SS is sorted in non-decreasing order.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N \leq 10^51≤N≤10 
5
 
SS contains 00 and 11 only.
The sum of NN over all test cases won't exceed 2 \cdot 10^52⋅10 
5
 .
Sample 1:
Input
Output
3
3
000
5
01110
2
10
0
1
1
Explanation:
Test case 11: The binary string is already sorted, so we need no operations.

Test case 22: We can use one operation to remove the sorted substring S_{2 \dots 4} = 111S 
2…4
​
 =111. Thus, the remaining string 0000 is sorted.

Test case 33: We can use one operation to remove the sorted substring S_{2 \dots 2} = 0S 
2…2
​
 =0. Thus, the remaining string 11 is sorted.
