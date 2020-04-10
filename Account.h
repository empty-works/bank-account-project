#include <iostream>
#include <string>

class Account {

private:
protected:
	static constexpr const std::string name{"Unnamed"};
	static constexpr double amount{0.0};	
public:
	Account();
	~Account();
	
	int deposit(const size_t amount);
	int withdraw();	
};
