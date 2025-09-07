## 📌 Project 11: Input & Validation Library (OOP)
🔹 Overview

This project was implemented as part of Course 11 – OOP As It Should Be (Application) in the Programming Advices Track [www.programmingadvices.com
] by Dr. Mohamed Abouhadhood.

The main idea is to build an Input & Validation Library as a single class clsInputValidate, where all methods are static.
These methods are designed to validate inputs and enforce constraints such as checking ranges, verifying dates, and reading safe user input without program crashes.

---

## ✨ Features

✅ Range Validation: Check if integers, shorts, floats, or doubles fall within a specific range.

✅ Date Validation: Validate whether a date is correct and whether it lies within a given range.

✅ Robust Input Handling: Continuously prompt users until a valid integer or double is entered.

✅ Range-Constrained Input: Ensure numbers entered by the user fall strictly between defined boundaries.

✅ Static Methods: All helper functions can be used without creating an object.

✅ Reusability: A general-purpose class that can be reused across multiple projects.

---

## 📂 Project Structure

📁 Project-11-Input-Validation-Library-OOP

- clsInputValidate.h → Contains the class and all validation methods

- main.cpp → Sample usage and demonstration code

- README.md → Project documentation

---

## 🧾 Sample Demonstration

```
#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{
    cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::IsDateBetween(clsDate(),
        clsDate(1, 9, 2025),
        clsDate(10, 9, 2025)) << endl;

    cout << "\nPlease Enter a Number:\n";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "x=" << x;

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "y=" << y;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
    cout << "a=" << a;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "b=" << b;

    cout << endl << clsInputValidate::IsValidDate(clsDate(35, 12, 2022)) << endl;

    system("pause>0");
    return 0;
}
```

---

## 🖥️ Example Output

1 → true (5 is between 1 and 10)

1 → true (5.5 is between 1.3 and 10.8)

0 → false (date not within range)

Prompts user until a valid integer or double is entered

Validates if dates are correct or not

---

## 🙏 Acknowledgments

This project is part of the Programming Advices Training Track led by:

👨‍🏫 Dr. Mohamed Abouhadhood

📚 Platform: Programming Advices
