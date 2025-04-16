# 📝 To-Do List Manager

A colorful, feature-rich command-line To-Do List application built in C++. This application helps you manage your tasks efficiently with priority sorting, due dates, time management, and more!

---

# 📌 Project Overview

To-Do List Manager is a C++ console application that provides a comprehensive solution for task management. The application features a visually appealing interface with ANSI color formatting, smooth animations, and a robust task management system. Perfect for students, professionals, or anyone looking to organize their daily activities.

![Intro Animation Screenshot](placeholder-for-intro-screenshot.png)

![Main Interface Screenshot](placeholder-for-main-interface-screenshot.png)

---

# ❓ Features & Functionality

### What can you do with To-Do List Manager?

- ✅ Add tasks with detailed information (name, priority, due date, time, category)
- 📋 View all tasks in a colorful, organized format
- 🔄 Sort tasks by priority or due date
- ✓ Mark tasks as completed
- 🗑️ Remove unwanted tasks
- ✏️ Edit existing task details
- 💾 Save tasks to file for persistent storage
- 🟢 View completed tasks separately
- 🟡 View pending tasks separately

### Key Features:

- 🎨 Colorful UI with ANSI color formatting
- 🎬 Smooth intro animation
- 📊 Task categorization and prioritization
- ⏰ Time management with start and end times
- 🧠 Smart validation to prevent scheduling conflicts
- 💾 File I/O for persistent task storage

---

# 🔍 Code Structure Overview

The application code is structured into functions that handle specific aspects of task management:

### Core Components

- `struct Task`: Defines the data structure for task information
- `displayIntroAnimation()`: Creates an engaging startup animation
- `displayMenu()`: Shows the colorful main menu
- `addTask()`: Handles new task creation with validation
- `viewTasks()`: Displays all tasks with status indicators
- `sortAndDisplayTasks()`: Enables sorting by priority or due date
- `markCompleted()`: Updates task completion status
- `removeTask()`: Deletes unwanted tasks
- `editTask()`: Modifies existing task information
- `saveTasks()` and `loadTasks()`: Handle file operations for persistence
- `viewCompletedTasks()` and `viewPendingTasks()`: Filter tasks by status

### Data Types Used

- **Structs**: The `Task` struct encapsulates all task-related information
- **Vectors**: Used for dynamic task collection management
- **Strings**: For text data including task names, dates, and times
- **File Streams**: For reading and writing task data to persistent storage
- **ANSI Color Codes**: Constants for UI enhancement

---

# ⚖️ Design Decisions

| Feature                    | Pros                                            | Cons                                              |
|----------------------------|--------------------------------------------------|---------------------------------------------------|
| **Console-based UI**       | Simple, lightweight, works on most systems       | Limited graphical capabilities                     |
| **ANSI color formatting**  | Enhances UI without external libraries           | May not work on all console environments           |
| **File-based storage**     | Simple implementation, no database required      | Limited querying capabilities                      |
| **In-memory task list**    | Fast operations, straightforward implementation  | Limited by available memory                        |
| **Text-based input**       | Easy to implement, familiar interface            | Requires validation, prone to input errors         |

---

# 🚀 Getting Started

## Prerequisites

- C++ compiler (supporting C++11 or later)
- Terminal that supports ANSI color codes (most modern terminals do)

## Compilation

```bash
g++ -std=c++11 todo_list_manager.cpp -o todo_list_manager

# 📚 Usage Guide

- Launch the application to see the intro animation  
- Navigate through options using the numbered menu  
- Add your first task using option 1  
- Use options 2-9 to manage and organize your tasks  
- Use option 7 to save and exit when finished  

---

# 🔧 Future Enhancements

- Add recurring task functionality  
- Implement task categorization and filtering  
- Add task search capabilities  
- Create reminder notifications  
- Implement task dependencies  
- Add data export features (CSV, JSON)  
- Implement user accounts for multi-user systems  

---

# 🧩 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository  
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)  
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)  
4. Push to the branch (`git push origin feature/AmazingFeature`)  
5. Open a Pull Request  

---

# 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

# 👏 Acknowledgments

- ANSI color formatting ideas from various open-source projects  
- ASCII art techniques for the intro animation  
- C++ standard library for file I/O and data structures  
