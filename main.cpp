// COMSC-210 | Lab 4 | Huiluan Yie

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int N_MIN = 25, N_MAX = 50;
const int COLOR_MIN = 0, COLOR_MAX = 255;
const int DATA_W = 10;

struct Color {
    int red, green, blue;
};

//Function prototype
//Function prototype
Color random_color();
void output_color(const Color & );

int main() {
    srand(time(0));
    int n = rand() % (N_MAX - N_MIN + 1) + N_MIN;
    vector < Color > v;

    // push n random colors into the vector
    for (int i = 0; i < n; i++) {
        v.push_back(random_color());
    }
    // table header
    cout << "Color#   R value   G value   B value\n";
    cout << "------   -------   -------   -------\n";
    // output the colors in the vector
    for (int i = 0; i < v.size(); i++) {
        cout << setw(DATA_W) << right << i;
        output_color(v[i]);
    }

    return 0;
}

//Function definition
Color random_color() {
    // populate_color() generates a random color
    // arguments: none
    // returns: the Color
    Color temp;
    int r, g, b;

    temp.red = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;
    temp.green = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;
    temp.blue = rand() % (COLOR_MAX - COLOR_MIN + 1) + COLOR_MIN;

    return temp;
}

void output_color(const Color & c) {
    // outputColor(const Color &c) outputs the Color struct's data in a nice, presentable format
    // arguments: Color
    // returns: none
    cout << setw(DATA_W) << right << c.red;
    cout << setw(DATA_W) << c.green;
    cout << setw(DATA_W) << c.blue << '\n';
    cout << endl;
}