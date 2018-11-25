'''
You are given 'n' words. Some words may repeat. For each word, output its number of occurrences. The output order should correspond with the input order of appearance of the word.
'''

test = int(input("Enter no.of strings:"))
print("Enter strings:")
string_list = []
for i in range(0, test) :
 string_list. append(input(""))
s = set(string_list)
print("no.of distinct strings :",len(s))
s = list(s)
for i in range(0, len(s)) :
 print("frequency of each distinct string:", string_list. count(s[i]))
