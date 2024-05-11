#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class MenuItem {
public:
    string name;
    double price;
};
class Order {
public:
    vector<MenuItem> items;
    double getTotal() {
        double total = 0;
        for (MenuItem item : items) {
            total += item.price;
        }
        return total;
    }};
class Menu {                                                                                                             
public:                                                                                                                             
    vector<MenuItem> items;
    void addItem(string name, double price) {
        MenuItem item;
        item.name = name;
        item.price = price;
        items.push_back(item);
    }
    void printMenu() {
        cout << "Menu:" << endl;                                                                                                                     
        for (MenuItem item : items) {                                                                                                                  
            cout << item.name << " - $" << item.price << endl;                                                   
        }    } }; 
int main() {
    Menu menu;
    menu.addItem("Burger", 5.99);
    menu.addItem("Fries", 2.99);
    menu.addItem("Drink", 1.99); 
    cout << "Welcome to our restaurant!" << endl;
    menu.printMenu();
                                                                                                                                    
    Order order;                                                                                                                                                                                                                
    string input;
    
    while (input != "exit") {
        cout << "Please enter your order (type exit to finish): ";
        cin >> input;
        
        if (input == "exit") {
            break;
        } 
        bool foundItem = false;
        for (MenuItem item : menu.items) {
            if (item.name == input) {
                order.items.push_back(item);
                cout << item.name << " added to order. Price: $" << item.price << endl;
                foundItem = true;
                break;
            }    }
           if (!foundItem) {
            cout << "Sorry, we do not have that item on the menu." << endl;	
        }   }    
    cout << "Thank you for your order! Your total is: $" << order.getTotal() << endl; 
    return 0;}    
