#include <iostream>
using namespace std;
int main() {

    //Problem (switch)
    // int a, b, calc, result = 0;
    // cout << "Please enter two numbers: ";
    // cin >> a >> b;
    // cout << "Please select a number from 1 to 4 to compute! ";
    // cin >> calc;
    // switch (calc) {
    //     case 1: result = a + b;
    //     cout << "The sum of the two numbers is: ";
    //     break;
    //     case 2: result = a - b;
    //     cout << "The difference of the two numbers is: ";
    //     break;
    //     case 3: result = a * b;
    //     cout << "The product of the two numbers is: ";
    //     break;
    //     case 4: result = a / b;
    //     cout << "The quotient of the two numbers is: ";
    //     break;
    // }
    // cout << result;

    //Problem 1.1
    // cout << "The first 10 natural numbers are: ";
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << " ";
    // }

    //Problem 1.2
    // int n;
    // cout << "The first N natural numbers are: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    //     cout << i << " ";

    //Problem 1.3
    // int sum = 0;
    // cout << "The sum of first 10 natural numbers are: ";
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // cout << sum;

    //Problem 1.4
    // int n, sum = 0;
    // cout << "Enter a natural number: ";
    // cin >> n;
    // cout << "The sum of the first N natural numbers are: ";
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // cout << sum;

    //Problem 1.5
    // float avg, sum = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // avg = sum / 10;
    // cout << "The average of 10 natural numbers is: "<< avg << endl;

    //Problem 1.6
    // float n; int sum = 0;
    // cout << "Enter a natural number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // float average = sum / n;
    // cout << "The average of N natural numbers is: " << average;

    //Problem 2.1
    // cout << "Odd numbers among the first 10 natural numbers: ";
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 1)
    //         cout << i << " ";
    // }

    //Problem 2.2
    // cout << "Even numbers among the first 10 natural numbers: ";
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0)
    //         cout << i << " ";
    // }

    //Problem 2.3
    // int n;
    // cout << "Enter a natural number: ";
    // cin >> n;
    // cout << "Odd numbers among the first N natural numbers: ";
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 == 1)
    //         cout << i << " ";
    // }

    //Problem 2.4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout << "Even numbers among the first N natural numbers: ";
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 == 0)
    //         cout << i << " " ;
    // }

    //Problem 2.5
    // cout << "Numbers, divisible by 10, within the range from 1 to 100: ";
    // for (int i = 1; i <= 100; i ++ ) {
    //     if (i % 10 == 0)
    //         cout << i << " ";
    // }

    //Problem 2.6
    // int n;
    // cout << "Enter a natural number: ";
    // cin >> n;
    // cout <<  "Numbers – divisible by 10 – within the range from 1 to N: ";
    // for (int i = 1; i <= n; i ++) {
    //     if (i % 10 == 0)
    //         cout << i << " ";
    // }

    //Problem 3
    // int counter = 0;
    // cout << "The uppercase letters of the ASCII character table: " << endl;
    // for (char i = 'A'; i <= 'Z'; i ++) {
    //     cout << i << " ";
    //     counter++;
    //     if (counter == 5) {
    //         cout << "\n";
    //         counter = 0;
    //     }
    // }
    // if (counter > 0) {
    //     cout << endl;
    // }

    //Problem 4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n < 0) {
    //     cout << "Factorial of a negative number is not defined." << endl;
    // }
    // else {
    //     long long factorial = 1; // Initialize factorial to 1 (0! = 1)
    //     // Calculate factorial using a for loop
    //     for (int i = 1; i <= n; ++i) {
    //         factorial *= i;
    //     }
    //
    //     cout << "Factorial of " << n << " is " << factorial << endl;
    // }

    //Problem 5
    // int numClasses;
    // cout << "Enter the number of classes: ";
    // cin >> numClasses;
    //
    // double totalGradePoints = 0;
    // int totalCredits = 0;
    //
    // cout << "Enter the credit hours first, then your total grade: " << endl;
    // for (int i = 1; i <= numClasses; i++) {
    //     double grade, credits;
    //     cin >> credits;
    //     cin >> grade;
    //     totalGradePoints += grade * credits;
    //     totalCredits += credits;
    // }
    //
    // double gpa = totalGradePoints / totalCredits;
    //
    // cout << "Your total GPA is: " << gpa << endl;

    //Problem 6
    int numCourses, numStudents; double GPA;
    double totalGradePoints = 0;
    int totalCredits = 0;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    //cout << "Enter the credit hours first, then student's total grade: " << endl;

    for (int i = 1; i <= numStudents; i++) {
        cout << "Enter the number of courses: ";
        cin >> numCourses;
        for (int j = 1; j <= numCourses; j++) {
            double grade, credits;

            cin >> grade;
            cin >> credits;

            totalGradePoints += grade * credits;
            totalCredits += credits;
            GPA = totalGradePoints / totalCredits;
        }
    }

    cout << "Your total GPA is: " << GPA << endl;


return 0;
}
