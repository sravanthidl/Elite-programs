#this program prints amicable numbers upto a given limit
def sum_of_proper_divisors(n) :
  summ = 0
  for i in range(1, (n // 2) + 1) :
    if n % i == 0 :
      summ = summ + i
  return summ
def amicable(n) :
  for num_1 in range(1, n + 1) :
    num_2 = sum_of_proper_divisors(num_1)
    if num_2 != num_1 :
      if sum_of_proper_divisors(num_2) == num_1 :
       print (num_1)
amicable(5000)

