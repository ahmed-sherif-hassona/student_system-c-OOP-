#include<bits/stdc++.h>
using namespace std;
class shareData{
     private:
      int id;
       string name;
       public:
        void setId(int i) {
        id = i;
    }

    int getId() const {
        return id;
    }

    void setName( string n) {
        name = n;
    }

    string getName() const {
        return name;
    }

};
class baseEntity : public shareData{

  private:
      int age;
       string phonenumber;
       
 public:
        void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
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
       int studentId[5];
      
 public:
       
    void setStudentId(int arr[5])
    {
          for(int i=0;i<5;i++)
          {
             studentId[i]=arr[i];
          }
    }
    int* getStudentId(){
       return  studentId;
    }
    void setSalary(double s) {
        salary = s;
    }

    double getSalary() const {
        return salary;
    }

};

class courses :public shareData{
     private:
     double hours;
   int studentId[5];
     public:


   
    void setHours(double newHours) {
        hours = newHours;
    }

  
    double getHours() const {
        return hours;
    }

};

class Student : public baseEntity{
  private:
       double GPA;
       Teacher teacher[6];
        courses course[6];
 public:
       void setcourses(courses arr[6])
     {
        for(int i=0;i<6;i++)
        {
            course[i]=arr[i];
        }
     }
      courses* getcourse() 
     {
        return course;
     }
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