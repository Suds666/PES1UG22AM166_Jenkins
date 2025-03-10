#include <iostream>
#include <string>

class Student {
private:
    std::string srn;
    std::string name;
    
public:
    Student(const std::string& srn_val, const std::string& name_val) 
        : srn(srn_val), name(name_val) {}
    
    void display() const {
        std::cout << "Student Details:" << std::endl;
        std::cout << "SRN: " << srn << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    // Create a student object with YOUR_SRN
    Student student("PES1UG22AM166", "Sudarshan Srinivasan");
    
    // Display student information
    student.display();
    
    std::cout << "Program executed successfully!" << std::endl;
    return 0;
}
