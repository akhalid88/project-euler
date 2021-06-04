####################################################
##Abdullah Khalid
##projecteuler.net
##Problem #3
##3/23/21
##
##The prime factors of 13195 are 5, 7, 13 and 29.
##What is the largest prime factor of the number 600851475143 ?
####################################################
from math import sqrt

count = 0
largestP = 0
factor = 0
number = 600851475143
# number = 13195
sqrtNum = sqrt(number)
# primetest = 2
# odd = 3
i = 1

while i < sqrtNum
    
    if number % i == 0:  # factor of number
        factor = i
        print("Factor: ", factor)
        for x in range(2, factor):
            if not (largestP % x == 0):
                largestP = factor
                print(largestP, "is a Prime Number")
                # print(largestP, "is not a prime number")
            else:
                largestP = 0
                # print("No")
    i += 2

# print(sqrtNum)
