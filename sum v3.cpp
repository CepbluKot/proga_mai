#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
	string a ;
	string chars;
	int count = 0, sum = 0;
	cin >> a ;
	count = a.size();
	
	int count_chars = 0;
	
	while(count_chars != a.size()){
		if(isdigit(a[count_chars])){

			sum += a[count_chars] - '0';
		}
		
		count_chars++;
		
	}
	count_chars = 0;
	while(count_chars != a.size()){
		if(isalpha(a[count_chars])){
			chars +=  a[count_chars];
		}
	count_chars++;
	}
	
	
	cout<< " count: " << count << " sum: " << sum << "\n chars: "<< chars;
	
	return 0;
}
