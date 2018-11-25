'''
Consider the following:
- A string 's' of length 'n' and an integer 'k' that is a factor of 'n'.
- We can split 's' into n/k subsegments where each subsegment 't(i)' consists of a contiguous block of 'k' characters in 's'.
Then,use each  to create string  such that:
 - The characters in u(i) are a subsequence of the characters in t(i).
 - Any repeat occurrence of a character is removed from the string such that each character in u(i) occurs exactly once. In other words, if the character at some index 'j' in t(i) occurs at a previous index <j in t(i), then do not include the character in string u(i).
Given 's' and 'k' print n/k lines where each line 'i' denotes string u(i).
'''

s = input("Enter a string:")
k = int(input("Enter k value:"))
str_list = []
set_list = []
for i in range(0, len(s), k) :
 str_list. append(s[i : (i + k)])
for i in str_list :
 set_list. append((set(i)))
res = []
for i in set_list :
 st = ""
 for j in i :
  st = st + j
 res.append(st)
for i in res :
 print(i)
