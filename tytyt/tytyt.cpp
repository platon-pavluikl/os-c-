#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Simple imitation of an operating system kernel
class Kernel {
public:
    // Function to execute a command
    void executeCommand(const string& command) {
        if (command == "help") {
            displayHelp();
        }
        else if (command == "date") {
            displayDate();
        }
        else if (command == "exit") {
            cout << "Exiting the operating system..." << endl;
            // Additional code for shutting down the OS can be added here
        }
        else {
            cout << "Unknown command. Type 'help' for a list of commands." << endl;
        }
    }

private:
    // Display help information
    void displayHelp() {
        cout << "List of available commands:" << endl;
        cout << " - help: Show this help message" << endl;
        cout << " - date: Display the current date and time" << endl;
        cout << " - exit: Exit the operating system" << endl;
    }

    // Display the current date and time
    void displayDate() {
        // Additional code for getting the current date and time from the system can be added here
        cout << "Current date and time: <placeholder for current date and time>" << endl;
    }
};

int main() {
    Kernel osKernel;

    cout << "Welcome to the simplest operating system!" << endl;

    // Main command input loop
    while (true) {
        cout << "> ";
        string command;
        getline(cin, command);

        // Execute the entered command
        osKernel.executeCommand(command);

        // Check for exiting the OS
        if (command == "exit") {
            break;
        }
    }

    return 0;
}
