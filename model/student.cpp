
#include "baseEntity.cpp"
using namespace std;
class Student : public baseEntity{
  private:
       double GPA;

 public:
      
  
    void setGPA(double g) {
        GPA = g;
    }

    double getGPA() const {
        return GPA;
    }

};