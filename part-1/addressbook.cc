// Grace Lee
// CPSC 120-01
// 2021-10-28
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab 08-01
//
// This program adds adresses to a person
//
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "person.h"

using namespace std;

/// Entry point to the addressbook program
/// \remark This program takes no arguments. All the input is driven
/// by interactive prompts.
int main(int argc, char* argv[]) {
  /// Number of enteries in the address book.
  const int kEnteries = 3;
  /// The address book is C++ Vector object that contains Person objects.
  // TODO: declare a variable named addressbook which is a vector of
  // Person objects.
  vector<Person> addressbook;

  cout << "Let's add " << kEnteries << " to your address book!\n";
  for (int i = 0; i < kEnteries; i++) {
    // TODO: Print out a prompt for the computer user to enter a person's name
    // TODO: Declare a string variable named `name` to store the person's name.
    // TODO: Using getline(), read from cin and store into `name`; read up to
    // '\n'.
    string name = "";
    cout << "Please enter a full name: " << "";
    cin >> name;
    getline(cin, name);

    // TODO: Print out a prompt for the computer user to enter a
    // person's phone number.
    // TODO: Declare a string variable named `phone_number` to store
    // the person's phone number.
    // TODO: Using getline(), read from cin and store into `phone_number`;
    // read up to '\n'.
    string phone_number = "";
    cout << "Please enter a phone number: " << "";
    cin >> phone_number;
    getline(cin, phone_number);

    // TODO: Declare a variable named `p` which is of type Person. Intialize
    // it with the name and phone number that was read in from cin.
    // TODO: Use the push_back() method to insert into the vector the person
    // that was just created.
    // https://en.cppreference.com/w/cpp/container/vector/push_back
    Person p;
    p = Person(name, phone_number);
    addressbook.push_back(p);
  }
  cout << "Let's sort your addressbook!\n";
  sort(addressbook.begin(), addressbook.end());
  // TODO: Sort the address_book vector using sort().
  // https://en.cppreference.com/w/cpp/algorithm/sort

  cout << "Great! Let's print out all the enteries in your addressbook.\n";
  auto args = vector<string>(argv, argv + argc);
  for(const auto& item : args){
	cout << item << "\n";
  // TODO: Using a range-for loop, print out each entry of the addressbook.
  // Remember to use the overloaded << operator to output the person to
  // cout.

  return 0;
}
}
