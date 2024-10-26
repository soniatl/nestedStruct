//
//  main.cpp
//  nestedStruct
//
//  Created by Sonia Lopchan on 10/25/24.
//

#include <iostream>
#include <string>
#include "nestedStruct.h"

int main() {
    
    Customer customer = {"Sonia Lopchan","510-7778809",
        {"131 Central Ave", "El Cerrito", "94530" } };
    
    cout << "Name: " <<customer.name<<"\n";
    cout << "Phone Number: " <<customer.phoneNumber<<"\n";
    cout << "Address: " <<customer.address.street<< ", "
    <<customer.address.city<<", "<<customer.address.zipCode<<"\n";
    
    return 0;
    
}
