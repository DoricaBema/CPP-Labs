#include <iostream>
using namespace std;

int main() {
    int daysUntilExpiration;

    cout << "Enter days until expiration: ";
    cin >> daysUntilExpiration;

    switch (daysUntilExpiration) {
        case 10:

    cout << "Your subscription will expire soon. Renew now!" <<   endl;
    break;

    case 5:
    case 4:
    case 3:
    case 2:
    cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
    break;

    case 1:
    cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    break;

    case 0:
    cout << "Your subscription has expired." << endl;
    break;

    default:
    cout << "You have an active subscription." << endl;
    break;

    }

    return 0;
}