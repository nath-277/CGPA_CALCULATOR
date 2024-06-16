# CGPA Calculator

Welcome to the CGPA Calculator project! This is a tool designed to help students compute their Cumulative Grade Point Average (CGPA) effortlessly. Originally started as a fun project, it has now been published to assist other students in accurately calculating their academic performance over multiple semesters.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Input Format](#input-format)
- [Output Format](#output-format)
- [Installation](#installation)
- [How to Run](#how-to-run)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Introduction
The CGPA Calculator is a simple, yet powerful program written in C++ that allows students to calculate their GPA for individual semesters as well as their cumulative GPA across multiple semesters. This tool can be particularly useful for tracking academic progress and planning future studies.

## Features
- Calculate GPA for individual semesters
- Calculate cumulative GPA (CGPA) over multiple semesters
- Simple and intuitive input format
- Supports different grading scales

## Usage
To use the CGPA Calculator, you will need to input the number of semesters, the number of courses per semester, and the details for each course (course unit and grade letter). The program will then compute and display the GPA for each semester and the overall CGPA.

## Input Format
- **Number of Semesters**: The total number of semesters you want to calculate.
- **Number of Courses per Semester**: The number of courses you took in each semester.
- **Course Details**: For each course, you need to provide:
  - **Course Unit (CU)**: The credit hour for the course.
  - **Grade Letter (GD)**: The grade you received for the course (A, B, C, D, E).

## Output Format
- **GPA for Each Semester**: The Grade Point Average for each individual semester.
- **CGPA**: The Cumulative Grade Point Average across all entered semesters.

## Installation
To run the CGPA Calculator, you need to have a C++ compiler installed on your system. You can use compilers such as GCC (GNU Compiler Collection) or any other C++ IDE like Code::Blocks, Visual Studio, or CLion.

### Step-by-Step Installation Guide
1. **Install a C++ Compiler**: If you don't have one already, install GCC or any C++ compatible compiler.
2. **Clone the Repository**: Download or clone this repository to your local machine.
    ```sh
    git clone https://github.com/nath-277/CGPA_CALCULATOR.git
    ```
3. **Navigate to the Project Directory**: Open a terminal and navigate to the directory where you cloned the repository.
    ```sh
    cd CGPA_Calculator
    ```

## How to Run
1. **Compile the Program**: Use your C++ compiler to compile the source code.
    ```sh
    g++ -o cgpa_calculator cgpa_calculator.cpp
    ```
2. **Run the Program**: Execute the compiled program.
    ```sh
    ./cgpa_calculator
    ```

## Example
Here is an example of how to use the CGPA Calculator:

```
Enter the number of semesters: 2
Enter the number of courses for semester 1: 4
Enter course unit and grade letter for course 1: 3 A
Enter course unit and grade letter for course 2: 2 B
Enter course unit and grade letter for course 3: 3 C
Enter course unit and grade letter for course 4: 2 A
Enter the number of courses for semester 2: 4
Enter course unit and grade letter for course 1: 3 B
Enter course unit and grade letter for course 2: 3 A
Enter course unit and grade letter for course 3: 2 B
Enter course unit and grade letter for course 4: 3 C

GPA for semester 1: 3.22
GPA for semester 2: 3.18
Cumulative GPA (CGPA): 3.20
```

## Contributing
Contributions are welcome! If you have any ideas, suggestions, or improvements, please feel free to fork the repository and submit a pull request. You can also open an issue to discuss any changes or improvements.

### How to Contribute
1. **Fork the Repository**: Click the "Fork" button at the top right corner of this repository.
2. **Clone the Forked Repository**: 
    ```sh
    git clone https://github.com/nath-277/CGPA_CALCULATOR.git
    ```
3. **Create a New Branch**: 
    ```sh
    git checkout -b feature-new-idea
    ```
4. **Make Changes**: Implement your changes or new features.
5. **Commit and Push**: 
    ```sh
    git commit -m "Your commit message"
    git push origin feature-new-idea
    ```
6. **Submit a Pull Request**: Open a pull request from your forked repository to this repository.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Acknowledgements
This project was inspired by the need to simplify the CGPA calculation process for students. Special thanks to all the contributors and the academic community for their support and feedback.

---

Feel free to customize this README file further to suit your needs!
