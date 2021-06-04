####################################################
##Abdullah Khalid
##projecteuler.net
##Problem #4
##3/24/21
##
##A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
####Find the largest palindrome made from the product of two 3-digit numbers.
####################################################

# create function isPalindrome
# receives number n
# checks to see if n is a palindrome
# returns n if it is
# returns nothing

# for loop starting at 999 and decrementing down (iterator: a)
#     for loop starting at 999 and decrementing down (iterator: b)
#         multiple a and b and assign to a variable product
#         isPalindrome(product)


def isPalindrome(n):
    rev = ""
    str_num = str(n)
    for i in range(len(str_num), 0, -1):
        rev += str_num[i - 1]
    rev_num = int(rev)
    if n == rev_num:
        return True


largestPal = int(0)
for a in range(999, 500, -1):
    for b in range(999, 500, -1):
        product = a * b
        if isPalindrome(product):
            if largestPal < product:
                largestPal = product
print(largestPal)
