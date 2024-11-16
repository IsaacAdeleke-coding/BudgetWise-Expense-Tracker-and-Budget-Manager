# BudgetWise: Expense Tracker and Budget Manager

BudgetWise is a C++ program designed to help users track personal expenses, manage budgets, and gain better control of their finances. With a simple command-line interface, BudgetWise allows users to log expenses, view summaries, set budget limits, and receive alerts when they approach or exceed their budget.

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

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/BudgetWise.git
   cd BudgetWise

``
2. Compile the Code: Use a C++ compiler such as g++:
```bash
g++ -o BudgetWise main.cpp Expense.cpp Budget.cpp ExpenseManager.cpp
```
3.Run the Program:
```bash
./BudgetWise
```
4. Navigate the Menu: Use the interactive menu to:
Add new expenses.
View and manage your expenses and budgets.
Save or load your expense data.

##Sample Usage

Here’s an example of how the application works:

Add an expense:
```bash
Enter amount, date, category, description, tags:
50.0 2024-11-15 Food Lunch Subway
```
View all expenses:
```bash
Date: 2024-11-15, Amount: 50.0, Category: Food, Description: Lunch, Tags: Subway
```
Set a budget:
```bash
Enter category and budget amount:
Food 500.0
```
Receive alerts when exceeding budget:
```bash
Alert: Spending in category 'Food' exceeds the budget!
```
Alert: Spending in category 'Food' exceeds the budget!

# Future Enhancements

Graphical User Interface (GUI):
-Enhance the user experience with a GUI using a C++ GUI library like Qt or SFML.
Data Visualization:
-Generate charts and graphs to visualize spending habits and trends.
Cloud Sync:
-Add support for cloud-based storage and synchronization.
Advanced Notifications:
-Include email or SMS alerts for budget notifications.

# Contribution Guidelines

Contributions are welcome! To contribute:

Fork the repository.

Create a new branch for your feature or bug fix.

Commit your changes and submit a pull request.



