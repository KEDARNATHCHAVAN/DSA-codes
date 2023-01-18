#include<vector>
using namespace std;

template<typename t>
class stack{
    vector <t> arr;
    public:
    void push(t data){
    arr.push_back(data);
    }
    void pop (){
        arr.pop_back();
    }
    t top (){
        int lastindex = arr.size()-1;
        return arr[lastindex];
    }
    bool empty(){
        return arr.size()==0;
    }
};