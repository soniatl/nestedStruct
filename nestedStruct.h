//
//  nestedStruct.h
//  nestedStruct
//
//  Created by Sonia Lopchan on 10/25/24.
//create a new structure for representing an address. Each address should have three members, street, city and zip code. Once you define the structure, then nest it within the customer structure you defined earlier, finally initialize a complete customer object.

using namespace std;

struct Address {
    string street, city;
    string zipCode;
};
struct Customer{
    string name;
    string phoneNumber;
    Address address;
};


