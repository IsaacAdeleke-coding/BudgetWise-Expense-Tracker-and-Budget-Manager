//
//  ExpenseManager.hpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#ifndef EXPENSEMANAGER_HPP
#define EXPENSEMANAGER_HPP

#include "Expense.hpp"
#include "Budget.hpp"
#include <vector>
#include <string>

class ExpenseManager {
private:
    std::vector<Expense> expenses;
    Budget budget;

public:
    void addExpense(const Expense &expense);
    void viewExpenses() const;
    void viewCategorySummary(const std::string &category) const;
    void setBudget(const std::string &category, double amount);
    void checkBudgetAlerts() const;
    void saveExpensesToFile(const std::string &filename) const;
    void loadExpensesFromFile(const std::string &filename);
};

#endif
