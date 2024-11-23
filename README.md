# BudgetWise: Expense Tracker and Budget Manager

BudgetWise is a C++ program designed to help users track personal expenses, manage budgets, and gain better control of their finances. With a simple command-line interface, BudgetWise allows users to log expenses, view summaries, set budget limits, and receive alerts when they approach or exceed their budget.

**[Watch the Introduction Video](https://drive.google.com/file/d/1XkPDVwkBrnUnEKUY6D7uFAqSRNrzidwN/view?usp=share_link)**

## Features

- **Expense Tracking**
  - Add, edit, delete, and view expense entries.
  - Categorize expenses and add optional tags for better organization.

- **Budget Management**
  - Set monthly or category-specific budgets.
  - Receive alerts when spending nears or exceeds budget thresholds.

- **Report Generation**
  - View total spending summaries by category or custom timeframes.
  - Export and import expense data in text and binary formats for persistence.

- **Backup and Restore**
  - Save and load expense history for future use.
  - Supports both human-readable (text) and efficient (binary) data formats.

## Technologies Used

- **C++ Concepts:**
  - Dynamic memory management with pointers.
  - File I/O operations for data persistence.
  - Structures for organizing expense and budget data.
  - Sorting and searching algorithms for quick access.

- **Data Persistence:**
  - Text-based and binary file storage formats.

## Project Structure

The project consists of the following files:

- `Expense.hpp` and `Expense.cpp`: Define the `Expense` structure for logging individual expenses.
- `Budget.hpp` and `Budget.cpp`: Manage category-specific budgets and track budget limits.
- `ExpenseManager.hpp` and `ExpenseManager.cpp`: Handle the main operations such as adding expenses, viewing summaries, managing budgets, and saving/loading files.
- `main.cpp`: Entry point for the application, providing the command-line interface.

