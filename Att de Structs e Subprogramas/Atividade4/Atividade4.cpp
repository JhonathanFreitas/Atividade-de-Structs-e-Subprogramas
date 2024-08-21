#include <iostream>
using namespace std;

int converterParaCelsius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}
//f = Fahrenheit; c = Celsius
int main() {
    for (int f = 0; f <= 100; f++) {
        double c = converterParaCelsius(f);
        cout << f << " graus Fahrenheit = " << c << " graus Celsius" << endl;
    }

}
