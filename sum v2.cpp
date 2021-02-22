#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
	string a ;
	int count = 0, sum = 0;
	
	cin >> a ;
	
	int count_chars = 0;
	
	while(count_chars != a.size()){
		if(isdigit(a[count_chars])){
			count++;
			sum += a[count_chars] - '0';
		}
		
		count_chars++;
		
	}
	
	cout<< " count: " << count << " sum: " << sum;
	return 0;
}
