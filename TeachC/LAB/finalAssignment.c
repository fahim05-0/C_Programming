#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STUDENTS 150

typedef struct  {

    long int StudentId ;
    char StudentName[100];
    float MidtermM;
    float FinalM;
    float Total;

}Student;

Student courseRoster [MAX_STUDENTS];

void promptStudentDetails(Student*studentPtr){

    printf("\nEnter student id :");
    scanf("%ld",&studentPtr->StudentId);
    printf("\nEnter student name :"); 
    scanf(" %99[^\n]", &studentPtr->StudentName);
    printf("\nEnter student midterm mark :");
    scanf("%f",&studentPtr->MidtermM);
    printf("\nEnter student final mark :");
    scanf("%f",&studentPtr->FinalM);
    studentPtr->Total=studentPtr->MidtermM + studentPtr->FinalM;

}


void displayStudent(const Student *studentPtr) {
    printf("ID: %ld | Name: %s | Midterm: %.2f | Final: %.2f | Total: %.2f\n",
           studentPtr->StudentId, studentPtr->StudentName,
           studentPtr->MidtermM, studentPtr->FinalM, studentPtr->Total);
}

int findStudentIndexByID(const Student roster[] , int size , int searchID){
    for ( int i =0 ; i < size ; i++){
        if (roster[i].StudentId == searchID)
            return i ;
    }
    return -1;
}

int findTopStudentIndex( const Student roster [] , int size ){
    if(size == 0 )
        return -1;
    int topIndex =0;
    for (int i = 1 ; i< size; i++){
        if ( roster[i].Total >roster[topIndex].Total )
            topIndex=i;
    }
    return topIndex;
}

void addStudent ( Student roster[] ,int *size){

    if(*size >= MAX_STUDENTS){
        printf("\nRoster is full can't add more students");
        return;
    }
    Student temp;
    promptStudentDetails(&temp);
    if(findStudentIndexByID(roster , *size , temp.StudentId) != -1){
        printf("\nerror id %ld already exixt",temp.StudentId);
        return;
    }

    roster[*size] =temp;
    (*size)++;
    printf("\nStudent added succcessfully");
    
}

void displayFullRoster(const Student roster[], int size) {

    if (size == 0) {
        printf("Roster is empty.\n");
        return;
    }
    for (int i = 0; i < size; i++)
        displayStudent(&roster[i]);
}

void searchStudentByID(const Student roster[], int size) {

    long int id;
    printf("Enter Student ID to search: ");
    scanf("%ld", &id);
    int idx = findStudentIndexByID(roster, size, id);
    if (idx == -1)
        printf("Student with ID %ld not found.\n", id);
    else
        displayStudent(&roster[idx]);
}

void showTopStudent(const Student roster[], int size) {

    int idx = findTopStudentIndex(roster, size);
    if (idx == -1)
        printf("Roster is empty.\n");
    else {
        printf("Top Student:\n");
        displayStudent(&roster[idx]);
    }
}

int main() {

    Student courseRoster[MAX_STUDENTS];
    int rosterSize = 0;
    int choice;

    do {
        printf("\n--- CSE1101 Roster Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display Full Roster\n");
        printf("3. Find Student by ID\n");
        printf("4. Show Top Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(courseRoster, &rosterSize); break;
            case 2: displayFullRoster(courseRoster, rosterSize); break;
            case 3: searchStudentByID(courseRoster, rosterSize); break;
            case 4: showTopStudent(courseRoster, rosterSize); break;
            case 5: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}