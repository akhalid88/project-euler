####################################################
##Muhammad Khalid
##projecteuler.net
##Problem #6
##4/14/21
##
##Question: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
##Answer: 233168
####################################################

sumOfSquares = 0
squareOfSum = 0

for i in range(101):
    squareOfSum += i
    sumOfSquares += (i*i)

squareOfSum = squareOfSum**2
diff = squareOfSum -sumOfSquares

print(diff)