#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a = 1000;
    double b = 2000;
    double* p = &a;
    *p = 3000; 
    p = &b; 
    a = *p * 2; 

    cout << "a: " << a << endl << "b: " << b << endl << "p: " << p << endl;
}


// first call test(t = 17,  s = 21,  x = 15)
// s = 4;
// s = 7;
// x = 15 + 7 + 17 = 39;
// t = 35;
// cout << 7 << 35 << 39;
// e = 7;
// f = 39;



// second call test(t = 16, s = 19, x = 39)
// s = 4;
// s = 7;
// x = 39 + 7 + 16 = 62;
// t = 35
// cout << 7 << 35 << 62;
// b = 7
// f = 62;




// 2) Trace the following code. Assume that a and b are stored at 20300 and 20308. Your
// trace table should have entries for a, b, and p.
// double a = 1000;
// double b = 2000;
// double* p = &a;
// *p = 3000; 
// p = &b; 
// a = *p * 2; 
// a = 4000, b = 200, p = 20308, 
