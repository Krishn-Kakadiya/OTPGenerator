#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generateOTP(int length) {
    string digits = "0123456789";
    string otp = "";
    srand(time(0));

    for (int i = 0; i < length; i++) {
        int index = rand() % digits.length();
        otp += digits[index];
    }

    return otp;
}

int main() {
    int length;
    cout << "Enter OTP length: ";
    cin >> length;

    string otp = generateOTP(length);
    cout << "Generated OTP: " << otp << endl;

    return 0;
}
