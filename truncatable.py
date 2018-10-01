#this program prints the numbers that are both left and right truncatable
def is_prime(num) :
  c = 0
  for i in range(2, (num // 2) + 1) :
    if num % i == 0 :
      c = c + 1
  if c == 0 and num != 1 :
    return True
  else :
    return False
def count(num) :
  c = 0
  while num != 0 :
    num = num // 10
    c = c + 1
  return c
def right_truncatable(num) :
  c = count(num)
  while c != 0 :
    if is_prime(num % (10 ** c)) :
      flag = 1
    else :
      flag = 0
      break
    c = c - 1
  if flag == 1 :
    return True
  else :
    return False
def left_truncatable(num) :
  c = count(num) - 1
  while c != -1 :
    if(is_prime(num // (10 ** c))) :
      flag = 1
    else :
      flag = 0
      break
    c = c - 1
  if flag == 1 :
    return True
  else :
    return False
def print_() :
  count = 0
  num = 10
  while count != 10 :
    num = num + 1
    if right_truncatable(num) and left_truncatable(num):
      print(num)
      count = count + 1
print_()
