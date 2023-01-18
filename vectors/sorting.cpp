#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    vector <pair<string,vector<int>>> stu_marks = {{"rohan",{23,54,64}},{"prateek",{34,57,33}},{"vivek",{3,6,77}}};
    sort(stu_marks.begin(),stu_marks.end());
    for (auto s : stu_marks)
        cout << s.first << endl;
    return 0;
}