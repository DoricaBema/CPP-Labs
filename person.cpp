#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string newFirstName, float newWeight, int newAge) {
    mFirstName = newFirstName;
    mWeight = newWeight;
    mAge = newAge;
}

Person::~Person(){
    //Nothing to clean up here
}

float Person::operator+(const Person& otherPerson) const {
    return this->mWeight + otherPerson.mWeight;
}

// Overload == operator: compare all attributes
bool Person::operator==(const Person& otherPerson) const {
    return (this->mFirstName == otherPerson.mFirstName &&
            this->mAge == otherPerson.mAge &&
            this->mWeight == otherPerson.mWeight);
}

bool Person::operator<(const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}

string Person::GetName() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}

int Person::GetAge() const {
    return mAge;
}