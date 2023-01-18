#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
    auto start_time = clock();
    for (int i=1; i<=10; i++){
        for (int j=1; j<=10; j++){
            cout << i << " " << j << endl;
        }
    }
    auto endtime = clock();
    cout << endtime - start_time << endl;
    return 0;
}