#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
	
	int num = 0;
	int step = 0;
	cin >> num ; 
	cout << num % 10 << " * 10" <<" ^ "<< step ;
	num = num / 10;
	step++;
	while ( num != 0){
		cout << " + "<< num % 10 << " * 10" <<" ^ "<< step ;
		
	
		step++;
	
		num = num / 10;
		
		
	}
	
	return 0;
}
