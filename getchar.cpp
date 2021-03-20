
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	int chislo = 0;
	int sistim = 10;
	int step = 0;
    char num;
	do {
		num = getchar();
		cout << "\n\t num = " << num << "     chislo = " << chislo << " \t " << " step = " << step ;
		
		if (num != '\n' && num != '0'){
			chislo += (num - '0') * pow(sistim, step);// cout << num - '0' << " * " << pow(sistim, step) << " = " << chislo;
		step++;
	}
		if (num == '0') step++;

	} while (num != '\n');

	cout << "\n"<< "final "<< chislo;
	

}
