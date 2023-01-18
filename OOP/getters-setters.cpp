#include <iostream> 
#include <cstring>
using namespace std;

//product (shopping website)
class product {
    int id;
    char name[100];
    int mrp;
    int selling_price;
    public : 
    //parameterised constructor 
    product (int id, char *n, int mrp, int selling_price){
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name,n);
    }
    //setters
    void setmrp  (int price){
        if (price>0){
            mrp=price;
        }
    }
    void setselligprice (int price){
        if (price > mrp){
            selling_price = mrp;
        }
        else{
            selling_price = price;
        }
    }
    //getters
    int getmrp (){
        return mrp;
    }
    int getsellingprice (){
        return selling_price;
    }
    void showdetails (){
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Selling price : " << selling_price << endl;
        cout << "MRP : " << mrp << endl;
        cout << "--------------------------------" << endl;
    }
};

int main (){
    product cam(101,"kedar",34343,45454);
    cam.showdetails();
    //copy constructors 
    product webcam (cam);
    product gopro = cam;

    webcam.showdetails();
    gopro.showdetails ();
    return 0;
}