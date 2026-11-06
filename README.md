# musafarvalayankaden-STUDENT_RECORD_MANAGEMENT_SYSTEM
Objective:console-based **Student Record Management System** implemented in C using **Singly Linked Lists (SLL)** and file persistence. This project allows users to efficiently manage student records—including names, automatically assigned unique roll numbers, and academic percentages—with full data persistence across sessions.

---

## Features

* **Dynamic Data Structure**: Utilizes singly linked lists for dynamic memory allocation, allowing seamless insertion, deletion, and modification of records without fixed-size limitations.
* **Automated Roll Number Assignment**: Automatically tracks and assigns the lowest available unique roll number to new entries.
* **Persistent Storage**: Automatically loads records from a persistent file (`student.dat`) upon startup and provides options to save or safely exit.
* **Comprehensive Record Management**:
  * **Add**: Insert new student records with range validation for percentages (0–100%).
  * **Delete**: Remove records by Roll Number or Name (with safety checks for duplicate names).
  * **Modify**: Update student details dynamically.
  * **Search & Display**: View formatted lists of all stored student records.
  * **Sort**: Sort records alphabetically by name or numerically by percentage.
  * **Reverse**: Reverse the order of the linked list.
  * **Clear All**: Wipe out all active records in memory when needed.

---

## Project Structure

* `student.h`: Header file containing the structure definition (`SLL`) and global function prototypes[cite: 13].
* `stud_main.c`: Driver program handling the interactive user menu and control loop[cite: 12].
* `stud_add.c`: Logic for adding new student nodes and auto-generating roll numbers[cite: 15].
* `stud_del.c`: Logic for deleting individual nodes or clearing the entire list[cite: 14].
* `stud_show.c`: Formatted display functions for rendering records[cite: 9].
* `stud_mod.c`: Implementation for modifying data, sorting, counting nodes, and reversing links[cite: 11].
* `stud_save.c`: File handling routines (`readFile` and `saveFile`) to sync data with `student.dat`[cite: 10].
* `makefile`: Build automation script for compiling and cleaning the project.

---

## 🛠️ Building & Running

### Prerequisites
Make sure you have `gcc`/`cc` and `make` installed on your Linux/Unix system.

### Build using Makefile
You can easily build the binary executable using the included Makefile:

```bash
make
