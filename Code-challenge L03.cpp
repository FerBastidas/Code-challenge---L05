#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

// Task 1: Managing Products with std::map
void displayInventory(const map<string, int>& inventory) {
    cout << "Current Inventory:\n";
    for (const auto& item : inventory) {
        cout << item.first << ": " << item.second << " in stock\n";
    }
    cout << endl;
}

void addProduct(map<string, int>& inventory, const string& product, int quantity) {
    inventory[product] += quantity;
}

// Task 2: Tracking Unique Product Categories with std::set
void displayCategories(const set<string>& categories) {
    cout << "Product Categories:\n";
    for (const auto& category : categories) {
        cout << "- " << category << "\n";
    }
    cout << endl;
}

// Task 3: Processing Orders with std::queue
void processOrders(queue<string>& orders) {
    while (!orders.empty()) {
        cout << "Processing " << orders.front() << endl;
        orders.pop();
    }
}

// Task 4: Handling Restocks with std::stack
void processRestocks(stack<pair<string, int>>& restocks, map<string, int>& inventory) {
    while (!restocks.empty()) {
        auto item = restocks.top();
        cout << "Restocking " << item.second << " units of " << item.first << endl;
        inventory[item.first] += item.second;
        restocks.pop();
    }
}

// Task 5: Storing Customer Purchases with std::vector
void displayCart(const vector<string>& cart) {
    cout << "Items in customer cart:\n";
    for (const auto& item : cart) {
        cout << "- " << item << "\n";
    }
    cout << endl;
}

int main() {
    map<string, int> inventory;
    set<string> productCategories;
    queue<string> orders;
    stack<pair<string, int>> restocks;
    vector<string> customerCart;

    // Managing Products
    addProduct(inventory, "Laptop", 5);
    addProduct(inventory, "Mouse", 20);
    addProduct(inventory, "Keyboard", 10);
    displayInventory(inventory);

    // Tracking Categories
    productCategories.insert("Electronics");
    productCategories.insert("Accessories");
    productCategories.insert("Peripherals");
    displayCategories(productCategories);

    // Processing Orders
    orders.push("Order#1: Laptop");
    orders.push("Order#2: Mouse");
    orders.push("Order#3: Keyboard");
    processOrders(orders);

    // Handling Restocks
    restocks.push({"Mouse", 10});
    restocks.push({"Laptop", 2});
    restocks.push({"Keyboard", 5});
    processRestocks(restocks, inventory);
    displayInventory(inventory);

    // Customer Purchases
    customerCart.push_back("Laptop");
    customerCart.push_back("Mouse");
    customerCart.push_back("Keyboard");
    displayCart(customerCart);
    
    return 0;
}
