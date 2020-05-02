#ifndef INSUFFICIENT_FUNDS_EXCEPTION_H_
#define INSUFFICIENT_FUNDS_EXCEPTION_H_

class InsufficientFundsException : std::exception {

	public:
	InsufficientFundsException() noexcept = default;
	~InsufficientFundsException() = default;

	virtual const char *what() const noexcept {
	
		return "Insufficient funds to withdraw.";
	} 
};

#endif
