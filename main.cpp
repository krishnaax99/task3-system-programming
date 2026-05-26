#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>

using namespace std;

int main() {
    string command;

    cout << "===== MINI SHELL / COMMAND RUNNER =====\n";

    while (true) {
        cout << "\nEnter command (type 'exit' to quit): ";
        getline(cin, command);

        // Exit condition
        if (command == "exit") {
            cout << "Shell terminated.\n";
            break;
        }

        // Empty input handling
        if (command.empty()) {
            cout << "Error: Empty command entered.\n";
            continue;
        }

        pid_t pid = fork();

        // Error in process creation
        if (pid < 0) {
            cerr << "Error: Failed to create process.\n";
            continue;
        }

        // Child process
        if (pid == 0) {
            execlp(command.c_str(), command.c_str(), NULL);

            // If exec fails
            cerr << "Error: Command execution failed.\n";
            exit(1);
        }

        // Parent process waits
        else {
            wait(NULL);
        }
    }

    return 0;
}
