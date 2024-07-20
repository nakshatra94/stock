// stock_management_system.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class StockItem {
    private:
        std::string itemName;
        int quantity;
    public:
        StockItem(std::string itemName, int quantity) {
            this->itemName = itemName;
            this->quantity = quantity;
        }
        void addStock(int quantity) {
            this->quantity += quantity;
        }
        void removeStock(int quantity) {
            this->quantity -= quantity;
        }
        int getQuantity() {
            return quantity;
        }
};

int main() {
    std::vector<StockItem> stockItems;
    stockItems.push_back(StockItem("Item 1", 10));
    stockItems.push_back(StockItem("Item 2", 20));

    for (StockItem stockItem : stockItems) {
        std::cout << "Item: " << stockItem.getItemName() << ", Quantity: " << stockItem.getQuantity() << std::endl;
    }

    return 0;
}