// COMSC-210 | Lab 4 | Huiluan Yie

#include <iostream>
using namespace std;

struct Color {
    int red, green, blue;
};

//Function prototype
void outputColor(const Color &);

int main() {
    Color c1 = {0, 0, 0};
    outputColor(c1);
    return 0;
}

//Function definition
void outputColor(const Color &c) {
    cout << "Color RGB values:\n";
    cout << "Red:   " << c.red << '\n';
    cout << "Green: " << c.green << '\n';
    cout << "Blue:  " << c.blue << '\n';
    cout << endl;
}