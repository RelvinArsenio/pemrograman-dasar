#include <iostream>

class Rectangle {
    private:
        int length;
        int width;
    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
        int getArea() {
            return length * width;
        }
};

int main() {
    int length, width;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    Rectangle rect(length, width);
    std::cout << "Area of rectangle is " << rect.getArea() << std::endl;
    return 0;
}
