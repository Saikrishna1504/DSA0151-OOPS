#include <iostream>
#include <vector>
#include <string>

class Course; 
class Person {
protected:
    std::string name;
    int age;
    std::string gender;
public:
    Person(const std::string& name, int age, const std::string& gender) : name(name), age(age), gender(gender) {}

    std::string get_details() const {
        return "Name: " + name + ", Age: " + std::to_string(age) + ", Gender: " + gender;
    }
};

class Student : public Person {
private:
    std::string student_id;
    std::vector<Course*> courses;
public:
    Student(const std::string& name, int age, const std::string& gender, const std::string& student_id) 
        : Person(name, age, gender), student_id(student_id) {}

    void enroll_course(Course* course);

    std::vector<std::string> list_courses() const;
};

class Professor : public Person {
private:
    std::string employee_id;
public:
    Professor(const std::string& name, int age, const std::string& gender, const std::string& employee_id) 
        : Person(name, age, gender), employee_id(employee_id) {}

    std::string teach_course(const Course* course) const;
};

class Course {
private:
    std::string course_code;
    std::string course_name;
    Professor* professor;
    std::vector<Student*> students;
public:
    Course(const std::string& course_code, const std::string& course_name, Professor* professor) 
        : course_code(course_code), course_name(course_name), professor(professor) {}

    void add_student(Student* student) {
        students.push_back(student);
    }

    std::string get_course_code() const {
        return course_code;
    }

    std::string get_course_name() const {
        return course_name;
    }
};

void Student::enroll_course(Course* course) {
    courses.push_back(course);
}

std::vector<std::string> Student::list_courses() const {
    std::vector<std::string> course_codes;
    for (const auto& course : courses) {
        course_codes.push_back(course->get_course_code());
    }
    return course_codes;
}

std::string Professor::teach_course(const Course* course) const {
    return name + " is teaching " + course->get_course_code() + " - " + course->get_course_name();
}

int main() {
    Professor* professor1 = new Professor("John Doe", 40, "Male", "EMP001");
    Student* student1 = new Student("Alice Smith", 20, "Female", "S001");
    Student* student2 = new Student("Bob Johnson", 22, "Male", "S002");

    Course* course1 = new Course("CS101", "Introduction to Computer Science", professor1);
    Course* course2 = new Course("ENG201", "English Literature", professor1);

    course1->add_student(student1);
    course1->add_student(student2);

    std::cout << professor1->teach_course(course1) << std::endl;

    student1->enroll_course(course1);
    student1->enroll_course(course2);

    std::cout << student1->get_details() << std::endl;
    std::vector<std::string> courses = student1->list_courses();
    std::cout << "Enrolled courses: ";
    for (const auto& course : courses) {
        std::cout << course << " ";
    }
    std::cout << std::endl;

    delete professor1;
    delete student1;
    delete student2;
    delete course1;
    delete course2;

    return 0;
}
