# 📝 Project 11 – Input & Validation Library (C++, OOP)

A robust C++ Input & Validation Library built as a single class clsInputValidate with all static methods. Designed to handle numeric ranges, validate dates, and safely read user input while preventing program crashes.

---

## ✨ Features

- Range Validation – Check if integers, floats, or doubles fall within a given range
- Date Validation – Ensure dates are valid and optionally within a specified range
- Robust Input Handling – Continuously prompts until valid input is provided
- Range-Constrained Input – Strictly enforce numeric boundaries
- Static Methods – No need to instantiate objects; use methods directly
- Reusability – General-purpose library applicable across multiple C++ projects

---

## 🏗️ Project Structure

- clsInputValidate.h → Core class with validation methods
- main.cpp → Sample usage and demonstration

---

## 🖥️ Example Usage

```cpp
#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{
    cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl
    cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl

    cout << "\nEnter a Number:\n"
    int x = clsInputValidate::ReadNumber<int>("Invalid Number, Enter again:\n")
    cout << "x=" << x << endl

    cout << "\nEnter a Number between 1 and 5:\n"
    int y = clsInputValidate::ReadNumberBetween(1, 5, "Number not in range, enter again:\n")
    cout << "y=" << y << endl

    system("pause>0")
    return 0
}
```

---

## 🏆 Learning Outcomes

- Writing reusable static methods
- Implementing generic input validation
- Handling numeric and date ranges
- Safe user input and error handling in console applications

---

## 🙏 Credits

- Instructor: **Dr. Mohamed AbouHadhood**
- Platform: **Programming Advices**

---
