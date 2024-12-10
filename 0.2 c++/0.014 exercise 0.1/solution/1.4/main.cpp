#include <iostream>
#include <string>

// Base class for Phone
class Phone {
protected:
    std::string camera;  // Camera specs
    std::string cellular;  // Cellular specs (e.g., 4G, 5G)
    bool canCall;  // Whether the phone supports calling
public:
    // Constructor for base class
    Phone(std::string camera, std::string cellular, bool canCall) 
        : camera(camera), cellular(cellular), canCall(canCall) {}

    // Base class function to show phone details
    void showDetails() const {
        std::cout << "Camera: " << camera << "\n"
                  << "Cellular: " << cellular << "\n"
                  << "Call functionality: " << (canCall ? "Yes" : "No") << "\n";
    }
};

// Derived class for phones with keypads
class PhoneWithKeypad : public Phone {
public:
    PhoneWithKeypad(std::string camera, std::string cellular, bool canCall)
        : Phone(camera, cellular, canCall) {}

    // Function to show details of phones with keypads
    void showDetails() const {
        std::cout << "Type: Phone with Keypad\n";
        Phone::showDetails();  // Call the base class method
    }
};

// Derived class for phones without keypads (smartphones)
class PhoneWithoutKeypad : public Phone {
public:
    PhoneWithoutKeypad(std::string camera, std::string cellular, bool canCall)
        : Phone(camera, cellular, canCall) {}

    // Function to show details of phones without keypads
    void showDetails() const {
        std::cout << "Type: Phone without Keypad (Smartphone)\n";
        Phone::showDetails();  // Call the base class method
    }
};

// Specific Models - Phones with Keypads
class Nokia3310 : public PhoneWithKeypad {
public:
    Nokia3310() : PhoneWithKeypad("2MP", "2G", true) {}
};

class Nokia1100 : public PhoneWithKeypad {
public:
    Nokia1100() : PhoneWithKeypad("No Camera", "2G", true) {}
};

// More Keypad Models...
class Nokia6600 : public PhoneWithKeypad {
public:
    Nokia6600() : PhoneWithKeypad("1.3MP", "2G", true) {}
};

class Nokia8110 : public PhoneWithKeypad {
public:
    Nokia8110() : PhoneWithKeypad("No Camera", "2G", true) {}
};

class SamsungGuru : public PhoneWithKeypad {
public:
    SamsungGuru() : PhoneWithKeypad("VGA", "2G", true) {}
};

// Specific Models - Phones without Keypads
class IPhone13 : public PhoneWithoutKeypad {
public:
    IPhone13() : PhoneWithoutKeypad("12MP", "5G", true) {}
};

class IPhone12 : public PhoneWithoutKeypad {
public:
    IPhone12() : PhoneWithoutKeypad("12MP", "5G", true) {}
};

// More Smartphone Models...
class IPhone11 : public PhoneWithoutKeypad {
public:
    IPhone11() : PhoneWithoutKeypad("12MP", "4G", true) {}
};

class SamsungS21 : public PhoneWithoutKeypad {
public:
    SamsungS21() : PhoneWithoutKeypad("64MP", "5G", true) {}
};

class OnePlus9 : public PhoneWithoutKeypad {
public:
    OnePlus9() : PhoneWithoutKeypad("48MP", "5G", true) {}
};

// Main function to demonstrate
int main() {
    // Create an array of phones with keypads
    PhoneWithKeypad* phonesWithKeypads[5];
    phonesWithKeypads[0] = new Nokia3310();
    phonesWithKeypads[1] = new Nokia1100();
    phonesWithKeypads[2] = new Nokia6600();
    phonesWithKeypads[3] = new Nokia8110();
    phonesWithKeypads[4] = new SamsungGuru();

    // Create an array of smartphones (phones without keypads)
    PhoneWithoutKeypad* smartphones[5];
    smartphones[0] = new IPhone13();
    smartphones[1] = new IPhone12();
    smartphones[2] = new IPhone11();
    smartphones[3] = new SamsungS21();
    smartphones[4] = new OnePlus9();

    // Display details of phones with keypads
    std::cout << "Phones with Keypads:\n";
    for (int i = 0; i < 5; ++i) {
        phonesWithKeypads[i]->showDetails();
        std::cout << "---------------------\n";
    }

    // Display details of phones without keypads
    std::cout << "Phones without Keypads:\n";
    for (int i = 0; i < 5; ++i) {
        smartphones[i]->showDetails();
        std::cout << "---------------------\n";
    }

    // Clean up memory
    for (int i = 0; i < 5; ++i) {
        delete phonesWithKeypads[i];
        delete smartphones[i];
    }

    return 0;
}

