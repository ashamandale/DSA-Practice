//child constuector callimng base class constructor
#include<iostream>
using namespace std;
class Person{
protected:
  string name;
  int age;

public:
  Person(string a, int n){
   name=a;
   age=n;
  }
};

class student : public Person{
    private:
    string studenID;

    public:
    student(string a, int n, string id ): Person (a,n){
        studenID=id;
    }
    void getData(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"age: "<<this->age<<endl;
        cout<<"StudentID: "<<this->studenID<<endl;
    }

};
int main(){
    student s1("Asha",25,"abc45");
    cout<<"Student Information:"<<endl;
    s1.getData();


    return 0;
}