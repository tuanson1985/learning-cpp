//Viết chương trình quản lý sản phẩm (tên, đơn giá, số lượng) gồm các chức năng sau:
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;

    double total() const { return price * quantity; }
};

void print_menu() {
    cout << "\n===== QUAN LY SAN PHAM =====\n";
    cout << "1. Xem danh sach san pham\n";
    cout << "2. Them san pham moi\n";
    cout << "3. Xoa san pham\n";
    cout << "4. Thoat\n";
    cout << "Chon: ";
}

void list_products(const vector<Product>& items) {
    if (items.empty()) {
        cout << "Danh sach rong.\n";
        return;
    }
    cout << left << setw(5) << "STT"
        << left << setw(30) << "Ten"
        << right << setw(12) << "Don gia"
        << right << setw(10) << "So luong"
        << right << setw(14) << "Thanh tien" << "\n";

    cout << string(5 + 30 + 12 + 10 + 14, '-') << "\n";

    cout << fixed << setprecision(2);
    for (size_t i = 0; i < items.size(); ++i) {
        const auto& p = items[i];
        cout << left << setw(5) << (i + 1)
            << left << setw(30) << p.name
            << right << setw(12) << p.price
            << right << setw(10) << p.quantity
            << right << setw(14) << p.total() << "\n";
    }
}

void add_product(vector<Product>& items) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // bỏ newline còn lại
    Product p;
    cout << "Nhap ten san pham: ";
    getline(cin, p.name);
    cout << "Nhap don gia: ";
    while (!(cin >> p.price) || p.price < 0) {
        cout << "Don gia khong hop le. Nhap lai: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Nhap so luong: ";
    while (!(cin >> p.quantity) || p.quantity < 0) {
        cout << "So luong khong hop le. Nhap lai: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    items.push_back(p);
    cout << ">> Da them!\n";
}

void delete_product(vector<Product>& items) {
    if (items.empty()) {
        cout << "Danh sach rong, khong the xoa.\n";
        return;
    }
    size_t idx;
    cout << "Nhap STT san pham can xoa: ";
    if (!(cin >> idx) || idx == 0 || idx > items.size()) {
        cout << "STT khong hop le.\n";
        return;
    }
    items.erase(items.begin() + (idx - 1));
    cout << ">> Da xoa!\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<Product> items; // có thể thêm sẵn dữ liệu mẫu nếu muốn

    while (true) {
        print_menu();
        int choice;
        if (!(cin >> choice)) {
            cout << "Lua chon khong hop le.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch (choice) {
        case 1:
            list_products(items);
            break;
        case 2:
            add_product(items);
            break;
        case 3:
            delete_product(items);
            break;
        case 4:
            cout << "Tam biet!\n";
            return 0;
        default:
            cout << "Lua chon khong hop le.\n";
        }
    }
}
