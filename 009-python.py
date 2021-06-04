####################################################
##A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
##
##a^2 + b^2 = c^2
##For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.
##
##There exists exactly one Pythagorean triplet for which a + b + c = 1000.
##Find the product abc.
## Answer: 31875000
####################################################


def findPythagTriplet():
    for m in range(1000):
        for n in range(1000):
            if (m > n):
                a = m ** 2 - n ** 2
                b = 2 * m * n
                c = m ** 2 + n ** 2
                if ((a + b + c == 1000) and (a ** 2 + b ** 2 == c ** 2)):
                    print(a * b * c)


findPythagTriplet()