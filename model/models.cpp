#include<iostream>
#include<string>
using namespace std;
class baseEntity{

  private:
      int age;
       int id;
       string name;
       string phonenumber;
       
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

};
class Teacher : public baseEntity{


 private:
      
       double salary;
      
 public:
       
  
    void setSalary(double s) {
        salary = s;
    }

    double getSalary() const {
        return salary;
    }

};
class Student : public baseEntity{
  private:
       double GPA;
       Teacher teacher[6];

 public:
      
     void setTeacher(Teacher arr[6])
     {
        for(int i=0;i<6;i++)
        {
            teacher[i]=arr[i];
        }
     }
    const  Teacher* getTeacher() const
     {
        return teacher;
     }
    void setGPA(double g) {
        GPA = g;
    }

    double getGPA() const {
        return GPA;
    }

};