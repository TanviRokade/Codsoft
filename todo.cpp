#include <iostream>
#include <string>
using namespace std;

const int MAX_T = 100;
void displayMenu() {
    cout << "\n-------- To-Do List ---------\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Completed \n";
    cout << "4. Remove Task\n";
    cout << "5. Quit\n";
    
}

int main() {
    string tasks[MAX_T];
    bool completed[MAX_T] = {0}; 
    int t_Count = 0;
    while (true) {
        displayMenu();

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (t_Count > MAX_T) {
                    cout << "Task list is full!\n";
                }
                else {
                    cin.ignore(); 
                    cout << "Enter a new task: ";
                    getline(cin, tasks[t_Count]);
                    t_Count++;
                    cout << "Task added!\n";
                }
                break;
            case 2:
                if (t_Count < 0) {
                    cout << "Task list is empty!\n";
                    
                } else {
                    cout << "\n-------Task List -------\n";
                    for (int i = 0; i < t_Count; i++) {
                        cout << (completed[i] ? "[Done] " : "[ ] ") << tasks[i] << "\n";
                    }
                   
                    
                }
                break;
            case 3:
                if (t_Count > 0) {
                    int taskNumber;
                    cout << "Enter the task number to mark as completed: ";
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= t_Count) {
                        completed[taskNumber - 1] = true;
                        cout << "Task marked as completed!\n";
                    } else {
                        cout << "Invalid task number!\n";
                    }
                } else {
                    cout << "Task list is empty!\n";
                }
                break;
            case 4:
                if (t_Count > 0) {
                    int taskNumber;
                    cout << "Enter the task number to remove: ";
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= t_Count) {
                        for (int i = taskNumber - 1; i < t_Count - 1; i++) {
                            tasks[i] = tasks[i + 1];
                            completed[i] = completed[i + 1];
                        }
                        t_Count--;
                        cout << "Task removed!\n";
                    } else {
                        cout << "Invalid task number!\n";
                    }
                } else {
                    cout << "Task list is empty!\n";
                }
                break;
            case 5:
                cout << "Exited\n";
                return 0;
            default:
                cout << "Invalid choice, Try again.\n";
        }
    }

    return 0;
}