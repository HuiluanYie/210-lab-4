// COMSC-210 | Lab 4 | Huiluan Yie

#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red, green, blue;
};

//Function prototype
void outputColor(const Color &);

int main() {
    Color color = {0, 0, 0};
    
    vector<Color> v;
    v.push_back(color);
    outputColor(v[0]);

    return 0;
}

//Function definition
void outputColor(const Color &c) {
    // outputColor(const Color &c) outputs the Color struct's data in a nice, presentable format
    // arguments: Color
    // returns: null
    cout << "Color RGB values:\n";
    cout << "Red:   " << c.red << '\n';
    cout << "Green: " << c.green << '\n';
    cout << "Blue:  " << c.blue << '\n';
    cout << endl;
}