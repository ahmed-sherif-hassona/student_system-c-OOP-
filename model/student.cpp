
#include<iostream>
#include<string>
using namespace std;
class Student{
  private:
      int age;
       int id;
       string name;
       string phonenumber;
       double GPA;

 public:
        void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }

  
    void setId(int i) {
        id = i;
    }

    int getId() const {
        return id;
    }

    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }

  
    void setPhoneNumber(const string& p) {
        phonenumber = p;
    }

    string getPhoneNumber() const {
        return phonenumber;
    }

  
    void setGPA(double g) {
        GPA = g;
    }

    double getGPA() const {
        return GPA;
    }

};