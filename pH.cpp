/* A program to calculate the pH of an acid or base, given the concentration of H+ ions or OH- ions. Chemistry is fun! */

#include <iostream>
#include <math.h>
using namespace std;


int main(){

	char solution;
	float concentration = 0;
	float pH = 0;
	float pOH = 0;

	cout << ("\nIf the solution is an acid enter A, if a base enter B: \n");
	cin >> solution;
	if(solution == 'A'){
		cout << ("\nPlease enter the concentration of H+ ions in the acid in moles/litre, using scientific notation (example: 3.5E-6): \n");
		cin >> concentration;
		pH = -10 * log(concentration);
		cout << ("/n the pH of the acid is ", pH);
	}

	if(solution == 'B'){
		cout << ("\nPlease enter the concentration of OH- ions in the base in moles/litre, using scientific notation (example: 3.5E-6): \n");
		cin >> concentration;
		pOH = -10 * log(concentration);
		pH = 14 - pOH;
		cout << ("/n the pH of the base is ", pH);
	}
return 0;
}









