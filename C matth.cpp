// A program using functions
/* 
    Author :Erick
    Reg no :BSE-05-0162/2024
    Group  :BSE Group 3
    School :Zetech University
*/
#include <iostream> // cout(printf()), cin(scanf())
#include <cmath>
using namespace std;

// Function prototype
float addition(int x, int y);
double simple_interest(int principle, float rate, int time);

int main() {
    float sum, interest, sum1;
// Function calling
sum = addition(10, 20);
sum1 = addition(110, 230);
interest = simple_interest(5000, 0.2, 4);

cout << "Sum: " << sum << endl;
cout << "Sum1: " << sum1 << endl;
cout << "Simple Interest: " << interest << endl;

return 0;
}

// Function declaration
float addition(int x, int y) {
    int sum;
    sum = x + y;
    return sum;
}
// Function declaration
double simple_interest(int principle, float rate, int time) {
    float interest;
    interest = principle * rate * time;
    return interest;
}
