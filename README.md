# 📝 To-Do List Manager

A colorful, feature-rich command-line To-Do List application built in C++. This application helps you manage your tasks efficiently with priority sorting, due dates, time management, and more!

---

## 📌 Project Overview

To-Do List Manager is a C++ console application that provides a comprehensive solution for task management. The application features a visually appealing interface with ANSI color formatting, smooth animations, and a robust task management system. Perfect for students, professionals, or anyone looking to organize their daily activities.

### 🖼️ Screenshots

#### 🎬 Intro Animation
![Intro Animation](assets/intro.png)

#### 📋 Main Interface
![Main Menu](assets/menu.png)

---

## ❓ Features & Functionality

### What can you do with To-Do List Manager?

✅ Add tasks with detailed information (name, priority, due date, time, category)  
📋 View all tasks in a colorful, organized format  
🔄 Sort tasks by priority or due date  
✓ Mark tasks as completed  
🗑️ Remove unwanted tasks  
✏️ Edit existing task details  
💾 Save tasks to file for persistent storage  
🟢 View completed tasks separately  
🟡 View pending tasks separately  

### Key Features:

🎨 Colorful UI with ANSI color formatting  
🎬 Smooth intro animation  
📊 Task categorization and prioritization  
⏰ Time management with start and end times  
🧠 Smart validation to prevent scheduling conflicts  
💾 File I/O for persistent task storage  

---

## 🔍 Code Structure Overview

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

## ⚖️ Design Decisions

| Feature               | Pros                                        | Cons                               |
|-----------------------|---------------------------------------------|------------------------------------|
| Console-based UI      | Simple, lightweight, cross-platform         | Limited graphical capabilities     |
| ANSI color formatting | Enhances UI without external libraries      | May not work on all consoles       |
| File-based storage    | Simple implementation, no DB required       | Limited querying & scalability     |
| In-memory task list   | Fast and efficient                          | Dependent on system memory         |
| Text-based input      | Easy and universal                         | Prone to human input errors        |

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler (supports C++11 or later)
- Terminal that supports ANSI color codes (like most modern terminals)

### Compilation
```bash
g++ -std=c++11 todo_list_manager.cpp -o todo_list_manager
