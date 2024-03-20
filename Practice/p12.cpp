#include <iostream>
#include <string>

class Employee {
private:
    static int nextEmployeeID;
    const static float MAX_SALARY;
    int employeeID;
    std::string name;
    float salary;
    
public:
    Employee(const std::string& name, float salary) : name(name) {
        employeeID = nextEmployeeID++;
        setSalary(salary);
    }
    
    static int generateEmployeeID() {
        return nextEmployeeID;
    }
    
    void setSalary(float newSalary) {
        if (newSalary > MAX_SALARY) {
            salary = MAX_SALARY;
        } else {
            salary = newSalary;
        }
    }
    
    void displayEmployeeInfo() {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int Employee::nextEmployeeID = 1;
const float Employee::MAX_SALARY = 100000.0f; // Example maximum salary

int main() {
    Employee emp1("John Doe", 95000);
    Employee emp2("Jane Smith", 105000);

    std::cout << "Generated Employee ID: " << Employee::generateEmployeeID() << std::endl;

    emp1.displayEmployeeInfo();
    emp2.displayEmployeeInfo();

    return 0;
}
