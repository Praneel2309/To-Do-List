# 📝✨ To-Do List Manager

A colorful, feature-rich **command-line To-Do List application built in C++**!  
This app helps you manage your tasks efficiently with **priority sorting**, **due dates**, **time tracking**, and more — all in a vibrant terminal UI! 🌈💼

---

## 📌 Project Overview

**To-Do List Manager** is a **C++ console application** designed for maximum productivity and clarity.  
Perfect for 🎓 students, 💼 professionals, and anyone who loves to stay organized.

🎨 Beautiful ANSI color formatting  
🎬 Smooth ASCII intro animation  
📁 Robust file-based task storage  
✅ Smart task handling and sorting

![📽️ Intro Animation Screenshot](placeholder-for-intro-screenshot.png)  
![🧾 Main Interface Screenshot](placeholder-for-main-interface-screenshot.png)

---

## ❓ Features & Functionality

### 🛠️ What can you do with To-Do List Manager?

- ✅ Add tasks with name, priority, due date, time, and category  
- 📋 View tasks in a colorful, organized list  
- 🔄 Sort by priority or due date  
- ☑️ Mark tasks as completed  
- 🗑️ Delete tasks you no longer need  
- 📝 Edit existing tasks  
- 💾 Save tasks to file  
- 🟢 View completed tasks  
- 🟡 View pending tasks  

### 🚀 Key Features

- 🎨 Colorful ANSI terminal UI  
- 🎬 ASCII animation splash screen  
- 📊 Categorization and prioritization  
- ⏰ Start and end time tracking  
- 🧠 Smart validation for scheduling conflicts  
- 💾 File I/O for persistent task saving  

---

## 🔍 Code Structure Overview

### 📦 Core Components

- `struct Task`: Defines task data  
- `displayIntroAnimation()`: Fun animated intro  
- `displayMenu()`: Colorful main menu  
- `addTask()`: Task creation and validation  
- `viewTasks()`: List all tasks  
- `sortAndDisplayTasks()`: Sort tasks  
- `markCompleted()`: Complete a task  
- `removeTask()`: Delete task  
- `editTask()`: Modify task details  
- `saveTasks()` / `loadTasks()`: File operations  
- `viewCompletedTasks()` / `viewPendingTasks()`: Filtered views  

### 💾 Data Types Used

- 📦 **Structs** for task encapsulation  
- 🧮 **Vectors** for dynamic storage  
- 🔤 **Strings** for user input and task data  
- 📄 **File Streams** for persistent storage  
- 🎨 **ANSI Color Codes** for UI styling  

---

## ⚖️ Design Decisions

| Feature                  | ✅ Pros                                      | ⚠️ Cons                                      |
|--------------------------|----------------------------------------------|----------------------------------------------|
| Console-based UI         | Lightweight, universal                      | No graphics support                          |
| ANSI color formatting    | Vibrant without libraries                    | Terminal compatibility varies                |
| File-based storage       | Easy to implement, portable                 | No complex querying                          |
| In-memory task list      | Fast, simple                                | Memory-bound                                 |
| Text-based input         | User-friendly, low-overhead                 | Needs good validation                        |

---

## 🚀 Getting Started

### 🧰 Prerequisites

- 🔧 C++ compiler (C++11 or later)
- 💻 Terminal with ANSI color support

## 📚 Usage Guide

- 🎬 Launch the app to see the animated intro  
- 🧭 Navigate using the numbered menu  
- ➕ Add your first task using option 1  
- 🔁 Use options 2–9 to manage your tasks  
- 💾 Use option 7 to save and exit  

---

## 🔧 Future Enhancements

- 🔁 Add recurring tasks  
- 🗂️ Task categorization & filtering  
- 🔍 Search tasks  
- ⏰ Reminder notifications  
- 🔗 Task dependencies  
- 📤 Export to CSV / JSON  
- 👥 User accounts for multi-user use  

---

## 🧩 Contributing

👋 Contributions are welcome! Make this tool even better:

1. 🍴 Fork the repo  
2. 🌿 Create a branch: `git checkout -b feature/AmazingFeature`  
3. 💾 Commit your changes: `git commit -m 'Add some AmazingFeature'`  
4. 🚀 Push to GitHub: `git push origin feature/AmazingFeature`  
5. 📬 Open a Pull Request  

---

## 📄 License

📜 This project is licensed under the **MIT License** – see the `LICENSE` file for details.

---

## 👏 Acknowledgments

- 🎨 ANSI color inspiration from open-source projects  
- 🖼️ ASCII art techniques for the intro animation  
- 💻 The C++ Standard Library for data handling and file I/O  

### 🛠️ Compilation

```bash
g++ -std=c++11 todo_list_manager.cpp -o todo_list_manager
