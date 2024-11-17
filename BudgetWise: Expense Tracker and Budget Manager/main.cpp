//
//  main.cpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#include "ExpenseManager.hpp"
#include <iostream>

void displayMenu() {
    std::cout << "Expense Tracker Menu:\n"
              << "1. Add Expense\n"
              << "2. View Expenses\n"
              << "3. View Category Summary\n"
              << "4. Set Budget\n"
              << "5. Check Budget Alerts\n"
              << "6. Save Expenses\n"
              << "7. Load Expenses\n"
              << "0. Exit\n";
}

int main() {
    ExpenseManager manager;
    int choice;

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                double amount;
                std::string date, category, description, tags;
                std::cout << "Enter amount, date, category, description, tags:\n";
                std::cin >> amount >> date >> category >> description >> tags;
                manager.addExpense(Expense(amount, date, category, description, tags));
                break;
            }
            case 2:
                manager.viewExpenses();
                break;
            case 3: {
                std::string category;
                std::cout << "Enter category:\n";
                std::cin >> category;
                manager.viewCategorySummary(category);
                break;
            }
            case 4: {
                std::string category;
                double amount;
                std::cout << "Enter category and budget amount:\n";
                std::cin >> category >> amount;
                manager.setBudget(category, amount);
                break;
            }
            case 5:
                manager.checkBudgetAlerts();
                break;
            case 6: {
                std::string filename;
                std::cout << "Enter filename to save expenses:\n";
                std::cin >> filename;
                manager.saveExpensesToFile(filename);
                break;
            }
            case 7: {
                std::string filename;
                std::cout << "Enter filename to load expenses:\n";
                std::cin >> filename;
                manager.loadExpensesFromFile(filename);
                break;
            }
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
