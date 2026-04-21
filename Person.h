#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
    public:
          Person();
          Person(string newFirstName, float newWeight, int newAge);

          //destructor
          ~Person();
          //overloaded the add constructor
          float operator+(const Person& otherPerson) const;
          bool operator==(const Person& otherPerson) const;
          bool operator!=(const Person& otherPerson) const;
          bool operator<(const Person& otherPerson) const;
          bool operator>(const Person& otherPerson) const;

          string GetName() const;
          float GetWeight() const;
          int GetAge() const;
          operator float() const;
    private:
        float mWeight;
        string mFirstName;
        int mAge;
        operator int () const;
};