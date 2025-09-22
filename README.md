## Biến (variable) là gì?
- Biến là thứ được dùng để lưu trữ dữ liệu của chương trình và nó mang ý nghĩa có thể thay đổi được.
- Cách sử dụng biến:
    - Trước khi sử dụng phải khai báo biến
    - Cú pháp khai báo: `<Kiểu dữ liệu> <Tên biến>;` hoặc `<Kiểu dữ liệu> <Tên biến 1>, <Tên biến 2>,...;`

    ```c
    #include <iostream>

    int main()
    {
        int i; // Khai báo biến i có kiểu dữ liệu số nguyên (integer)
        float f; // Khai báo biến f có kiểu dữ liệu số thực (float)
        char c; // Khai báo biến c có kiểu dữ liệu ký tự (character)

        int a, b; // Khai báo 2 biến a, b có kiểu dữ liệu số nguyên (integer)

        int d = 1; // Khai báo biến d và gán (assign) cho biến d giá trị 1

        std::cout << d;

        return 0;
    }
    ```
    Kết quả:
    ```
    1
    ```

## Cách đặt tên biến
- Không đặt tên biến trùng với từ khóa (void, for, while, do, delete,...)
- Tên biến không chứa khoảng trắng hoặc ký tự đặc biệt
- Ký tự đầu tiên của tên biến phải là chữ cái

## Nhập xuất dữ liệu
- Để nhập xuất dữ liệu trong C++, chúng ta sử dụng thư viện `iostream`. Thư viện này cung cấp cho chúng ta những thứ được định nghĩa sẵn để sử dụng.
    - `std::cout`: In dữ liệu ra console
    ```c
    #include <iostream>

    int main()
    {
        std::cout << "Hello World!"; // In ra console chuỗi "Hello World!"

        return 0;
    }
    ```
    Kết quả:
    ```
    Hello World!
    ```
    - `std::cin`: Đọc dữ liệu từ bàn phím và gán dữ liệu cho biến được chỉ định. Dùng cho thao tác nhập dữ liệu.
    ```c
    #include <iostream>

    int main()
    {
        int x;
        std::cout << "x = ";
        std::cin >> x; // Nhập vào giá trị của x

        std::cout << "Value of x: " << x; // In ra console giá trị của x

        return 0;
    }
    ```
    Kết quả:
    ```
    x = 10
    Value of x: 10
    ```
    - `std::endl`: Ngắt dòng khi hiển thị dữ liệu trên console, có thể dùng ký tự `\n` để thay thế.
    ```c
    #include <iostream>

    int main()
    {
        std::cout << "Hello World!" << std::endl;
        std::cout << "CPP" << std::endl << "Learing!" << std::endl;
        std::cout << "Full\nStack";

        return 0;
    }
    ```
    Kết quả:
    ```
    Hello World!
    CPP 
    Learning!
    Full 
    Stack
    ```

## Các kiểu dữ liệu thường gặp
- Các kiểu dữ liệu thường gặp trong C++: 
    - Integer (int): Kiểu số nguyên (`1`, `2`, `3`)
    - Float (float): Kiểu số thực (`1.2`, `1.3`, `3.14`,...)
    - Double (double): Kiểu số thực (có giới hạn lưu trữ lớn hơn so với float)
    - Boolean (bool): 1/0 (True/False)
    - Character (char): Kiểu ký tự (`'a'`, `'b'`, `'c'`,...)
- Ngoài ra còn có các kiểu dữ liệu khác: `long`, `long long`, `unsigned long`, `short`, `unsigned short`,...

    ```c
    #include <iostream>

    int main()
    {
        int a = 1;
        
        float b = 1.4;
        
        double c = 3.14;
        
        char d = 'a';
        
        bool e = true;
        bool f = 1;

        return 0;
    }
    ```

## Giới hạn lưu trữ
- Ngoài việc lưu trữ các loại dữ liệu khác nhau, mỗi kiểu dữ liệu lại có các giới hạn lưu trữ khác nhau

    Ví dụ:
    - Kiểu `int` có thể lưu trữ 4 byte (-2,147,483,648 tới 2,147,483,647)
    - Kiểu `short` có thể lưu trữ 2 byte (-32,768 tới 32,767)
- Sử dụng các macro sau đây để kiểm tra giá trị lớn nhất hoặc nhỏ nhất mà 1 kiểu dữ liệu có thể lưu trữ
    - `INT_MAX`: Giá trị lớn nhất mà kiểu `int` có thể lưu trữ.
    - `INT_MIN`: Giá trị nhỏ nhất mà kiểu `int` có thể lưu trữ.
    - `SHRT_MAX`: Giá trị nhất mà kiểu `short` có thể lưu trữ.
    - `SHRT_MIN`: Giá trị nhỏ nh mà kiểu `short` có thể lưu trữ.
    - `LONG_MAX`: Giá trị nhất mà kiểu `long` có thể lưu trữ.
    - `LONG_MIN`: Giá trị nhỏ nh mà kiểu `long` có thể lưu trữ.
    - `FLT_MAX`: Giá trị nhất mà kiểu `float` có thể lưu trữ.
    - `FLT_MIN`: Giá trị nhỏ nh mà kiểu `float` có thể lưu trữ.
    - `DBL_MAX`: Giá trị nhất mà kiểu `double` có thể lưu trữ.
    - `DBL_MIN`: Giá trị nhỏ nh mà kiểu `double` có thể lưu trữ.

    Ví dụ:
    ```c
    #include <iostream>

    int main()
    {
        std::cout << "Min int: " << INT_MIN << std::endl;
        std::cout << "Max int: " << INT_MAX << std::endl;
        std::cout << "Min short: " << SHRT_MIN << std::endl;
        std::cout << "Max short: " << SHRT_MAX << std::endl;

        return 0;
    }
    ```
- Sử dụng `sizeof` để xác định số lượng byte mà một kiểu dữ liệu có thể lưu trữ

    Ví dụ:
    ```c
    #include <iostream>

    int main()
    {
        std::cout << "Int: " << sizeof(int) << std::endl; // 4
        std::cout << "Float: " << sizeof(float) << std::endl; // 4
        std::cout << "Double: " << sizeof(double) << std::endl; // 8
        std::cout << "Bool: " << sizeof(bool) << std::endl; // 1
        std::cout << "Char: " << sizeof(char) << std::endl; // 1
        std::cout << "Long: " << sizeof(long) << std::endl; // 4

        return 0;
    }
    ```

Biến cục bộ và biến toàn cục
Phạm vi cục bộ
Trong 1 chương trình sẽ có các phạm vi (scope), mỗi 1 phạm vi sẽ được thể hiện bằng dấu {}.

Biến khai báo ở phạm vi nào thì chỉ được sử dụng ở trong phạm vi đó (đó được gọi là các biến cục bộ).

Ví dụ:

#include <iostream> 

int main()
{
    int main_var = 0;
    std::cout << main_var << std::endl;

    { // Phạm vi 1
        int scope_var_1 = 1;
        std::cout << scope_var_1 << std::endl;

        {
            std::cout << scope_var_1 << std::endl;
        }
    }

    { // Phạm vi 2
        int scope_var_2 = 2;
        std::cout << scope_var_2 << std::endl;
        std::cout << scope_var_1 << std::endl; // Lỗi: scope_var_1 was not declared in this scope
    }

    return 0;
}
Khi có 1 biến ở phạm vi bên trong trùng tên với 1 biến ở phạm vi bên ngoài, chương trình sẽ ưu tiên lấy giá trị của biến ở phạm vi gần nhất tính từ trong ra ngoài.

Ví dụ:

#include <iostream>

int main()
{
    int main_var = 0;

    {
        int main_var = 1;
        std::cout << main_var; // 1
    }

    std::cout << main_var; // 0

    return 0;
}
Phạm vi toàn cục
Các biến được khai báo ở bên ngoài chương trình được gọi là biến toàn cục có thể được sử dụng ở bất cứ nơi nào trong chương trình.

Ví dụ:

#include <iostream>

int global_var = 1;

int main()
{
    std::cout << "Main scope: " << global_var << std::endl;

    { // Phạm vi 1
        std::cout << "Scope 1: " << global_var << std::endl;
    }

    { // Phạm vi 2
        std::cout << "Scope 2: " << global_var << std::endl;
    }

    return 0;
}

