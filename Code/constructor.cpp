#include <iostream>
#include <string>

using namespace std;

class car{
    public:
        int model;
        string name;

    void setValues(){
        model = 2015;
        name = "Figo";
        regNumber = "KA03DM1234";
    }
    
    void getValues(){
        cout << this->name << "  " << model << "  " <<  regNumber << endl; 
    }

    // User defined constructor
    car(){
        cout << "from default constructor. \n" ;
    }
    
    //parameterized constructor
    car(int model, string name, string regNumber){
        this->model =  model;
        this->name = name;
        this->regNumber = regNumber;
    }

    private:
        string regNumber;
};

int main(){

    car car1;
    car car2(2019,"maruti","jk01");  // parameterized constructor
    car car3(car2);             // copy constructor 
    
    car1 = car2;        // copy assignment 

    car1.getValues();
    car2.getValues();
    car3.getValues();
    
    // //car1.setValues(2015, "Maruti","KA03ed0001");
   
}