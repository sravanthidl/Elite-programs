#program checks if given mail id is valid or not
def valid_list() :
 list = []
 for i in range(65, 91) :
  list.append(chr(i))
 for i in range(97, 123) :
  list.append(chr(i))
 for i in range(0, 10) :
  list.append(str(i))
 return list
def func_username(username) :
 valid = valid_list()
 valid.append('-')
 valid.append('_')
 for i in username :
  if i in valid :
   flag = 0
  else :
   flag = 1
   break
 if flag == 0 :
  return True
 else :
  return False
def func_website(website) :
 valid = valid_list()
 for i in website :
  if i in valid :
   flag = 0
  else :
   flag = 1
   break
 if flag == 0 :
  return True
 else :
  return False
def extension(ext) :
 if len(ext) <= 3 :
  return True
 else :
  return False
def cut(mailid) :
 list = mailid.split('@')
 username = list[0]
 list_ = list[1].split('.')
 website = list_[0]
 ext = list_[1]
 return username, website, ext
def check(n) :
 valid_mail = []
 for i in range(0, n) :
  mailid = raw_input("enter mailid:")
  usr, wbst, ext = cut(mailid)
  if func_username(usr) is True and func_website(wbst) is True and extension(ext) is True :
   valid_mail.append(mailid)
 print(valid_mail)
n = int(input("size:"))
check(n)
