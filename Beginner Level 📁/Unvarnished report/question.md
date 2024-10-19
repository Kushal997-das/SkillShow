<!-- Purpose -->
A company has a culture of reporting things as they are, whether good or bad. So we want to check whether the reported content is exactly the same as the original text.

<!-- Question -->
You are given two strings S and T, consisting of lowercase English letters.

If S and T are equal, print 0; otherwise, print the position of the first character where they differ. Here, if the i-th character exists in only one of S and T', consider that the i-th characters are different.

More precisely, if S and T' are not equal, print the smallest integer i satisfying one of the following conditions:

• 1≤ i ≤ len(S) ,1≤ i ≤ len(T) , len(S) != len(T) 
• len(S)< i < len(T). 
• len(T) < i ≤ len(S)

<!-- Constraints -->

S and T are strings of length between 1 and 100, inclusive, consisting of lowercase English letters.

<!-- Sample Input 1 -->

abcde
abedc

<!-- Sample Output 1 -->

3


<!-- Sample Input 2 -->

abcde
abcdefg

<!-- Sample Output 2 -->

6

<!-- Sample Input 3 -->

keyence
keyence

<!-- Sample Output 3 -->

0
