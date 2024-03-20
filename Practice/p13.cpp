#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int age;
    string joiningDate;

public:
    Employee(const string& name, int age, const string& joiningDate)
        : name(name), age(age), joiningDate(joiningDate) {}

    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Joining Date: " << joiningDate << endl;
    }
};

class Developer : public Employee {
protected:
    string role;

public:
    Developer(const string& name, int age, const string& joiningDate, const string& role)
        : Employee(name, age, joiningDate), role(role) {}

    void displayInfo() const override {
        Employee::displayInfo();
        cout << "Role: " << role << " developer" << endl;
    }
};

class Debugger : public Employee {
protected:
    string role;

public:
    Debugger(const string& name, int age, const string& joiningDate, const string& role)
        : Employee(name, age, joiningDate), role(role) {}

    void displayInfo() const override {
        Employee::displayInfo();
        cout << "Role: " << role << " debugger" << endl;
    }
};

class TeamLead : public Developer, public Debugger {
public:
    TeamLead(const string& name, int age, const string& joiningDate, const string& devRole, const string& debugRole)
        : Developer(name, age, joiningDate, devRole), Debugger(name, age, joiningDate, debugRole) {}

    void displayInfo() const override {
        Developer::displayInfo();
        Debugger::displayInfo();
    }
};

int main() {
    TeamLead lead("John Doe", 30, "2022-01-01", "frontend", "manual");
    lead.displayInfo();

    return 0;
}
