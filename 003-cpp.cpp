////////////////////////////////////////////////////
//Project Euler Problem #3
//by Abdullah Khalid
//8/10/12
//Update: ????
//
//Find the largest prime factor of a composite number.
//
//The prime factors of 13195 are 5, 7, 13 and 29.
//
//Question: What is the largest prime factor of the number 600851475143 ?
//Answer: ?????
////////////////////////////////////////////////////

#include <iostream>
#include <math.h>
using namespace std;

void main() {
	int count;
	int largest;
	
	long long lNumber = 600851475143;
	long double dNumber = 600851475143;
	long double sqrtdNumber = sqrtl(600851475143);
	long long sqrtlNumber = sqrtdNumber;

	cout << "Please input a number to find its largest prime factor." <<endl;
	cin >> lNumber;

	dNumber = lNumber;
	sqrtdNumber = sqrtl(dNumber);
	sqrtlNumber = sqrtdNumber;

	for (int i = 1; i <= sqrtlNumber; i+=2) {
		if (lNumber % i == 0) {
			cout << i << endl ;
			count = 0;
			for (int primetest = 2; count == 0 && i > primetest ; ++primetest) {
				if (i % primetest == 0) {
					count ++;
				}
			}
			if (count == 0) {
				largest = i;
				cout << "dsafsdf " << i << " fdasfdasf" << endl;
			}
		}       
	}
	cout << "The largest prime factor of " << lNumber << " is " << largest << endl;
	system("PAUSE");
}