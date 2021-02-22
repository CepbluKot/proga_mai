#include <iostream>
using namespace std;
int main() {
	
	int num = 0;
	int count = 0;
	int sum = 0;
	cin>>num;
	
	while(num != 0){
		sum += num%10;
		count++;
		num /=10;
	}
	cout << "sum: " << sum << " count: " << count;
	return 0;
}
