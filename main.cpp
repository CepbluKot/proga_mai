#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	int num = 0;
	int num_copy = 0;
	int step = 0;
	int size = 0;
	cin >> num ; 
	num_copy = num;
	
	int m = 0;
	while(num)
	{
    	m = m*10+num%10;
   		num /= 10;
	}
	
	
	cout << m % 10 << " * 10" <<" ^ "<< step ;
	
	m = m / 10;
	step++;
	
	
	
	
	
	
	while ( m != 0){
		cout << " + "<< m % 10 << " * 10" <<" ^ "<< step ;
		
	
		step++;
	
		m = m / 10;
		
		
	}
	
	return 0;
}
