'''
A newly opened multinational brand has decided to base their company logo on the three most common characters in the company name. They are now trying out various combinations of company names and logos based on this condition. Given a string , which is the company name in lowercase letters, your task is to find the top three most common characters in the string.
Print the three most common characters along with their occurrence count.
'''

def get_biggest(l) :
 no_list = []
 big_no_list = []
 for i in range(0, len(l)) :
  no_list.append(l[i][1])
 for i in range(0, 3):
  big_no_list.append(max(no_list))
  no_list.remove(max(no_list))
 for i in range(0, len(l)) :
  if(l[i][1] in big_no_list):
   print(l[i])
l = []
li = []
count = 0
s = input("Enter the name:")
for i in s :
 l.append([i, s.count(i)])
for i in range(0, len(l)):
 for j in range(i + 1, len(l)) :
  if(l[i][0] == l[j][0]) :
   count = count + 1
 if (count == 0) :
  li.append(l[i])
 count = 0
get_biggest(li)
