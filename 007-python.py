####################################################
##By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
##What is the 10 001st prime number?
##Answer: 
####################################################
import math
n = 10001

def isPrime(list, k):
    for p in list:
        if p < math.sqrt(k)+1:
            if k % p == 0:
                return False
    return True

def findPrimeNumber(n):
    prime_list = [2]
    i = 3
    while len(prime_list) < n:
        if(isPrime(prime_list, i)):
            prime_list.append(i)
        i += 2
    return prime_list

print(findPrimeNumber(10001))