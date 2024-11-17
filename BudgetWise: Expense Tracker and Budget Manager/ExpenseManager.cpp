//
//  ExpenseManager.cpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#include "ExpenseManager.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>

void ExpenseManager::addExpense(const Expense &expense) {
    expenses.push_back(expense);
}

void ExpenseManager::viewExpenses() const {
    for (const auto &expense : expenses) {
        std::cout << "Date: " << expense.date << ", Amount: " << expense.amount
                  << ", Category: " << expense.category << ", Description: " << expense.description
                  << ", Tags: " << expense.tags << '\n';
    }
}

void ExpenseManager::viewCategorySummary(const std::string &category) const {
    double total = 0.0;
    for (const auto &expense : expenses) {
        if (expense.category == category) {
            total += expense.amount;
        }
    }
    std::cout << "Total spent in category '" << category << "': " << total << '\n';
}

void ExpenseManager::setBudget(const std::string &category, double amount) {
    budget.setBudget(category, amount);
}

void ExpenseManager::checkBudgetAlerts() const {
    std::unordered_map<std::string, double> categoryTotals;

    for (const auto &expense : expenses) {
        categoryTotals[expense.category] += expense.amount;
    }

    for (const auto &category : categoryTotals) {
        if (budget.isOverBudget(category.first, category.second)) {
            std::cout << "Alert: Spending in category '" << category.first << "' exceeds the budget!\n";
        }
    }
}

void ExpenseManager::saveExpensesToFile(const std::string &filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        for (const auto &expense : expenses) {
            file << expense.amount << "," << expense.date << ","
                 << expense.category << "," << expense.description << "," << expense.tags << "\n";
        }
        file.close();
    }
}

void ExpenseManager::loadExpensesFromFile(const std::string &filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        expenses.clear();
        double amount;
        std::string date, category, description, tags;
        while (file >> amount >> date >> category >> description >> tags) {
            expenses.emplace_back(amount, date, category, description, tags);
        }
        file.close();
    }
}
