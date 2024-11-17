//
//  Expense.hpp
//  BudgetWise: Expense Tracker and Budget Manager
//
//  Created by Isaac Adeleke on 11/15/24.
//

#ifndef EXPENSE_HPP
#define EXPENSE_HPP

#include <string>

struct Expense {
    double amount;
    std::string date;
    std::string category;
    std::string description;
    std::string tags;

    Expense(double amt, const std::string &dt, const std::string &cat, const std::string &desc, const std::string &tg)
        : amount(amt), date(dt), category(cat), description(desc), tags(tg) {}
};

#endif
