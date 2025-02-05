/**
 * @file perfect_square.cpp
 * @author Your Name
 * @version 1.0
 * @date 2025-02-04
 * 
 * @section DESCRIPTION
 * 
 * This program checks whether a given number is a perfect square.
 */

#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Checks if a number is a perfect square.
 * 
 * @param num The number to check.
 * @return true if num is a perfect square, false otherwise.
 */
bool isPerfectSquare(int num) {
    if (num < 0) return false; // Negative numbers are not perfect squares
    int sqrtValue = static_cast<int>(sqrt(num));
    return (sqrtValue * sqrtValue == num);
}

/**
 * @brief Main function to test the perfect square function.
 * 
 * @return int Program exit status.
 */
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num)) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}
