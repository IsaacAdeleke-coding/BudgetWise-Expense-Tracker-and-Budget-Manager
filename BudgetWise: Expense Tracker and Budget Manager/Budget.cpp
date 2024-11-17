//
//  Budget.cpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#include "Budget.hpp"

void Budget::setBudget(const std::string &category, double amount) {
    categoryBudgets[category] = amount;
}

bool Budget::isOverBudget(const std::string &category, double currentAmount) const {
    if (categoryBudgets.find(category) != categoryBudgets.end()) {
        return currentAmount > categoryBudgets.at(category);
    }
    return false;
}
