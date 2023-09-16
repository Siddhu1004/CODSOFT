#include <iostream>
#include <vector>

struct Task {
    std::string description;
    bool completed;
};

// Function to add a task to the list
void addTask(std::vector<Task>& tasks, const std::string& description) {
    tasks.push_back({description, false});
    std::cout << "Task added successfully!" << std::endl;
}

// Function to view tasks
void viewTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks in the list." << std::endl;
    } else {
        std::cout << "Tasks:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::string status = tasks[i].completed ? "Completed" : "Pending";
            std::cout << i + 1 << ". " << tasks[i].description << " - " << status << std::endl;
        }
    }
}

// Function to mark a task as completed
void markCompleted(std::vector<Task>& tasks, size_t taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks[taskIndex].completed = true;
        std::cout << "Task marked as completed!" << std::endl;
    } else {
        std::cout << "Invalid task index." << std::endl;
    }
}

// Function to remove a task
void removeTask(std::vector<Task>& tasks, size_t taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        std::string removedTask = tasks[taskIndex].description;
        tasks.erase(tasks.begin() + taskIndex);
        std::cout << "Task '" << removedTask << "' removed successfully!" << std::endl;
    } else {
        std::cout << "Invalid task index." << std::endl;
    }
}

int main() {
    std::vector<Task> tasks;

    while (true) {
        std::cout << "\nOptions:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark Task as Completed" << std::endl;
        std::cout << "4. Remove Task" << std::endl;
        std::cout << "5. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string taskDescription;
                std::cout << "Enter the task: ";
                std::cin.ignore();
                std::getline(std::cin, taskDescription);
                addTask(tasks, taskDescription);
                break;
            }
            case 2: {
                viewTasks(tasks);
                break;
            }
            case 3: {
                viewTasks(tasks);
                size_t taskIndex;
                std::cout << "Enter the task number to mark as completed: ";
                std::cin >> taskIndex;
                markCompleted(tasks, taskIndex - 1);
                break;
            }
            case 4: {
                viewTasks(tasks);
                size_t taskIndex;
                std::cout << "Enter the task number to remove: ";
                std::cin >> taskIndex;
                removeTask(tasks, taskIndex - 1);
                break;
            }
            case 5: {
                std::cout << "Goodbye!" << std::endl;
                return 0;
            }
            default: {
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
            }
        }
    }

    return 0;
}
