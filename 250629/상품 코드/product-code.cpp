#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product {
    public:
        string name;
        int code;
    Product(string name, int code) {
        this->name = name;
        this->code = code;
    }
    Product() {}
};

int main() {
    Product p1 = Product();
    p1.name = "codetree";
    p1.code = 50;

    cin >> product_name >> product_code;
    Product p2 = Product();
    p2.name = product_name;
    p2.code = product_code;

    cout << "product " << p1.code << " is " << p1.name << endl;
    cout << "product " << p2.code << " is " << p2.name << endl;

    return 0;
}