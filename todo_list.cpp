#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>
#include <chrono>
#include <thread>

// ANSI color and style codes
const std::string RESET = "\033[0m";
// Text colors
const std::string BLACK = "\033[30m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
// Bright colors
const std::string BRIGHT_RED = "\033[91m";
const std::string BRIGHT_GREEN = "\033[92m";
const std::string BRIGHT_YELLOW = "\033[93m";
const std::string BRIGHT_BLUE = "\033[94m";
const std::string BRIGHT_MAGENTA = "\033[95m";
const std::string BRIGHT_CYAN = "\033[96m";
const std::string BRIGHT_WHITE = "\033[97m";
// Text styles
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";
// Background colors
const std::string BG_RED = "\033[41m";
const std::string BG_GREEN = "\033[42m";
const std::string BG_YELLOW = "\033[43m";
const std::string BG_BLUE = "\033[44m";

// Task structure
struct Task {
    std::string name;
    int priority;
    std::string dueDate;
    std::string startTime;
    std::string endTime;
    std::string category;
    bool completed;
};

// Function to display the intro animation with a better tick symbol
// Modified displayIntroAnimation function with ASCII box and stylish text
// Modified displayIntroAnimation function with ASCII box and stylish text
// Modified displayIntroAnimation function with ASCII box and clear TO DO LIST text
void displayIntroAnimation() {
    // Define color constants
    const std::string RESET = "\033[0m";
    const std::string BOLD = "\033[1m";
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string BLUE = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN = "\033[36m";
    const std::string BRIGHT_BLUE = "\033[94m";
    const std::string BRIGHT_WHITE = "\033[97m";
    const std::string BRIGHT_CYAN = "\033[96m";

    std::string GRID = CYAN;

    // Clear screen
    system("clear || cls");

    // Tick animation steps
    std::cout << BOLD << BLUE << "\n\n\n";
    std::cout << "                                                                 \n";
    std::cout << "                                                                 \n";
    std::cout << "                                        \\ \\                      \n";
    std::cout << "                                         \\ \\                     \n";
    std::cout << "                                                                 \n";
    std::cout << RESET;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    system("clear || cls");
    std::cout << BOLD << BLUE << "\n\n\n";
    std::cout << "                                                                 \n";
    std::cout << "                                                                 \n";
    std::cout << "                                        \\ \\                      \n";
    std::cout << "                                         \\ \\                     \n";
    std::cout << "                                          \\ \\                    \n";
    std::cout << RESET;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    system("clear || cls");
    std::cout << BOLD << BRIGHT_BLUE << "\n\n\n";
    std::cout << "                                                / /              \n";
    std::cout << "                                               / /               \n";
    std::cout << "                                        \\ \\   / /                \n";
    std::cout << "                                         \\ \\ / /                 \n";
    std::cout << "                                          \\   /                  \n";
    std::cout << RESET;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    system("clear || cls");
    std::cout << BOLD << BRIGHT_BLUE << "\n\n\n";
    std::cout << "                                                 __              \n";
    std::cout << "                                                / /              \n";
    std::cout << "                                        __     / /               \n";
    std::cout << "                                        \\ \\   / /                \n";
    std::cout << "                                         \\ \\ / /                 \n";
    std::cout << "                                          \\___/                  \n";
    std::cout << RESET;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    // Final animation frame: Tick box + TO DO LIST
    system("clear || cls");
    std::cout << BOLD << BRIGHT_BLUE << "\n\n\n";

    std::cout << "                                     +---------------+\n";
    std::cout << "                                     |               |\n";
    std::cout << "                                     |         __    |\n";
    std::cout << "                                     |        / /    |\n";
    std::cout << "                                     |   __  / /     |\n";
    std::cout << "                                     |   \\ \\/ /      |\n";
    std::cout << "                                     |    \\__/       |\n";
    std::cout << "                                     |               |\n";
    std::cout << "                                     +---------------+\n";

    // TO DO LIST BOX with colored grid
    std::cout << GRID << "                          ================================================" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "                                            " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "      " << BOLD << RED << "_____" << RESET << "              " << BOLD << YELLOW << "____" << RESET << "               " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "     " << BOLD << RED << "|_   _|" << RESET << "  " << BOLD << GREEN << "___" << RESET << "       " << BOLD << YELLOW << "|  _ \\" << RESET << "     " << BOLD << CYAN << "___" << RESET << "      " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << RED << "| |" << RESET << "   " << BOLD << GREEN << "/ _ \\" << RESET << "      " << BOLD << YELLOW << "| | \\ |" << RESET << "   " << BOLD << CYAN << "/ _ \\" << RESET << "     " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << RED << "| |" << RESET << "  " << BOLD << GREEN << "| | | |" << RESET << "     " << BOLD << YELLOW << "| | | |" << RESET << "  " << BOLD << CYAN << "| | | |" << RESET << "    " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << RED << "| |" << RESET << "  " << BOLD << GREEN << "| |_| |" << RESET << "     " << BOLD << YELLOW << "| |_/ |" << RESET << "  " << BOLD << CYAN << "| |_| |" << RESET << "    " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << RED << "|_|" << RESET << "   " << BOLD << GREEN << "\\___/" << RESET << "      " << BOLD << YELLOW << "|____/" << RESET << "    " << BOLD << CYAN << "\\___/" << RESET << "     " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "                                            " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "        " << BOLD << MAGENTA << "_" << RESET << "      " << BOLD << BRIGHT_BLUE << "_" << RESET << "     " << BOLD << GREEN << "_____" << RESET << "   " << BOLD << YELLOW << "_______" << RESET << "        " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << MAGENTA << "| |" << RESET << "    " << BOLD << BRIGHT_BLUE << "| |" << RESET << "   " << BOLD << GREEN << "| ____|" << RESET << " " << BOLD << YELLOW << "|__   __|" << RESET << "       " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << MAGENTA << "| |" << RESET << "    " << BOLD << BRIGHT_BLUE << "| |" << RESET << "   " << BOLD << GREEN << "| |___" << RESET << "     " << BOLD << YELLOW << "| |" << RESET << "          " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << MAGENTA << "| |" << RESET << "    " << BOLD << BRIGHT_BLUE << "| |" << RESET << "   " << BOLD << GREEN << "|____ |" << RESET << "    " << BOLD << YELLOW << "| |" << RESET << "          " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << MAGENTA << "| |__" << RESET << "  " << BOLD << BRIGHT_BLUE << "| |" << RESET << "    " << BOLD << GREEN << "___| |" << RESET << "    " << BOLD << YELLOW << "| |" << RESET << "          " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "       " << BOLD << MAGENTA << "|____|" << RESET << " " << BOLD << BRIGHT_BLUE << "|_|" << RESET << "   " << BOLD << GREEN << "|_____|" << RESET << "    " << BOLD << YELLOW << "|_|" << RESET << "          " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ||" << RESET << "                                            " << GRID << "||" << RESET << "\n";
    std::cout << GRID << "                          ================================================" << RESET << "\n\n";

    // Press Enter Prompt
    std::cout << "Press \"" << GREEN << "E N T E R" << RESET << "\" to continue..." << std::endl;
    std::cin.get();

    system("clear || cls");
}


// Function to display the menu with enhanced colors
void displayMenu() {
    std::cout << BOLD << BRIGHT_CYAN << "==== To-Do List Manager ====" << RESET << std::endl;
    std::cout << BOLD << BLUE << "1. " << RESET << GREEN << "Add Task" << RESET << std::endl;
    std::cout << BOLD << BLUE << "2. " << RESET << CYAN << "View All Tasks" << RESET << std::endl;
    std::cout << BOLD << BLUE << "3. " << RESET << MAGENTA << "Sort and Display Tasks" << RESET << std::endl;
    std::cout << BOLD << BLUE << "4. " << RESET << BRIGHT_GREEN << "Mark Task as Completed" << RESET << std::endl;
    std::cout << BOLD << BLUE << "5. " << RESET << YELLOW << "Remove Task" << RESET << std::endl;
    std::cout << BOLD << BLUE << "6. " << RESET << BRIGHT_MAGENTA << "Edit Task" << RESET << std::endl;
    std::cout << BOLD << BLUE << "7. " << RESET << BOLD << BRIGHT_RED << "Save and Quit" << RESET << std::endl;
    std::cout << BOLD << BLUE << "8. " << RESET << BRIGHT_GREEN << UNDERLINE << "View Completed Tasks" << RESET << std::endl;
    std::cout << BOLD << BLUE << "9. " << RESET << BRIGHT_YELLOW << "View Pending Tasks" << RESET << std::endl;
    std::cout << BOLD << BRIGHT_CYAN << "==========================" << RESET << std::endl;
}

// Function to add a task to the list
void addTask(std::vector<Task>& taskList) {
    Task task;
    std::cout << GREEN << "Enter Task Name: " << RESET;
    std::cin.ignore();
    std::getline(std::cin, task.name);

    std::cout << GREEN << "Enter Priority (1-5): " << RESET;
    std::cin >> task.priority;

    std::cout << GREEN << "Enter Due Date (YYYY-MM-DD): " << RESET;
    std::cin >> task.dueDate;

    std::cout << GREEN << "Enter Start Time (HH:MM AM/PM): " << RESET;
    std::cin.ignore();
    std::getline(std::cin, task.startTime);

    std::cout << GREEN << "Enter End Time (HH:MM AM/PM): " << RESET;
    std::getline(std::cin, task.endTime);

    std::cout << GREEN << "Enter Category: " << RESET;
    std::getline(std::cin, task.category);

    // Check for duplicate due date, start time, and end time
    for (const auto& existingTask : taskList) {
        if (existingTask.dueDate == task.dueDate &&
            existingTask.startTime == task.startTime &&
            existingTask.endTime == task.endTime) {
            std::cout << BOLD << BG_RED << "Error: Two tasks cannot have the same due date, start time, and end time." << RESET << std::endl;
            return; // Exit the function if a duplicate is found
        }
    }

    task.completed = false;
    taskList.push_back(task);
    std::cout << BOLD << BRIGHT_GREEN << "Task added successfully!" << RESET << std::endl;
}

// Function to view all tasks
void viewTasks(const std::vector<Task>& taskList) {
    if (taskList.empty()) {
        std::cout << YELLOW << "No tasks available. Add some tasks first." << RESET << std::endl;
        return;
    }
    
    std::cout << BOLD << CYAN << "==== Task List ====" << RESET << std::endl;
    for (size_t i = 0; i < taskList.size(); ++i) {
        std::cout << BOLD << BLUE << "[" << i + 1 << "] " << RESET;
        if (taskList[i].completed) {
            std::cout << BRIGHT_GREEN << "[Completed] " << RESET;
        } else {
            std::cout << BRIGHT_YELLOW << "[Pending] " << RESET; // Show pending status
        }
        std::cout << WHITE << "Name: " << BRIGHT_WHITE << taskList[i].name << RESET 
                  << WHITE << " | Priority: " << RESET << MAGENTA << taskList[i].priority << RESET
                  << WHITE << " | Due Date: " << RESET << CYAN << taskList[i].dueDate << RESET 
                  << WHITE << " | Start Time: " << RESET << BLUE << taskList[i].startTime << RESET 
                  << WHITE << " | End Time: " << RESET << BLUE << taskList[i].endTime << RESET 
                  << WHITE << " | Category: " << RESET << YELLOW << taskList[i].category << RESET << std::endl;
    }
    std::cout << BOLD << CYAN << "====================" << RESET << std::endl;
}

// Function to view completed tasks
void viewCompletedTasks(const std::vector<Task>& taskList) {
    bool found = false;
    std::cout << BOLD << BRIGHT_GREEN << "==== Completed Tasks ====" << RESET << std::endl;
    for (const auto& task : taskList) {
        if (task.completed) {
            std::cout << BRIGHT_GREEN << "Name: " << BRIGHT_WHITE << task.name << RESET 
                      << WHITE << " | Priority: " << RESET << MAGENTA << task.priority << RESET
                      << WHITE << " | Due Date: " << RESET << CYAN << task.dueDate << RESET 
                      << WHITE << " | Start Time: " << RESET << BLUE << task.startTime << RESET 
                      << WHITE << " | End Time: " << RESET << BLUE << task.endTime << RESET 
                      << WHITE << " | Category: " << RESET << YELLOW << task.category << RESET << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << YELLOW << "No completed tasks available." << RESET << std::endl;
    }
    std::cout << BOLD << BRIGHT_GREEN << "====================" << RESET << std::endl;
}

// Function to view pending tasks
void viewPendingTasks(const std::vector<Task>& taskList) {
    bool found = false;
    std::cout << BOLD << BRIGHT_YELLOW << "==== Pending Tasks ====" << RESET << std::endl;
    for (const auto& task : taskList) {
        if (!task.completed) {
            std::cout << BRIGHT_YELLOW << "Name: " << BRIGHT_WHITE << task.name << RESET 
                      << WHITE << " | Priority: " << RESET << MAGENTA << task.priority << RESET
                      << WHITE << " | Due Date: " << RESET << CYAN << task.dueDate << RESET 
                      << WHITE << " | Start Time: " << RESET << BLUE << task.startTime << RESET 
                      << WHITE << " | End Time: " << RESET << BLUE << task.endTime << RESET 
                      << WHITE << " | Category: " << RESET << YELLOW << task.category << RESET << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << YELLOW << "No pending tasks available." << RESET << std::endl;
    }
    std::cout << BOLD << BRIGHT_YELLOW << "====================" << RESET << std::endl;
}

// Function to sort tasks by priority (ascending order)
bool sortByPriority(const Task& a, const Task& b) {
    return a.priority < b.priority; // Change to ascending order
}

// Function to sort tasks by due date
bool sortByDueDate(const Task& a, const Task& b) {
    return a.dueDate < b.dueDate;
}

// Function to sort and display tasks
void sortAndDisplayTasks(std::vector<Task>& taskList) {
    if (taskList.empty()) {
        std::cout << YELLOW << "No tasks available to sort. Add some tasks first." << RESET << std::endl;
        return;
    }
    
    int sortChoice;
    std::cout << MAGENTA << "Sort tasks by:" << RESET << std::endl;
    std::cout << BLUE << "1. Priority" << RESET << std::endl;
    std::cout << BLUE << "2. Due Date" << RESET << std::endl;
    std::cout << MAGENTA << "Enter your choice: " << RESET;
    std::cin >> sortChoice;

    if (sortChoice == 1) {
        std::sort(taskList.begin(), taskList.end(), sortByPriority);
        std::cout << BRIGHT_MAGENTA << "Tasks sorted by priority (lowest first)." << RESET << std::endl;
    } else if (sortChoice == 2) {
        std::sort(taskList.begin(), taskList.end(), sortByDueDate);
        std::cout << BRIGHT_MAGENTA << "Tasks sorted by due date (earliest first)." << RESET << std::endl;
    } else {
        std::cout << YELLOW << "Invalid choice. Sorting by priority by default." << RESET << std::endl;
        std::sort(taskList.begin(), taskList.end(), sortByPriority);
    }

    viewTasks(taskList);
}

// Function to mark a task as completed
void markCompleted(std::vector<Task>& taskList) {
    if (taskList.empty()) {
        std::cout << YELLOW << "No tasks available to mark as completed. Add some tasks first." << RESET << std::endl;
        return;
    }
    
    viewTasks(taskList); // Show tasks so user knows which index to select
    
    int index;
    std::cout << BRIGHT_GREEN << "Enter the index of the task to mark as completed: " << RESET;
    std::cin >> index;

    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << BOLD << RED << "Invalid input. Please enter a number." << RESET << std::endl;
        return;
    }

    if (index >= 1 && index <= static_cast<int>(taskList.size())) {
        taskList[index - 1].completed = true;
        std::cout << BOLD << BRIGHT_GREEN << "Task '" << taskList[index - 1].name << "' marked as completed!" << RESET << std::endl;
    } else {
        std::cout << BOLD << RED << "Invalid task index. Please try again." << RESET << std::endl;
    }
}

// Function to remove a task
void removeTask(std::vector<Task>& taskList) {
    if (taskList.empty()) {
        std::cout << YELLOW << "No tasks available to remove. Add some tasks first." << RESET << std::endl;
        return;
    }
    
    viewTasks(taskList); // Show tasks so user knows which index to select
    
    int index;
    std::cout << YELLOW << "Enter the index of the task to remove: " << RESET;
    std::cin >> index;

    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << BOLD << RED << "Invalid input. Please enter a number." << RESET << std::endl;
        return;
    }

    if (index >= 1 && index <= static_cast<int>(taskList.size())) {
        std::string taskName = taskList[index - 1].name;
        taskList.erase(taskList.begin() + index - 1);
        std::cout << BOLD << YELLOW << "Task '" << taskName << "' removed successfully!" << RESET << std::endl;
    } else {
        std::cout << BOLD << RED << "Invalid task index. Please try again." << RESET << std::endl;
    }
}

// Function to edit a task
void editTask(std::vector<Task>& taskList) {
    if (taskList.empty()) {
        std::cout << YELLOW << "No tasks available to edit. Add some tasks first." << RESET << std::endl;
        return;
    }
    
    viewTasks(taskList); // Show tasks so user knows which index to select
    
    int index;
    std::cout << BRIGHT_MAGENTA << "Enter the index of the task to edit: " << RESET;
    std::cin >> index;

    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << BOLD << RED << "Invalid input. Please enter a number." << RESET << std::endl;
        return;
    }

    if (index >= 1 && index <= static_cast<int>(taskList.size())) {
        Task& task = taskList[index - 1]; // Get a reference to the task to edit
        std::string oldName = task.name;

        std::cout << BRIGHT_MAGENTA << "Editing Task: " << BRIGHT_WHITE << task.name << RESET << std::endl;
        std::cout << CYAN << "Leave fields blank to keep current values." << RESET << std::endl;

        // Name
        std::cout << WHITE << "Current Name: " << BRIGHT_WHITE << task.name << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new Task Name: " << RESET;
        std::cin.ignore();
        std::string newName;
        std::getline(std::cin, newName);
        if (!newName.empty()) {
            task.name = newName;
        }

        // Priority
        std::cout << WHITE << "Current Priority: " << MAGENTA << task.priority << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new Priority (1-5): " << RESET;
        std::string newPriority;
        std::getline(std::cin, newPriority);
        if (!newPriority.empty()) {
            try {
                int priorityValue = std::stoi(newPriority);
                if (priorityValue >= 1 && priorityValue <= 5) {
                    task.priority = priorityValue;
                } else {
                    std::cout << YELLOW << "Invalid priority value. Using current value." << RESET << std::endl;
                }
            } catch (const std::exception& e) {
                std::cout << YELLOW << "Invalid input. Using current priority." << RESET << std::endl;
            }
        }

        // Due Date
        std::cout << WHITE << "Current Due Date: " << CYAN << task.dueDate << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new Due Date (YYYY-MM-DD): " << RESET;
        std::string newDueDate;
        std::getline(std::cin, newDueDate);
        if (!newDueDate.empty()) {
            task.dueDate = newDueDate;
        }

        // Start Time
        std::cout << WHITE << "Current Start Time: " << BLUE << task.startTime << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new Start Time (HH:MM AM/PM): " << RESET;
        std::string newStartTime;
        std::getline(std::cin, newStartTime);
        if (!newStartTime.empty()) {
            task.startTime = newStartTime;
        }

        // End Time
        std::cout << WHITE << "Current End Time: " << BLUE << task.endTime << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new End Time (HH:MM AM/PM): " << RESET;
        std::string newEndTime;
        std::getline(std::cin, newEndTime);
        if (!newEndTime.empty()) {
            task.endTime = newEndTime;
        }

        // Category
        std::cout << WHITE << "Current Category: " << YELLOW << task.category << RESET << std::endl;
        std::cout << BRIGHT_MAGENTA << "Enter new Category: " << RESET;
        std::string newCategory;
        std::getline(std::cin, newCategory);
        if (!newCategory.empty()) {
            task.category = newCategory;
        }

        std::cout << BOLD << BRIGHT_MAGENTA << "Task edited successfully! Changed from '" << oldName << "' to '" << task.name << "'" << RESET << std::endl;
    } else {
        std::cout << BOLD << RED << "Invalid task index. Please try again." << RESET << std::endl;
    }
}

// Function to save tasks to a file
void saveTasks(const std::vector<Task>& taskList) {
    std::ofstream file("tasks.txt");
    if (!file) {
        std::cerr << BG_RED << "Error: Unable to open the file for writing." << RESET << std::endl;
        return;
    }

    for (const Task& task : taskList) {
        file << task.name << "," << task.priority << "," << task.dueDate << ","
             << task.startTime << "," << task.endTime << ","
             << task.category << "," << (task.completed ? "true" : "false") << std::endl;
    }

    file.close();
    std::cout << BOLD << BRIGHT_GREEN << "Tasks saved to 'tasks.txt' successfully!" << RESET << std::endl;
}

// Function to load tasks from a file
void loadTasks(std::vector<Task>& taskList) {
    std::ifstream file("tasks.txt");
    if (!file) {
        std::cout << YELLOW << "No existing tasks file found. Starting with an empty task list." << RESET << std::endl;
        return;
    }

    taskList.clear();
    std::string line;
    
    while (std::getline(file, line)) {
        if (line.empty()) continue;
        
        Task task;
        std::istringstream iss(line);
        
        // Parse name
        if (!std::getline(iss, task.name, ',')) break;
        
        // Parse priority
        std::string priorityStr;
        if (!std::getline(iss, priorityStr, ',')) break;
        try {
            task.priority = std::stoi(priorityStr);
        } catch (const std::exception& e) {
            task.priority = 1; // Default priority if parsing fails
        }
        
        // Parse due date
        if (!std::getline(iss, task.dueDate, ',')) break;
        
        // Parse start time
        if (!std::getline(iss, task.startTime, ',')) break;
        
        // Parse end time
        if (!std::getline(iss, task.endTime, ',')) break;
        
        // Parse category
        if (!std::getline(iss, task.category, ',')) break;
        
        // Parse completed status
        std::string completedStr;
        if (!std::getline(iss, completedStr)) break;
        task.completed = (completedStr == "true");
        
        taskList.push_back(task);
    }

    file.close();
    std::cout << BRIGHT_CYAN << "Loaded " << taskList.size() << " tasks from file." << RESET << std::endl;
}

int main() {
    std::vector<Task> taskList;
    
    // Display the intro animation
    displayIntroAnimation();
    
    loadTasks(taskList);

    int choice;
    do {
        displayMenu();
        std::cout << CYAN << "Enter your choice: " << RESET;
        
        // Check if input is valid
        if (!(std::cin >> choice)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << BOLD << RED << "Invalid input. Please enter a number." << RESET << std::endl;
            continue;
        }

        switch (choice) {
            case 1:
                addTask(taskList);
                break;
            case 2:
                viewTasks(taskList);
                break;
            case 3:
                sortAndDisplayTasks(taskList);
                break;
            case 4:
                markCompleted(taskList);
                break;
            case 5:
                removeTask(taskList);
                break;
            case 6:
                editTask(taskList);
                break;
            case 7:
                saveTasks(taskList);
                std::cout << BOLD << BRIGHT_RED << "Tasks saved. Goodbye!" << RESET << std::endl;
                break;
            case 8:
                viewCompletedTasks(taskList); // New case for viewing completed tasks
                break;
            case 9:
                viewPendingTasks(taskList);    // New case for viewing pending tasks
                break;
            default:
                std::cout << BOLD << RED << "Invalid choice. Please enter a number between 1 and 9." << RESET << std::endl;
                break;
        }
        
        // Add a line break for better readability
        std::cout << std::endl;
        
    } while (choice != 7);

    return 0;
}
