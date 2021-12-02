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
  vector<Person> addressbook;

  cout << "Let's add " << kEnteries << " to your address book!\n";
  for (int i = 0; i < kEnteries; i++) {
    cout << "Please enter a full name: "
         << "";
    string name = "";
    getline(cin, name);

    cout << "Please enter a phone number: "
         << "";
    string phone_number = "";
    getline(cin, phone_number);

    Person p;
    p = Person(name, phone_number);
    addressbook.push_back(p);
  }
  cout << "Let's sort your addressbook!\n";
  sort(addressbook.begin(), addressbook.end());

  cout << "Great! Let's print out all the enteries in your addressbook.\n";
  // auto args = vector<string>(argv, argv + argc);
  for (const auto& address : addressbook) {
	  cout << address << "\n";
  }
  cout << "\n";

  return 0;
}
