#include <iostream>
#include <cmath>

using namespace std;

int todec(uint32_t, int);

void dec_to_any(int, int);








int main()
{
    uint32_t num;
    int decnum = 0;
    cin >> num;
    cout << todec(num, 3) << endl;
    cout << "\n------------------\n";

    dec_to_any(todec(num, 3), 3);

}











int todec(uint32_t namba, int sist) {
    cout << "todec start \n";

    int result = 0;
    int step = 0;
    while (namba != 0) {
        ;
        result += (namba % 10) * (pow(sist, step));

        namba /= 10;
        step += 1;

    }


    return result;
}


void dec_to_any(int numba, int sistim) {
    cout << "dec_to_any start" << endl;
    //int ostatok = numba % sistim;
    int index = 0;
    int final_numba = 0;
   // cout << "\n\t" << numba << "\t" << numba % sistim << "\t" << "\n";
    while (numba >= sistim) {
       // cout << "\n\t"<<numba<< "\t"<< numba % sistim << "\t" << "  "<<index <<"\n";
        cout << "\n\t" << numba << " % " << sistim << " = " << numba % sistim;
        final_numba += pow(10, index) * (numba % sistim);// cout << "\n\t " << pow(10, index)<< " * "<< numba%sistim <<" = "<< final_numba;

        numba /= sistim;
        index++;

    }
    if (numba < sistim) final_numba += numba * pow(10, index); cout <<"\n\n"<< numba << " * " << index + 1 << " = " << numba * pow(10, index );

    cout <<"\n\n\n\t"<< final_numba;
}

