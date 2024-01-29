#include <iostream>

// Classe base comum
class Shape {
public:
    Shape(const std::string& name) : name(name) {}

    // Método virtual a ser implementado nas classes derivadas
    virtual void draw() const {
        std::cout << "Drawing a generic shape.\n";
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

// Classes derivadas
class Circle : virtual public Shape {
public:
    Circle(const std::string& name, double radius) : Shape(name), radius(radius) {}

    // Implementação específica para Circle
    void draw() const override {
        std::cout << "Drawing a circle with radius " << radius << ".\n";
    }

private:
    double radius;
};

class Rectangle : virtual public Shape {
public:
    Rectangle(const std::string& name, double width, double height) : Shape(name), width(width), height(height) {}

    // Implementação específica para Rectangle
    void draw() const override {
        std::cout << "Drawing a rectangle with width " << width << " and height " << height << ".\n";
    }

private:
    double width;
    double height;
};

// Classe que herda de ambas as classes derivadas
class ShapeDrawer : public Circle, public Rectangle {
public:
    ShapeDrawer(const std::string& name, double radius, double width, double height)
        : Shape(name), Circle(name, radius), Rectangle(name, width, height) {}
    void draw() const override { std::cout << "..." << std::endl; }
};

int main() {
    ShapeDrawer shapeDrawer("MixedShape", 5.0, 3.0, 4.0);

    // Desambiguação ocorre no ponto de chamada
    shapeDrawer.draw();  
    shapeDrawer.Circle::draw();  // Chama explicitamente a implementação de Circle

    return 0;
}

