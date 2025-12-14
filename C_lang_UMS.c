#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>  // Added for atoi() function

#define MAX_STUDENTS 50
#define MAX_COURSES 10
#define MAX_NAME_LENGTH 50
#define MAX_ID_LENGTH 10

// GMulti arrays for data storing
char courses[MAX_COURSES][4][MAX_NAME_LENGTH]; // [course_index][0=ID,1=Name,2=MaxMarks,3=CreditHours]
char students[MAX_STUDENTS][2][MAX_NAME_LENGTH]; // [student_index][0=ID,1=Name]
char enrolled[MAX_STUDENTS][MAX_COURSES][MAX_ID_LENGTH]; // [student_index][course_index] = courseID
float marks[MAX_STUDENTS][MAX_COURSES]; // [student_index][course_index]
float attendance[MAX_STUDENTS][MAX_COURSES]; // [student_index][course_index]

int student_count = 0;
int course_count = 0;

// Function 
void initializeSystem();
int findCourseByID(char courseID[]);
int findStudentByID(char studentID[]);
int isCourseIDUnique(char courseID[]);
int isStudentIDUnique(char studentID[]);
void addCourse();
void addStudent();
void updateMarks();
void updateAttendance();
float calculateCourseGPA(int student_idx, int course_idx);
float calculateCumulativeGPA(int student_idx);
void displayStudentReport();
void displayCourseReport();
void displayTopper();
void displayAttendanceWarning();
void coursePerformanceAnalysis();
void searchStudent();
void searchCourse();
void sortStudentsByGPA();
void sortStudentsByTotalMarks();
void sortCoursesByAvgMarks();
void sortCoursesByEnrollment();
void bubbleSort(float arr[], int indices[], int n);
void displayMainMenu();
int getValidatedIntInput(char prompt[], int min, int max);
float getValidatedFloatInput(char prompt[], float min, float max);

int main() {
    initializeSystem();
    int choice;
    
    do {
        displayMainMenu();
        choice = getValidatedIntInput("Enter your choice (0-15): ", 0, 15);
        
        switch(choice) {
            case 1: 
            {
                addCourse(); 
                break;
            }
            case 2: 
            {
                addStudent(); 
                break;
            }
            case 3: 
            {
                updateMarks(); 
                break;
            }
            case 4: 
            {
                updateAttendance(); 
                break;
            }
            case 5: 
            {
                displayStudentReport(); 
                break;
            }
            case 6: 
            {
                displayCourseReport(); 
                break;
            }
            case 7: 
            {
                displayTopper(); 
                break;
            }
            case 8: 
            {
                displayAttendanceWarning(); 
                break;
            }
            case 9: 
            {
                coursePerformanceAnalysis(); 
                break;
            }
            case 10: 
            {
                searchStudent(); 
                break;
            }
            case 11: 
            {
                searchCourse(); 
                break;
            }
            case 12: 
            {
                sortStudentsByGPA(); 
                break;
            }
            case 13: 
            {
                sortStudentsByTotalMarks(); 
                break;
            }
            case 14: 
            {
                sortCoursesByAvgMarks(); 
                break;
            }
            case 15: 
            {
                sortCoursesByEnrollment(); 
                break;
            }
            case 0: 
            {
                printf("Exiting system. Goodbye!\n"); 
                break;
            }
            default: 
            {
                printf("Invalid choice!\n");
                break;
            }
        }
        if(choice != 0) {
            printf("\nPress Enter to continue...");
            getchar(); 
            getchar();
        }
    } while(choice != 0);
    
    return 0;
}

void initializeSystem() {
    // Initialize all arrays
    for(int i = 0; i < MAX_STUDENTS; i++) {
        for(int j = 0; j < MAX_COURSES; j++) {
            marks[i][j] = -1; // -1 indicates not enrolled
            attendance[i][j] = -1;
            strcpy(enrolled[i][j], "");
        }
    }
    printf("System initialized successfully!\n");
}

int findCourseByID(char courseID[]) {
    for(int i = 0; i < course_count; i++) {
        if(strcmp(courses[i][0], courseID) == 0) {
            return i;
        }
    }
    return -1;
}

int findStudentByID(char studentID[]) {
    for(int i = 0; i < student_count; i++) {
        if(strcmp(students[i][0], studentID) == 0) {
            return i;
        }
    }
    return -1;
}

int isCourseIDUnique(char courseID[]) {
    return findCourseByID(courseID) == -1;
}

int isStudentIDUnique(char studentID[]) {
    return findStudentByID(studentID) == -1;
}

void addCourse() {
    if(course_count >= MAX_COURSES) {
        printf("Maximum course limit reached!\n");
        return;
    }
    
    char courseID[MAX_ID_LENGTH];
    char courseName[MAX_NAME_LENGTH];
    
    printf("\n=== ADD NEW COURSE ===\n");
    
    printf("Enter Course ID: ");
    scanf("%s", courseID);
    
    if(!isCourseIDUnique(courseID)) {
        printf("Error: Course ID already exists!\n");
        return;
    }
    
    printf("Enter Course Name: ");
    scanf(" %[^\n]", courseName);
    
    int maxMarksVal = getValidatedIntInput("Enter Maximum Marks: ", 1, 1000);
    int creditHoursVal = getValidatedIntInput("Enter Credit Hours: ", 1, 5);
    
    // Store in courses array
    strcpy(courses[course_count][0], courseID);
    strcpy(courses[course_count][1], courseName);
    sprintf(courses[course_count][2], "%d", maxMarksVal);
    sprintf(courses[course_count][3], "%d", creditHoursVal);
    
    course_count++;
    printf("Course added successfully!\n");
}

void addStudent() {
    if(student_count >= MAX_STUDENTS) {
        printf("Maximum student limit reached!\n");
        return;
    }
    
    char studentID[MAX_ID_LENGTH];
    char studentName[MAX_NAME_LENGTH];
    
    printf("\n=== ADD NEW STUDENT ===\n");
    
    printf("Enter Student ID: ");
    scanf("%s", studentID);
    
    if(!isStudentIDUnique(studentID)) {
        printf("Error: Student ID already exists!\n");
        return;
    }
    
    printf("Enter Student Name: ");
    scanf(" %[^\n]", studentName);
    
    // Store student data
    strcpy(students[student_count][0], studentID);
    strcpy(students[student_count][1], studentName);
    
    // Course enrollment
    printf("\nAvailable Courses:\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Credits");
    printf("----------------------------------------\n");
    for(int i = 0; i < course_count; i++) {
        printf("%-10s %-20s %-10s\n", courses[i][0], courses[i][1], courses[i][3]);
    }
    
    if(course_count == 0) {
        printf("No courses available. Please add courses first.\n");
        return;
    }
    
    int enrollCount = getValidatedIntInput("\nHow many courses to enroll? ", 1, course_count);
    
    for(int i = 0; i < enrollCount; i++) {
        char courseID[MAX_ID_LENGTH];
        printf("Enter Course ID %d: ", i+1);
        scanf("%s", courseID);
        
        int course_idx = findCourseByID(courseID);
        if(course_idx == -1) {
            printf("Invalid Course ID! Try again.\n");
            i--;
            continue;
        }
        
        strcpy(enrolled[student_count][course_idx], courseID);
        marks[student_count][course_idx] = 0;
        attendance[student_count][course_idx] = 0;
    }
    
    student_count++;
    printf("Student added successfully!\n");
}

void updateMarks() {
    char studentID[MAX_ID_LENGTH], courseID[MAX_ID_LENGTH];
    
    printf("\n=== UPDATE MARKS ===\n");
    printf("Enter Student ID: ");
    scanf("%s", studentID);
    
    int student_idx = findStudentByID(studentID);
    if(student_idx == -1) {
        printf("Student not found!\n");
        return;
    }
    
    printf("Enter Course ID: ");
    scanf("%s", courseID);
    
    int course_idx = findCourseByID(courseID);
    if(course_idx == -1) {
        printf("Course not found!\n");
        return;
    }
    
    if(strcmp(enrolled[student_idx][course_idx], "") == 0) {
        printf("Student is not enrolled in this course!\n");
        return;
    }
    
    int maxMarks = atoi(courses[course_idx][2]);
    float newMarks = getValidatedFloatInput("Enter new marks: ", 0, maxMarks);
    
    marks[student_idx][course_idx] = newMarks;
    printf("Marks updated successfully!\n");
}

void updateAttendance() {
    char studentID[MAX_ID_LENGTH], courseID[MAX_ID_LENGTH];
    
    printf("\n=== UPDATE ATTENDANCE ===\n");
    printf("Enter Student ID: ");
    scanf("%s", studentID);
    
    int student_idx = findStudentByID(studentID);
    if(student_idx == -1) {
        printf("Student not found!\n");
        return;
    }
    
    printf("Enter Course ID: ");
    scanf("%s", courseID);
    
    int course_idx = findCourseByID(courseID);
    if(course_idx == -1) {
        printf("Course not found!\n");
        return;
    }
    
    if(strcmp(enrolled[student_idx][course_idx], "") == 0) {
        printf("Student is not enrolled in this course!\n");
        return;
    }
    
    float newAttendance = getValidatedFloatInput("Enter attendance percentage: ", 0, 100);
    
    attendance[student_idx][course_idx] = newAttendance;
    printf("Attendance updated successfully!\n");
}

float calculateCourseGPA(int student_idx, int course_idx) {
    if(marks[student_idx][course_idx] == -1) return 0;
    int maxMarks = atoi(courses[course_idx][2]);
    return (marks[student_idx][course_idx] / maxMarks) * 4.0;
}

float calculateCumulativeGPA(int student_idx) {
    float totalPoints = 0;
    int totalCredits = 0;
    
    for(int i = 0; i < course_count; i++) {
        if(strcmp(enrolled[student_idx][i], "") != 0 && marks[student_idx][i] != -1) {
            int credits = atoi(courses[i][3]);
            totalPoints += calculateCourseGPA(student_idx, i) * credits;
            totalCredits += credits;
        }
    }
    
    return totalCredits > 0 ? totalPoints / totalCredits : 0;
}

void displayStudentReport() {
    char studentID[MAX_ID_LENGTH];
    
    printf("\n=== STUDENT REPORT ===\n");
    printf("Enter Student ID: ");
    scanf("%s", studentID);
    
    int student_idx = findStudentByID(studentID);
    if(student_idx == -1) {
        printf("Student not found!\n");
        return;
    }
    
    printf("\nSTUDENT REPORT FOR: %s (%s)\n", students[student_idx][1], students[student_idx][0]);
    printf("================================================================================\n");
    printf("%-12s %-20s %-8s %-12s %-8s %-10s\n", 
           "Course ID", "Course Name", "Marks", "Attendance", "GPA", "Status");
    printf("================================================================================\n");
    
    for(int i = 0; i < course_count; i++) {
        if(strcmp(enrolled[student_idx][i], "") != 0) {
            char status[10];
            if(marks[student_idx][i] >= 50 && attendance[student_idx][i] >= 75) {
                strcpy(status, "PASS");
            } else {
                strcpy(status, "FAIL");
            }
            
            printf("%-12s %-20s %-8.1f %-12.1f%% %-8.2f %-10s\n",
                   courses[i][0], courses[i][1], marks[student_idx][i],
                   attendance[student_idx][i], calculateCourseGPA(student_idx, i), status);
        }
    }
    
    printf("================================================================================\n");
    printf("CUMULATIVE GPA: %.2f\n", calculateCumulativeGPA(student_idx));
}

void displayCourseReport() {
    char courseID[MAX_ID_LENGTH];
    
    printf("\n=== COURSE REPORT ===\n");
    printf("Enter Course ID: ");
    scanf("%s", courseID);
    
    int course_idx = findCourseByID(courseID);
    if(course_idx == -1) {
        printf("Course not found!\n");
        return;
    }
    
    printf("\nCOURSE REPORT FOR: %s (%s)\n", courses[course_idx][1], courses[course_idx][0]);
    printf("Max Marks: %s, Credit Hours: %s\n", courses[course_idx][2], courses[course_idx][3]);
    printf("================================================================================\n");
    printf("%-12s %-20s %-8s %-12s %-8s\n", 
           "Student ID", "Student Name", "Marks", "Attendance", "GPA");
    printf("================================================================================\n");
    
    float highest = -1, lowest = 101, totalMarks = 0, totalAttendance = 0;
    int enrolledCount = 0;
    
    for(int i = 0; i < student_count; i++) {
        if(strcmp(enrolled[i][course_idx], "") != 0 && marks[i][course_idx] != -1) {
            enrolledCount++;
            float studentMarks = marks[i][course_idx];
            float studentAttendance = attendance[i][course_idx];
            float studentGPA = calculateCourseGPA(i, course_idx);
            
            printf("%-12s %-20s %-8.1f %-12.1f%% %-8.2f\n",
                   students[i][0], students[i][1], studentMarks,
                   studentAttendance, studentGPA);
            
            if(studentMarks > highest) highest = studentMarks;
            if(studentMarks < lowest) lowest = studentMarks;
            totalMarks += studentMarks;
            totalAttendance += studentAttendance;
        }
    }
    
    printf("================================================================================\n");
    if(enrolledCount > 0) {
        printf("Highest Marks: %.1f\n", highest);
        printf("Lowest Marks: %.1f\n", lowest);
        printf("Average Marks: %.1f\n", totalMarks / enrolledCount);
        printf("Average Attendance: %.1f%%\n", totalAttendance / enrolledCount);
    } else {
        printf("No students enrolled in this course.\n");
    }
}

void displayTopper() {
    if(student_count == 0) {
        printf("No students in the system!\n");
        return;
    }
    
    printf("\n=== TOPPER BY CUMULATIVE GPA ===\n");
    
    float highestGPA = -1;
    int topperIndex = -1;
    
    for(int i = 0; i < student_count; i++) {
        float gpa = calculateCumulativeGPA(i);
        if(gpa > highestGPA) {
            highestGPA = gpa;
            topperIndex = i;
        }
    }
    
    if(topperIndex != -1 && highestGPA > 0) {
        printf("Topper: %s (%s)\n", students[topperIndex][1], students[topperIndex][0]);
        printf("Cumulative GPA: %.2f\n", highestGPA);
    } else {
        printf("No valid GPA data available!\n");
    }
}

void displayAttendanceWarning() {
    printf("\n=== ATTENDANCE WARNING LIST (<75%) ===\n");
    printf("================================================================================\n");
    printf("%-12s %-20s %-12s %-15s %-10s\n", 
           "Student ID", "Student Name", "Course ID", "Course Name", "Attendance");
    printf("================================================================================\n");
    
    int warningCount = 0;
    
    for(int i = 0; i < student_count; i++) {
        for(int j = 0; j < course_count; j++) {
            if(strcmp(enrolled[i][j], "") != 0 && attendance[i][j] < 75 && attendance[i][j] >= 0) {
                printf("%-12s %-20s %-12s %-15s %-10.1f%%\n",
                       students[i][0], students[i][1], courses[j][0], courses[j][1], attendance[i][j]);
                warningCount++;
            }
        }
    }
    
    if(warningCount == 0) {
        printf("No attendance warnings!\n");
    } else {
        printf("Total warnings: %d\n", warningCount);
    }
}

void coursePerformanceAnalysis() {
    printf("\n=== COURSE PERFORMANCE ANALYSIS ===\n");
    printf("================================================================================\n");
    printf("%-12s %-20s %-10s %-12s %-15s\n", 
           "Course ID", "Course Name", "Avg Marks", "Pass Rate%", "Performance");
    printf("================================================================================\n");
    
    float highestAvg = -1, lowestAvg = 101;
    int bestCourse = -1, worstCourse = -1;
    
    for(int i = 0; i < course_count; i++) {
        float totalMarks = 0;
        int enrolledCount = 0;
        int passCount = 0;
        
        for(int j = 0; j < student_count; j++) {
            if(strcmp(enrolled[j][i], "") != 0 && marks[j][i] != -1) {
                enrolledCount++;
                totalMarks += marks[j][i];
                if(marks[j][i] >= 50) passCount++;
            }
        }
        
        if(enrolledCount > 0) {
            float avgMarks = totalMarks / enrolledCount;
            float passRate = (float)passCount / enrolledCount * 100;
            char performance[15];
            
            if(avgMarks >= 80) strcpy(performance, "EXCELLENT");
            else if(avgMarks >= 70) strcpy(performance, "GOOD");
            else if(avgMarks >= 60) strcpy(performance, "AVERAGE");
            else if(avgMarks >= 50) strcpy(performance, "POOR");
            else strcpy(performance, "VERY POOR");
            
            printf("%-12s %-20s %-10.1f %-12.1f %-15s\n",
                   courses[i][0], courses[i][1], avgMarks, passRate, performance);
            
            if(avgMarks > highestAvg) {
                highestAvg = avgMarks;
                bestCourse = i;
            }
            if(avgMarks < lowestAvg) {
                lowestAvg = avgMarks;
                worstCourse = i;
            }
        }
    }
    
    printf("================================================================================\n");
    if(bestCourse != -1) {
        printf("Best Performing Course: %s (Avg: %.1f)\n", courses[bestCourse][1], highestAvg);
        printf("Worst Performing Course: %s (Avg: %.1f)\n", courses[worstCourse][1], lowestAvg);
    }
}

void searchStudent() {
    char searchTerm[MAX_NAME_LENGTH];
    int searchType;
    
    printf("\n=== SEARCH STUDENT ===\n");
    printf("1. Search by ID\n");
    printf("2. Search by Name\n");
    searchType = getValidatedIntInput("Choose search type: ", 1, 2);
    
    printf("Enter search term: ");
    scanf(" %[^\n]", searchTerm);
    
    printf("\nSearch Results:\n");
    printf("================================================================================\n");
    printf("%-12s %-20s %-10s\n", "Student ID", "Student Name", "GPA");
    printf("================================================================================\n");
    
    int found = 0;
    for(int i = 0; i < student_count; i++) {
        int match = 0;
        if(searchType == 1) {
            match = (strstr(students[i][0], searchTerm) != NULL);
        } else {
            match = (strstr(students[i][1], searchTerm) != NULL);
        }
        
        if(match) {
            printf("%-12s %-20s %-10.2f\n",
                   students[i][0], students[i][1], calculateCumulativeGPA(i));
            found = 1;
        }
    }
    
    if(!found) {
        printf("No students found!\n");
    }
}

void searchCourse() {
    char searchTerm[MAX_NAME_LENGTH];
    int searchType;
    
    printf("\n=== SEARCH COURSE ===\n");
    printf("1. Search by ID\n");
    printf("2. Search by Name\n");
    searchType = getValidatedIntInput("Choose search type: ", 1, 2);
    
    printf("Enter search term: ");
    scanf(" %[^\n]", searchTerm);
    
    printf("\nSearch Results:\n");
    printf("================================================================================\n");
    printf("%-12s %-20s %-10s %-12s\n", "Course ID", "Course Name", "Max Marks", "Credits");
    printf("================================================================================\n");
    
    int found = 0;
    for(int i = 0; i < course_count; i++) {
        int match = 0;
        if(searchType == 1) {
            match = (strstr(courses[i][0], searchTerm) != NULL);
        } else {
            match = (strstr(courses[i][1], searchTerm) != NULL);
        }
        
        if(match) {
            printf("%-12s %-20s %-10s %-12s\n",
                   courses[i][0], courses[i][1], courses[i][2], courses[i][3]);
            found = 1;
        }
    }
    
    if(!found) {
        printf("No courses found!\n");
    }
}

void bubbleSort(float arr[], int indices[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                // Swap values
                float tempVal = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempVal;
                
                // Swap indices
                int tempIdx = indices[j];
                indices[j] = indices[j+1];
                indices[j+1] = tempIdx;
            }
        }
    }
}

void sortStudentsByGPA() {
    if(student_count == 0) {
        printf("No students in the system!\n");
        return;
    }
    
    printf("\n=== STUDENTS SORTED BY GPA (DESCENDING) ===\n");
    printf("================================================================================\n");
    printf("%-5s %-12s %-20s %-10s\n", "Rank", "Student ID", "Student Name", "GPA");
    printf("================================================================================\n");
    
    float gpas[MAX_STUDENTS];
    int indices[MAX_STUDENTS];
    int validCount = 0;
    
    for(int i = 0; i < student_count; i++) {
        float gpa = calculateCumulativeGPA(i);
        if(gpa > 0) {
            gpas[validCount] = gpa;
            indices[validCount] = i;
            validCount++;
        }
    }
    
    if(validCount > 0) {
        bubbleSort(gpas, indices, validCount);
        
        for(int i = 0; i < validCount; i++) {
            printf("%-5d %-12s %-20s %-10.2f\n",
                   i+1, students[indices[i]][0], students[indices[i]][1], gpas[i]);
        }
    } else {
        printf("No valid GPA data available!\n");
    }
}

void sortStudentsByTotalMarks() {
    if(student_count == 0) {
        printf("No students in the system!\n");
        return;
    }
    
    printf("\n=== STUDENTS SORTED BY TOTAL MARKS (DESCENDING) ===\n");
    printf("================================================================================\n");
    printf("%-5s %-12s %-20s %-12s\n", "Rank", "Student ID", "Student Name", "Total Marks");
    printf("================================================================================\n");
    
    float totalMarks[MAX_STUDENTS];
    int indices[MAX_STUDENTS];
    int validCount = 0;
    
    for(int i = 0; i < student_count; i++) {
        float total = 0;
        int courseCount = 0;
        
        for(int j = 0; j < course_count; j++) {
            if(strcmp(enrolled[i][j], "") != 0 && marks[i][j] != -1) {
                total += marks[i][j];
                courseCount++;
            }
        }
        
        if(courseCount > 0) {
            totalMarks[validCount] = total;
            indices[validCount] = i;
            validCount++;
        }
    }
    
    if(validCount > 0) {
        bubbleSort(totalMarks, indices, validCount);
        
        for(int i = 0; i < validCount; i++) {
            printf("%-5d %-12s %-20s %-12.1f\n",
                   i+1, students[indices[i]][0], students[indices[i]][1], totalMarks[i]);
        }
    } else {
        printf("No valid marks data available!\n");
    }
}

void sortCoursesByAvgMarks() {
    if(course_count == 0) {
        printf("No courses in the system!\n");
        return;
    }
    
    printf("\n=== COURSES SORTED BY AVERAGE MARKS (DESCENDING) ===\n");
    printf("================================================================================\n");
    printf("%-5s %-12s %-20s %-12s %-10s\n", "Rank", "Course ID", "Course Name", "Avg Marks", "Students");
    printf("================================================================================\n");
    
    float avgMarks[MAX_COURSES];
    int enrollment[MAX_COURSES];
    int indices[MAX_COURSES];
    int validCount = 0;
    
    for(int i = 0; i < course_count; i++) {
        float total = 0;
        int count = 0;
        
        for(int j = 0; j < student_count; j++) {
            if(strcmp(enrolled[j][i], "") != 0 && marks[j][i] != -1) {
                total += marks[j][i];
                count++;
            }
        }
        
        if(count > 0) {
            avgMarks[validCount] = total / count;
            enrollment[validCount] = count;
            indices[validCount] = i;
            validCount++;
        }
    }
    
    if(validCount > 0) {
        bubbleSort(avgMarks, indices, validCount);
        
        for(int i = 0; i < validCount; i++) {
            printf("%-5d %-12s %-20s %-12.1f %-10d\n",
                   i+1, courses[indices[i]][0], courses[indices[i]][1], 
                   avgMarks[i], enrollment[i]);
        }
    } else {
        printf("No valid course data available!\n");
    }
}

void sortCoursesByEnrollment() {
    if(course_count == 0) {
        printf("No courses in the system!\n");
        return;
    }
    
    printf("\n=== COURSES SORTED BY ENROLLMENT (DESCENDING) ===\n");
    printf("================================================================================\n");
    printf("%-5s %-12s %-20s %-12s\n", "Rank", "Course ID", "Course Name", "Enrollment");
    printf("================================================================================\n");
    
    int enrollment[MAX_COURSES];
    int indices[MAX_COURSES];
    
    for(int i = 0; i < course_count; i++) {
        enrollment[i] = 0;
        indices[i] = i;
        
        for(int j = 0; j < student_count; j++) {
            if(strcmp(enrolled[j][i], "") != 0) {
                enrollment[i]++;
            }
        }
    }
    
    // Sort by enrollment using bubble sort
    for(int i = 0; i < course_count-1; i++) {
        for(int j = 0; j < course_count-i-1; j++) {
            if(enrollment[j] < enrollment[j+1]) {
                int tempEnroll = enrollment[j];
                enrollment[j] = enrollment[j+1];
                enrollment[j+1] = tempEnroll;
                
                int tempIdx = indices[j];
                indices[j] = indices[j+1];
                indices[j+1] = tempIdx;
            }
        }
    }
    
    for(int i = 0; i < course_count; i++) {
        printf("%-5d %-12s %-20s %-12d\n",
               i+1, courses[indices[i]][0], courses[indices[i]][1], enrollment[i]);
    }
}

int getValidatedIntInput(char prompt[], int min, int max) {
    int value;
    while(1) {
        printf("%s", prompt);
        if(scanf("%d", &value) == 1) {
            if(value >= min && value <= max) {
                return value;
            }
        }
        printf("Invalid input! Please enter a number between %d and %d.\n", min, max);
        while(getchar() != '\n'); // Clear input buffer
    }
}

float getValidatedFloatInput(char prompt[], float min, float max) {
    float value;
    while(1) {
        printf("%s", prompt);
        if(scanf("%f", &value) == 1) {
            if(value >= min && value <= max) {
                return value;
            }
        }
        printf("Invalid input! Please enter a number between %.1f and %.1f.\n", min, max);
        while(getchar() != '\n'); // Clear input buffer
    }
}

void displayMainMenu() {
    printf("\n");
    printf("================================================================\n");
    printf("|              UNIVERSITY MANAGEMENT SYSTEM                    |\n");
    printf("================================================================\n");
    printf("| 1. Add Course                   9. Course Performance        |\n");
    printf("| 2. Add Student                 10. Search Student            |\n");
    printf("| 3. Update Marks                11. Search Course             |\n");
    printf("| 4. Update Attendance           12. Sort Students by GPA      |\n");
    printf("| 5. Display Student Report      13. Sort by Total Marks       |\n");
    printf("| 6. Display Course Report       14. Sort Courses by Avg       |\n");
    printf("| 7. Display Topper              15. Sort by Enrollment        |\n");
    printf("| 8. Attendance Warning List                                   |\n");
    printf("| 0. Exit System                                               |\n");
    printf("================================================================\n");
}