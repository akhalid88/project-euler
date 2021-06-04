////////////////////////////////////////////////////
//Abdullah Khalid
//projecteuler.net 
//Problem #2
//2/23/2012
//
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
//Question: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
//Answer: 4613732
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#define LIMIT 4000000
void main ()
{
	int a = 1;
	int b = 1;
	int tempB;
	int sum = 0;
	
	while(b < LIMIT)
	{
		//checks for even number then adds to sum
		if(b%2 == 0)
		{
			sum += b;
		}
		cout << b << endl;

		//math for calculating the fibonacci sequence
		tempB = a + b;
		a = b;
		b = tempB;
	}
	cout <<endl<<endl;
	cout << "The sum of the even-valued terms within the Fibonacci sequence, not exceeding 4 million is: " << sum <<endl<<endl;
}

//Answer = 4613732