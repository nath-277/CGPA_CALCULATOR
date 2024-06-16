#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    int courseUnit;
    char gradeLetter;
    double gradePoint;
};

double getGradePoint(char gradeLetter) {
    switch (gradeLetter) {
        case 'A': return 5.0;
        case 'B': return 4.0;
        case 'C': return 3.0;
        case 'D': return 2.0;
        case 'E': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

double calculateGPA(vector<Course> &courses) {
    int totalUnits = 0;
    double totalGradePoints = 0.0;
    for (Course &course : courses) {
        totalUnits += course.courseUnit;
        totalGradePoints += course.courseUnit * course.gradePoint;
    }
    return totalUnits ? totalGradePoints / totalUnits : 0.0;
}

int main() {
    vector<vector<Course>> allSemesters;
    int numSemesters;
     cout << "\t=======================\n";
     cout <<"\t  Made by ~BLACK-KING" << endl << "\t  FOR ALL YOU NERDS"<<endl;
     cout << "\t=======================\n\n";
    sleep(3);
    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    for (int i = 0; i < numSemesters; ++i) {
        int numCourses;
        cout << "Enter the number of courses for semester " << i + 1 << ": ";
        cin >> numCourses;
        
        vector<Course> semesterCourses;
        for (int j = 0; j < numCourses; ++j) {
            Course course;
            cout << "Enter course unit and grade letter for course " << j + 1 << ": ";
            cin >> course.courseUnit >> course.gradeLetter;
            course.gradePoint = getGradePoint(course.gradeLetter);
            semesterCourses.push_back(course);
        }
        allSemesters.push_back(semesterCourses);
    }

    int totalUnits = 0;
    double cumulativeGradePoints = 0.0;

    for (int i = 0; i < allSemesters.size(); ++i) {
        double gpa = calculateGPA(allSemesters[i]);
        cout << "GPA for semester " << i + 1 << ": " << gpa << endl;
        
        for (Course &course : allSemesters[i]) {
            totalUnits += course.courseUnit;
            cumulativeGradePoints += course.courseUnit * course.gradePoint;
        }
    }

    double cgpa = totalUnits ? cumulativeGradePoints / totalUnits : 0.0;
    cout << "Cumulative GPA (CGPA): " << cgpa << endl;

    return 0;
}
