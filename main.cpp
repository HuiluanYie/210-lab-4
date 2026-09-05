// COMSC-210 | Lab 4 | Huiluan Yie

#include <iostream>
#include <vector>
using namespace std;

const int N_MIN = 25, N_MAX = 50;
const int MIN = 25, MAX = 50;

struct Color {
    int red, green, blue;
};

//Function prototype
void outputColor(const Color &);

int main() {
    srand(time(0));
    int n = rand() % (MAX - MIN + 1) + MIN;
    vector<Color> v;
    Color temp_color;
    int r, g, b;

    for (int i = 0; i < n; i++)
    {
        r = rand() %
        temp_color = {r, g, b};
        v.push_back(temp_color);
    }
    
    
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