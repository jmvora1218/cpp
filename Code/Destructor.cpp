#include<iostream>
using namespace std;

class person{
    private:
        int adhar;
    
    public:
        int phoneNumber;
        string *name;
    
    //getter function 
    void getValue (){
        cout << "PARENT CLASS || Name: "<< *name << "|| Adhar Number: " << adhar << "|| Contact Number: " <<  phoneNumber << endl;
    }
    
    //setter function
    void setValue(string name , int adhar,int phoneNumber){
        this->name = new string (name);
        this->adhar = adhar;
        this->phoneNumber = phoneNumber;
    }
    
    //default Constructor
    // person(){
    //     cout<< "PARENT CLASS || inside constructor \n"<< endl;
    // }
    
    //Default Destructor 
    ~person(){
        cout<< "PARENT CLASS || killing memory"<< endl; 

        delete name;     // memory free for name   
    }
};

class employee : private person{
    private:
        string *empId;
    
    public:
        string *mailId;
        int deskNo;

    void setValue(string empId, string mailId, int phoneNumber){
        this->empId = new string(empId);
        this->mailId = new string(mailId);
        this->deskNo = deskNo;
    }

    void getValue (){
        cout<< "CHILD CLASS  || empId: "<< *empId << " || mailId: " << *mailId << "|| deskNo: " << deskNo << endl;
    }

    ~employee(){
        cout<< "CHILD CLASS || killing memory"<< endl; 

        delete empId;
        delete mailId;     // memory free for name   
    }
};

int main(){
    cout<< "MAIN STARTED...\n"<< endl;
    person jay;
    employee emp;
    
    jay.setValue("jayv",1218,1234);
    jay.getValue();
    
    cout<<endl;

    emp.setValue("mub","mub@my.com",1234);
    emp.getValue();
    cout<< "MAIN ENDED...\n"<< endl;
    return 0;
}