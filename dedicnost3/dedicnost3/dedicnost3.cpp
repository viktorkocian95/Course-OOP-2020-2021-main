#include <iostream>
#include <vector>
#include "AbstractStringOutput.h"
#include "AbstractCustomer.h"
#include "AbstractRegisteredCustomer.h"
#include "UnregistredUser.h"
#include "CompanyUser.h"
#include "RegisteredUser.h"
#include "MobilePhone.h"
#include "Notebook.h"
#include "Tablet.h"
#include "generators.h"

int main()
{
    srand(time(NULL));
    std::vector<AbstractProduct*> products;
    std::vector<AbstractCustomer*> customers;
    for (int i = 0; i < 20; i++)
    {
        switch (rand() % 2)
        {
            case 0:
                switch (rand() % 3)
                {
                    case 0:
                        customers.push_back(new UnregistredUser(gName(), gDate(), gAddress()));
                        break;
                    case 1:
                        customers.push_back(new CompanyUser(gName(), gDate(), gAddress(), gPass(), gDouble(), gDate(), gDouble(), gDouble()));
                        break;
                    case 2:
                        customers.push_back(new RegisteredUser(gName(), gDate(), gAddress(), gPass(), gDouble(), gDate(), gNick()));
                        break;
                }
                break;
            case 1:
                switch (rand() % 3)
                {
                    case 0:
                        products.push_back(new MobilePhone(gPhoneName(), gDouble(), gColor(), gInt(), gDouble(), gCpu()));
                        break;
                    case 1:
                        products.push_back(new Notebook(gNoteName(), gDouble(), gColor(), gBool(), gBool(), gBool()));
                        break;
                    case 2:
                        products.push_back(new Tablet(gTabName(), gDouble(), gColor(), gBool(), gDouble()));
                        break;
                }
                break;
        }
    }
    
    for (AbstractProduct* prod : products) std::cout << prod->ToString() << std::endl; std::cout << std::endl;
    for (AbstractCustomer* cust : customers) std::cout << cust->ToString() << std::endl;
}