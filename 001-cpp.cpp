////////////////////////////////////////////////////
//Abdullah Khalid
//projecteuler.net 
//Problem #1
//2/23/2012
//6/28/2012 Update: added #defines
//
//Add all the natural numbers below one thousand that are multiples of 3 or 5.
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
//The sum of these multiples is 23.
//
//Question: Find the sum of all the multiples of 3 or 5 below 1000.
//Answer: 233168
////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#define RANGE 1000
#define MULT_ONE 3
#define MULT_TWO 5

void main()
{
	int sum = 0;
	
	for(int i = 0; i < RANGE; i++) 
	{
		if (i%MULT_ONE == 0 || i%MULT_TWO == 0)
		{
			sum += i;
			cout << i << endl;
		}
	}
	cout << "The sum of all the multiples of 2 or 5 below 1000 is: " << sum <<endl;
}