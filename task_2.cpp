#include <iostream>

struct Account
{
    int acc_num;
    std::string user_name;
    double balance;
};

void update_balance(Account& user_acc, const double new_balance)
{
    user_acc.balance = new_balance;
    return;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    Account user_acc;
    std::cout << "Введите номер счёта: ";
    std::cin >> user_acc.acc_num;
    std::cout << "Введите имя владельца: ";
    std::cin >> user_acc.user_name;
    std::cout << "Введите баланс: ";
    std::cin >> user_acc.balance;
    double new_balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;
    update_balance(user_acc, new_balance);
    std::cout << "Ваш счёт : " << user_acc.user_name << " " << user_acc.acc_num << " " << user_acc.balance << std::endl;

}

