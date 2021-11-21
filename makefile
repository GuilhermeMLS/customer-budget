compilerParams=-Wall #-Wshadow
appName=customer-budget-approval
compiler=g++
#compiler=/opt/homebrew/Cellar/gcc/11.2.0/bin/aarch64-apple-darwin20-g++-11

all: $(appName)

$(appName): main.o CustomerBudget.o CfoCustomerBudgetHandler.o DirectorCustomerBudgetHandler.o ManagerCustomerBudgetHandler.o SellerCustomerBudgetHandler.o
	$(compiler) -o $(appName) main.o CfoCustomerBudgetHandler.o CustomerBudget.o DirectorCustomerBudgetHandler.o ManagerCustomerBudgetHandler.o SellerCustomerBudgetHandler.o $(compilerParams)

main.o: main.cpp
	$(compiler) -c main.cpp $(compilerParams)

CustomerBudget.o: customer-budget/CustomerBudget.hpp customer-budget/CustomerBudget.cpp
	$(compiler) -c customer-budget/CustomerBudget.cpp $(compilerParams)

CfoCustomerBudgetHandler.o: customer-budget/CfoCustomerBudgetHandler.hpp customer-budget/CfoCustomerBudgetHandler.cpp
	$(compiler) -c customer-budget/CfoCustomerBudgetHandler.cpp $(compilerParams)

DirectorCustomerBudgetHandler.o: customer-budget/DirectorCustomerBudgetHandler.hpp customer-budget/DirectorCustomerBudgetHandler.cpp
	$(compiler) -c customer-budget/DirectorCustomerBudgetHandler.cpp $(compilerParams)

ManagerCustomerBudgetHandler.o: customer-budget/ManagerCustomerBudgetHandler.hpp customer-budget/ManagerCustomerBudgetHandler.cpp
	$(compiler) -c customer-budget/ManagerCustomerBudgetHandler.cpp $(compilerParams)

SellerCustomerBudgetHandler.o: customer-budget/SellerCustomerBudgetHandler.hpp customer-budget/SellerCustomerBudgetHandler.cpp
	$(compiler) -c customer-budget/SellerCustomerBudgetHandler.cpp $(compilerParams)


clean:
	rm -f *.o *.gch $(appName)
