#include <iostream>
int main(){
    using namespace std;
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[0] is " << p3[0] << endl;
    p3 = p3 + 1;
    cout << "now p3[0] is " << p3[0] << endl;
    delete [] p3;
    return 0;
}