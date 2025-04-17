# 📝 To-Do List Manager

A colorful, feature-rich command-line To-Do List application built in C++. This application helps you manage your tasks efficiently with priority sorting, due dates, time management, and more!

---

## 📌 Project Overview

To-Do List Manager is a C++ console application that provides a comprehensive solution for task management. The application features a visually appealing interface with ANSI color formatting, smooth animations, and a robust task management system. Perfect for students, professionals, or anyone looking to organize their daily activities.

![Image Alt](https://github.com/Praneel2309/To-Do-List/blob/main/WhatsApp%20Image%202025-04-16%20at%2013.47.36.jpeg?raw=true)
A colorful ASCII art splash screen displaying "TO-DO LIST" with a checkmark logo above it, prompting the user to press "ENTER" to continue.


![Image Alt](https://github.com/Praneel2309/To-Do-List/blob/main/WhatsApp%20Image%202025-04-16%20at%2013.48.31.jpeg?raw=true)

The main menu interface of a To-Do List Manager showing nine color-coded options including adding, viewing, sorting, and managing tasks, with a prompt asking the user to enter their choice.



---

## ❓ Features & Functionality

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

- 🧱 **Structs**: The `Task` struct encapsulates all task-related information
- 🧮 **Vectors**: Used for dynamic task collection management
- 🔤 **Strings**: For text data including task names, dates, and times
- 📂 **File Streams**: For reading and writing task data to persistent storage
- 🌈 **ANSI Color Codes**: Constants for UI enhancement

---

## ⚖️ Design Decisions

| Feature                    | Pros                                            | Cons                                              |
|----------------------------|--------------------------------------------------|---------------------------------------------------|
| **Console-based UI**       | Simple, lightweight, works on most systems       | Limited graphical capabilities                     |
| **ANSI color formatting**  | Enhances UI without external libraries           | May not work on all console environments           |
| **File-based storage**     | Simple implementation, no database required      | Limited querying capabilities                      |
| **In-memory task list**    | Fast operations, straightforward implementation  | Limited by available memory                        |
| **Text-based input**       | Easy to implement, familiar interface            | Requires validation, prone to input errors         |

---

## 🚀 Getting Started

### Prerequisites

- ✅ C++ compiler (supporting C++11 or later)
- ✅ Terminal that supports ANSI color codes (most modern terminals do)


## 📚 Usage Guide

🎬 Launch the app to see the animated intro  
🧭 Navigate using the numbered menu  
➕ Add your first task using option 1  
🔁 Use options 2–9 to manage your tasks  
💾 Use option 7 to save and exit  

---

## 🔧 Future Enhancements

🔁 Add recurring tasks  
🗂️ Task categorization & filtering  
🔍 Search tasks  
⏰ Reminder notifications  
🔗 Task dependencies  
📤 Export to CSV / JSON  
👥 User accounts for multi-user use  

---
# 📝 To-Do List Application

## 👥 Team - Bug Busters 🏆

This project was developed by **Bug Busters**, a passionate and dedicated team from **Dhirubhai Ambani University (DAU)**. From ideation to deployment, we put our minds together to build a sleek and intuitive **To-Do List Application** that goes beyond simple task management with features like dynamic filtering, task prioritization, and a clean, responsive UI.

---

## 💡 Our Journey

Our journey involved deep dives into frontend-backend integration, refining user interaction, and ensuring a seamless experience across devices. Whether it was designing the task lifecycle, optimizing the UI/UX, or implementing real-time updates, every line of code reflected our commitment to quality and functionality.

We faced challenges along the way—structuring the codebase for scalability, syncing data efficiently, and ensuring a bug-free user flow. But each obstacle helped us grow as developers, strengthened our teamwork, and pushed us to think creatively and critically about user-centric software design.

---

This app is more than a productivity tool; it's a **symbol of our collaboration, growth, and shared love for solving real-world problems through code**. We hope this To-Do List makes your day a little more organized—because building it certainly made ours better! ✅🚀

---

## 👨‍💻 Team Members

- 📌 Nihar Patel - 202401148  
- 📌 Raj Patel - 202401153  
- 📌 Praneel Sharma - 202401166  
- 📌 Pranshu Patel - 202401167


## 🧩 Contributing

👋 Contributions are welcome! Make this tool even better:

🍴 Fork the repo  
🌿 Create a branch: `git checkout -b feature/AmazingFeature`  
💾 Commit your changes: `git commit -m 'Add some AmazingFeature'`  
🚀 Push to GitHub: `git push origin feature/AmazingFeature`  
📬 Open a Pull Request  

---


## 👏 Acknowledgments

🎨 ANSI color inspiration from open-source projects  
🖼️ ASCII art techniques for the intro animation  
💻 The C++ Standard Library for data handling and file I/O  

### Compilation

```bash
g++ -std=c++11 todo_list_manager.cpp -o todo_list_manager
