# ✅ To-Do List Manager - C++ Project 📝🚀

## 📌 Overview  
This is a console-based **To-Do List Manager** 📋, built using C++. It allows users to add, update, mark, delete, and view their daily tasks 🧠💡. With a user-friendly interface and smooth console operations, this app is perfect for staying organized and productive! 🚀

---

## 📜 Function Overview  
This document highlights the core functions used in the To-Do List Manager. Each function is essential for enabling CRUD (Create, Read, Update, Delete) operations on tasks, along with helpful utilities to streamline task management.

---

## 🎮 Function Table  

| 🔹 Function Name           | ✨ Description                                                        |
|---------------------------|------------------------------------------------------------------------|
| 🆕 `addTask()`             | ➕ Adds a new task to the to-do list and saves it to the file          |
| 🔍 `viewTasks()`           | 📖 Displays all current tasks, along with their status (done/pending) |
| ✏️ `updateTask()`         | 🔄 Modifies the content of an existing task                            |
| ✅ `markTaskCompleted()`   | ✔️ Marks a task as completed                                           |
| ❌ `deleteTask()`          | 🗑️ Deletes a task from the list                                        |
| 💾 `saveTasksToFile()`     | 💽 Saves all tasks to the file for persistence                         |
| 📂 `loadTasksFromFile()`   | 📥 Loads existing tasks from the file when the program starts          |

---

## 🌟 Features  

### 📝 Task Management  
✅ Add, update, delete, and mark tasks as complete  
✅ View all tasks with clear status indicators  
✅ Tasks saved to a file for future access  

### 🔐 File Persistence  
✅ Automatically saves tasks to a local file  
✅ Loads tasks on startup so nothing is lost  

### 👀 Clean UI & Console Design  
✅ Easy-to-navigate text menu  
✅ Numbered task list for quick reference  
✅ Confirmation messages for each action  

---

## ⌨️ Menu Controls  

| 🕹️ Option | 🎯 Action                   |
|----------|-----------------------------|
| 1️⃣       | ➕ Add a new task            |
| 2️⃣       | ✏️ Update an existing task  |
| 3️⃣       | ✅ Mark a task as complete  |
| 4️⃣       | ❌ Delete a task            |
| 5️⃣       | 🔍 View all tasks           |
| 6️⃣       | 🚪 Exit the application     |

Master your tasks with these intuitive controls! 💪

---

## 🛠️ Technologies Used  

- C++ (Standard Library) 🧠  
- File Handling 📁  
- Console I/O 📤📥  
- Simple Text UI 🖥️  

---

## 🔄 Code Design & Logic  

### 💾 How Tasks Are Stored  
Each task contains:
- Task ID (auto-incremented)
- Task description
- Status (pending or completed)

Tasks are stored in a vector and saved in a text file (`tasks.txt`), ensuring persistence between sessions.

### ✏️ How Editing Works  
When updating a task, the user selects the task ID and provides the new text. The program validates the ID and updates accordingly.

### 💥 Error Handling  
- Invalid task numbers are handled gracefully  
- The program checks for file existence and creates it if missing  
- Ensures file data remains consistent and readable  

---

## 🧠 Team - Bug Busters 🏆  

This project was developed by **Bug Busters**, a passionate and dedicated team from **Dhirubhai Ambani University (DAU)**. From concept to code, we aimed to create a simple yet efficient task manager to boost productivity and learn file handling in C++.

💡 Our journey involved brainstorming sessions, debugging marathons, and countless refinements. We implemented dynamic task management, data persistence, and a clean menu-driven UI from scratch.

This app is more than a project—it's a toolkit for organization and a lesson in clean code. 💻💪

### 👨‍💻 Team Members:

- 📌 Praneel Sharma - 202401166 
- 📌 Nihar Patel - 202401148  
- 📌 Raj Patel - 202401153    
- 📌 Pranshu Patel - 202401167  

---

## 🚀 How to Run  

1. Clone the repository or download the `.cpp` file  
2. Open a terminal in the project directory  
3. Compile the code using g++:
   ```bash
   g++ todo_list.cpp -o todo_list
