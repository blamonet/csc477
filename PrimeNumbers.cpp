// Aaron Grant
// CSC 477
// Project 1
// Prime Number Generator from 1 to N (N is picked by the user)

#include <iostream.h>
#include <stdlib.h>

void primefinder (int n, int &ct);
int errorcheck (int n);


void main () {
	int primenum=0,ct=0;

	cout << "\n\nPlease insert a number, which is less than 100,000\n";
    cin >> primenum;
	
	
	if (errorcheck(primenum) == 1) {
		cout << "You put in incorrect data,\n\n";
		exit(0
			);
	}
	

	cout << "\n\n****************************************************\n\n";
	cout << "Finding Prime Numbers from 1 to " << primenum;
	cout << "\n\n****************************************************\n\n";
	for (int j = 1; j<=primenum; j++)
    primefinder(j, ct);
	
	cout << "\n\n****************************************************\n\n";
	cout << "From 1 to " << primenum <<  ", " << ct << " primes were found.\n\n";
}

void primefinder (int n, int &ct) {
	int flag = 0;
	for (int i=2; i<((n/2)+1); i++) {
		if (n%i==0)   {
			flag = 1;
			break;
		}
    }
	if (flag == 0) {
		cout << n << " ";
	    ct++;
	}
}

int errorcheck (int n) {
	if (n > 100000)
		return 1;
	if (n < 1)
		return 1;
	else
		return 0;
}