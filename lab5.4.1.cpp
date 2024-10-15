#include <iostream>
#include <cmath>

using namespace std;

double RecFunc1(int i, int k) {
    if (i < k) {
            return 0;
    }
    return cos(i) / (1 + sin(i) * sin(i)) + RecFunc1(i - 1, k);
}
double RecFunc2(int i, int k) {
    if (i > 15) {
        return 0;
    }
    return cos(i) / (1 + sin(i) * sin(i)) + RecFunc2(i + 1, k);
}
double RecFunc3(int i, int k, double sum) {
    if(i < k) {
        return sum;
    }
    return RecFunc3(i - 1, k, sum + cos(i) / (1 + sin(i) * sin(i)));

}
double RecFunc4(int i, int k, double sum) {
    if(i > 15) {
        return sum;
    }
    return RecFunc4(i + 1, k, sum + cos(i) / (1 + sin(i) * sin(i)));
}
double iteraciinyi(int k) {
    double S = 0;
    for(int i = k; i <= 15; i++) {
        S += cos(i) / (1 + sin(i) * sin(i));
    }
    return S;
}
int main() {
    int k;
    cout << "k = "; cin >> k;
    cout << "RecFunc1: " << RecFunc1(15, k) << endl;
    cout << "RecFunc2: " << RecFunc2(k, k) << endl;
    cout << "RecFunc3: " << RecFunc3(15, k, 0) << endl;  
    cout << "RecFunc4: " << RecFunc4(k, k, 0) << endl;
    cout << "iteraciinyi: " << iteraciinyi(k) << endl;
    return 0;
}