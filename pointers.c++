#include <iostream>
#include <iomanip>


double avg(double *p, int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += p[i];
    }

    return (sum / size);
}

using namespace std;
int main()
{
    double arr[10] = {1.3, 5, 5.3, 28, 1.9, 3.6, 23.6, 23, 29, 10};

    cout<<"Avg is: " << avg(arr, 10) << endl;
    cout<<"First element" << *arr<<endl;
}


