#include <iostream>
#include <cmath>

class Shape {
public:
    virtual ~Shape() {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual void print() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }

    void print() const override {
        std::cout << "Circle: radius = " << radius << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }

    void print() const override {
        std::cout << "Rectangle: length = " << length << ", width = " << width << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
    }
};


class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const override {
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }

    void print() const override {
        std::cout << "Triangle: sides = " << a << ", " << b << ", " << c << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 4, 5);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->print();
        delete shapes[i];
    }

    return 0;
}
