#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string name;
    int salary;
    int bonus;
    
	Employee(string emp_name, int emp_salary, int emp_bonus) : name(emp_name), salary(emp_salary), bonus(emp_bonus) {
    }
    
	void mydisplay(){
        cout << "Employee name is " << name << " with the salary " << salary << " got the bonus " << bonus << endl;
    }
};
int main() {
    Employee employee1("Sai", 10000, 11000); 
    employee1.mydisplay();
    Employee employee2("Krishna", 12000, 11200); 
    employee2.mydisplay();
    return 0;
}
