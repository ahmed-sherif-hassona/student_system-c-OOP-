
#include "baseEntity.cpp"
using namespace std;
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