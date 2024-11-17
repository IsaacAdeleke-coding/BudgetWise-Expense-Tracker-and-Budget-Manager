//
//  Budget.hpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#ifndef BUDGET_HPP
#define BUDGET_HPP

#include <string>
#include <unordered_map>

class Budget {
public:
    std::unordered_map<std::string, double> categoryBudgets;
    double totalBudget;

    Budget() : totalBudget(0.0) {}

    void setBudget(const std::string &category, double amount);
    bool isOverBudget(const std::string &category, double currentAmount) const;
};

#endif
