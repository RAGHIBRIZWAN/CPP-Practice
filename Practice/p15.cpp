#include<iostream>
#include<vector>
using namespace std;

class Course {
    string name;
    string code;
    int creditHours;
public:
    Course(string name, string code, int creditHours)
        : name(name), code(code), creditHours(creditHours) {}

    string getName() const { return name; }
    string getCode() const { return code; }
    int getCreditHours() const { return creditHours; }
};

class Employee {
    string name;
    string designation;
    string department;
    int salary;
public:
    Employee(string name, string designation, string department, int salary)
        : name(name), designation(designation), department(department), salary(salary) {}

    string getName() const { return name; }
    string getDesignation() const { return designation; }
    string getDepartment() const { return department; }
    int getSalary() const { return salary; }
};

class Faculty : public Employee {
    int hours;
    vector<Course> courseList;
public:
    Faculty(string name, string designation, string department, int salary, int hours, vector<Course> courseList)
        : Employee(name, designation, department, salary), hours(hours), courseList(courseList) {}

    int getHours() const { return hours; }
    const vector<Course>& getCourseList() const { return courseList; }
};

int main() {
    Course course1("Math", "MATH101", 3);
    Course course2("Physics", "PHYS101", 4);
    vector<Course> courses = { course1, course2 };

    Faculty faculty("John Doe", "Professor", "Physics Department", 80000, 40, courses);

    cout << "Faculty Name: " << faculty.getName() << endl;
    cout << "Designation: " << faculty.getDesignation() << endl;
    cout << "Department: " << faculty.getDepartment() << endl;
    cout << "Salary: " << faculty.getSalary() << endl;
    cout << "Working Hours: " << faculty.getHours() << endl;
    cout << "Courses:" << endl;
    for (const Course& course : faculty.getCourseList()) {
        cout << "  Name: " << course.getName() << ", Code: " << course.getCode() << ", Credit Hours: " << course.getCreditHours() << endl;
    }

    return 0;
}
