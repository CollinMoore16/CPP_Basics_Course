#include <iostream> 

int main() 
{
std :: string user_name;
std :: string user_age;
std :: cout << "what is your name? ";
std :: cin >> user_name;
std :: cout << "what is your age? ";
std :: cin >> user_age;

std :: cout << user_name << std :: endl;
std :: cout << user_age << std :: endl;

return 0;
}