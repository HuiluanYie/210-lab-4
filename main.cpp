// COMSC-210 | Lab 4 | Huiluan Yie

#include <iostream>
#include <vector>
using namespace std;

const int N_MIN = 25, N_MAX = 50;
const int COLOR_MIN = 0, COLOR_MAX = 255;

struct Color {
    int red, green, blue;
};

//Function prototype
//Function prototype
Color populate_color();
void output_color(const Color &);

int main() {
    srand(time(0));
    int n = rand() % (N_MAX - N_MIN + 1) + N_MIN;
    vector<Color> v;
    int r, g, b;

    // push n random colors into the vector
    for (int i = 0; i < n; i++)
    {
        r = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;
        g = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;
        b = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;
        temp_color = {r, g, b};
        v.push_back(temp_color);
    }
    
    for (int i = 0; i < n; i++)
    {
        temp_color = {r, g, b};
        v.push_back(temp_color);
    }
    output_color(v[0]);

    return 0;
}

//Function definition
Color populate_color() {
    // populate_color() populate the Color struct's data in a nice, presentable format
    // arguments: Color
    // returns: null
    Color temp;
    return temp;
}

void output_color(const Color &c) {
    // outputColor(const Color &c) outputs the Color struct's data in a nice, presentable format
    // arguments: Color
    // returns: null
    cout << "Color RGB values:\n";
    cout << "Red:   " << c.red << '\n';
    cout << "Green: " << c.green << '\n';
    cout << "Blue:  " << c.blue << '\n';
    cout << endl;
}