#include <iostream>
using namespace std;
int main() {

  //Problem 1(a)
  //   int n, sum = 0;
  //   cout << "The sum of first 100 natural numbers is: ";
  //  for (int i = 1; i <= 100; i++) {
  //     sum += i;
  //
  // }
  //     cout << sum;


   //Problem 1(b)

   //  int n, sum = 0;
   //  cout << "Enter a number: ";
   //  cin >> n;
   //  while (n > 0) {
   //      sum += n;
   //      n--;
   //  }
   // cout << sum << endl;

    //Problem 2(a)
    // int count = 0, num = 2;
    // cout << "The first 10 prime numbers are: ";
    // for (; count < 10; num++) {
    //     bool isPrime = true;
    //     for (int i = 2; i <= sqrt(num); i++) {
    //         if (num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime) {
    //         cout << num << " ";
    //         count++;
    //     }
    // }

    //Problem 2(b)
    // int count = 0, num = 2, n;
    // cout << "The first n prime numbers are: ";
    // cin >> n;
    // while (count < n) {
    //     bool isPrime = true;
    //     for (int i = 2; i <= sqrt(num); i++) {
    //         if (num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime) {
    //         cout << num << " ";
    //         count++;
    //     }
    //     num++;
    // }

    //Porblem 3
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    //
    // while (n != 1) {
    //     if (n % 2 == 0) {
    //         n = n / 2;
    //     }
    //     else {
    //         n = 3*n + 1;
    //     }
    //     cout << n << " ";
    // }
    //

    //Problem 4
    // int n, digit = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n > 0) {
    //     n = n / 10;
    //     digit++;
    // }
    // cout << digit;

    //Problem 5
    // int n, r, digit = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n > 0) {
    //     r = n % 10;
    //     n = n / 10;
    //     cout << r << " ";
    // }

    //Problem 6
    // Input numbers
    // int num1 = 48;
    // int num2 = 18;
    //
    // // Make sure num1 is the larger number
    // if (num2 > num1) {
    //     int temp = num1; // Store num1 temporarily
    //     num1 = num2;     // Swap num1 and num2
    //     num2 = temp;
    // }
    //
    // // Euclidean Algorithm using a while loop
    // while (num2 != 0) {
    //     int remainder = num1 % num2; // Calculate the remainder
    //     num1 = num2;                 // Replace num1 with num2
    //     num2 = remainder;            // Replace num2 with the remainder
    // }
    //
    // // Output the GCD
    // std::cout << "Input: 48,18" << std::endl;
    // std::cout << "Output: " << num1 << std::endl; // num1 now holds the GCD
    //
    // // Second Example
    //
    // num1 = 81;
    // num2 = 27;
    //
    // if (num2 > num1) {
    //     int temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    //
    // while (num2 != 0) {
    //     int remainder = num1 % num2;
    //     num1 = num2;
    //     num2 = remainder;
    // }
    //
    // std::cout << "Input: 81,27" << std::endl;
    // std::cout << "Output: " << num1 << std::endl;
    //
    //

return 0;
}
