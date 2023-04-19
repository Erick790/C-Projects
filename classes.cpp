#include <iostream>
#include <string>

class student {
  private:
    std::string name;
    int age;
    float gpa;

  public:
    void displayInfo(std::string setName, int setAge, float setGpa) {
      name = setName;
      age = setAge;
      gpa = setGpa;
    }
    std::string getName() {
      return name;
    }
    int incrementAge() {
      if (age > 0) {
        age++;
      } else {
        age = 0;
      }
      return age;
    }
    float incrementGpa() {
      if (gpa <= 4 && gpa >= 0) {
        gpa = gpa + 0.1;
      } else {
        gpa = 0;
      }
      return gpa;
    }
    float decrementGpa() {
      if (gpa >= 0 && gpa <= 4) {
        gpa = gpa - 0.1;
      } else {
        gpa = 0;
      }
      return gpa;
    }
};

int main() {
  student myStudent;
  myStudent.displayInfo("John", 15, 4);

  std::cout << "Student's Information: " << std::endl;
  std::cout << "Name: " << myStudent.getName() << std::endl;
  std::cout << "Age: " << myStudent.incrementAge() << std::endl;
  std::cout << "GPA: " << myStudent.decrementGpa() << std::endl;

  std::cout << "Student's Information: " << std::endl;
  std::cout << "Name: " << myStudent.getName() << std::endl;
  std::cout << "Age: " << myStudent.incrementAge() << std::endl;
  std::cout << "GPA: " << myStudent.incrementGpa() << std::endl;
}