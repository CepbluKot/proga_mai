
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int todec(uint32_t, int);

void dec_to_any(int, int);

void reverse(string);

int main()
{
    uint32_t num;
    int decnum = 0;
    cin >> num; 
    cout << todec(num, 3) << endl;
        cout << "\n------------------\n";
   
    dec_to_any(todec(num, 3), 3);
    
}











int todec(uint32_t namba, int sist ) {
    cout << "todec start \n";
    
    int result = 0;
    int step = 0;
    while (namba != 0) {
       
        result += (namba % 10) * (pow(sist,step));

        namba /= 10;
        step+=1;
       
    }

    
    return result;
}


void dec_to_any(int numba, int sistim) {
    cout << "dec_to_any start" << endl;
    int ostatok = numba%sistim;
    
    string final_numba = "";
    cout << "\n\t" << numba << "\t" << numba % sistim << "\t" << "\n";
    while (numba >= sistim) {
        //cout << "\n\t"<<numba<< "\t"<< numba % sistim << "\t" << "\n";
        final_numba += to_string(numba % sistim);
        numba /= sistim;

        
    }
    if (numba < sistim) final_numba += to_string(numba);

    reverse(final_numba);
}


void reverse(string arr) {

    
        
        
        for (int x = arr.size() - 1; x >= 0; x--) {
            cout << arr[x];
        }
        cout << endl;
        
    
}
