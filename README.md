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

# Biến cục bộ và biến toàn cục

## 1. Phạm vi cục bộ (Local Scope)
Trong một chương trình C++, phạm vi (scope) được xác định bằng cặp dấu ngoặc nhọn `{ }`.  
Biến khai báo trong một phạm vi chỉ tồn tại và sử dụng được bên trong phạm vi đó.  
Những biến này được gọi là **biến cục bộ**.

### Ví dụ:
```c
#include <iostream>
using namespace std;

int main()
{
    int main_var = 0;
    cout << main_var << endl;

    { // Phạm vi 1
        int scope_var_1 = 1;
        cout << scope_var_1 << endl;

        {
            cout << scope_var_1 << endl; // hợp lệ vì scope_var_1 nằm trong phạm vi cha
        }
    }

    { // Phạm vi 2
        int scope_var_2 = 2;
        cout << scope_var_2 << endl;
        cout << scope_var_1 << endl; // ❌ Lỗi: scope_var_1 không tồn tại ở đây
    }

    return 0;
}
```

### Ghi chú:
- Khi một biến trong phạm vi bên trong trùng tên với biến bên ngoài, chương trình **ưu tiên sử dụng biến gần nhất** (shadowing).

### Ví dụ shadowing:
```c
#include <iostream>
using namespace std;

int main()
{
    int main_var = 0;

    {
        int main_var = 1;
        cout << main_var; // 1
    }

    cout << main_var; // 0
    return 0;
}
```

---

## 2. Phạm vi toàn cục (Global Scope)
Biến khai báo ngoài tất cả các hàm sẽ có **phạm vi toàn cục**.  
Biến toàn cục có thể được truy cập từ bất kỳ nơi nào trong chương trình.

### Ví dụ:
```c
#include <iostream>
using namespace std;

int global_var = 1; // biến toàn cục

int main()
{
    cout << "Main scope: " << global_var << endl;

    { // Phạm vi 1
        cout << "Scope 1: " << global_var << endl;
    }

    { // Phạm vi 2
        cout << "Scope 2: " << global_var << endl;
    }

    return 0;
}
```

---

# Ép kiểu dữ liệu (Type Casting)

Trong C++, ép kiểu dữ liệu là việc chuyển đổi giá trị từ kiểu dữ liệu này sang kiểu dữ liệu khác.  
Có hai loại ép kiểu:

## 1. Ép kiểu ngầm định (Implicit Casting / Type Conversion)
- Trình biên dịch tự động thực hiện khi cần thiết.  
- Thường xảy ra khi gán giá trị từ kiểu nhỏ sang kiểu lớn hoặc trong biểu thức hỗn hợp.

### Ví dụ:
```c
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    double b = 2.5;

    double c = a + b; // a (int) được ép thành double
    cout << c; // 7.5

    return 0;
}
```

---

## 2. Ép kiểu tường minh (Explicit Casting)
- Người lập trình chỉ định rõ kiểu muốn chuyển đổi.

### Cách 1: Dùng cú pháp C
```c
int a = 10;
double b = (double)a / 3; // ép a thành double
```

### Cách 2: Dùng toán tử `static_cast`
```c
int a = 10;
double b = static_cast<double>(a) / 3;
```

### Cách 3: Các kiểu cast khác (ít dùng khi mới học)
- `dynamic_cast`
- `const_cast`
- `reinterpret_cast`

⚠️ Khi học cơ bản, thường dùng `(type)` hoặc `static_cast`.

### Ví dụ minh họa:
```c
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 2;

    cout << "a / b = " << a / b << endl;           // 2 (chia nguyên)
    cout << "a / (double)b = " << a / (double)b << endl; // 2.5

    return 0;
}
```

---

# Bảng mã ASCII

ASCII (American Standard Code for Information Interchange) là bảng mã ký tự chuẩn, dùng để biểu diễn ký tự trong máy tính bằng số nguyên.  
Mỗi ký tự (chữ cái, chữ số, ký hiệu, …) sẽ được biểu diễn bằng một số nguyên từ `0 → 127`.

Trong C++, kiểu `char` lưu trữ ký tự nhưng thực chất là lưu giá trị số nguyên ASCII tương ứng.

### Ví dụ sử dụng ASCII:
```c
#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    cout << "Ký tự: " << c << endl;
    cout << "Mã ASCII: " << (int)c << endl;

    int code = 98;
    cout << "Mã 98 trong ASCII là ký tự: " << (char)code << endl;

    return 0;
}
```

### Kết quả:
```
Ký tự: A
Mã ASCII: 65
Mã 98 trong ASCII là ký tự: b
```

### Một số giá trị ASCII thông dụng:
| Ký tự | Giá trị ASCII |
|-------|---------------|
| '0'   | 48            |
| '1'   | 49            |
| '9'   | 57            |
| 'A'   | 65            |
| 'Z'   | 90            |
| 'a'   | 97            |
| 'z'   | 122           |
| ' ' (space) | 32      |
| '\n' (newline) | 10  |

### Ứng dụng thực tế:
- Kiểm tra chữ hoa, chữ thường bằng giá trị ASCII.  
- Chuyển đổi ký tự sang số (`'0' → 0`, `'5' → 5`).  
- Làm việc với mã hóa, xử lý chuỗi ký tự.

### Ví dụ: kiểm tra ký tự có phải chữ thường không
```c
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
        cout << "Day la chu thuong";
    else
        cout << "Khong phai chu thuong";

    return 0;
}
```


# Cấu trúc điều khiển và vòng lặp trong C++

## 1. Cấu trúc if – else
- **Ý nghĩa**: Cho phép chương trình ra quyết định dựa trên điều kiện (true/false).
- **Cú pháp**:
```c
if (điều_kiện) {
    // Khối lệnh khi điều kiện đúng
} else {
    // Khối lệnh khi điều kiện sai
}
```

### Lưu đồ (Flowchart)

```
     +------------------+
     |  Kiểm tra điều   |
     |      kiện        |
     +--------+---------+
              |
       +------v------+
   YES | Thực hiện   | 
       | khối lệnh 1 |
       +-------------+
              |
             NO
              |
       +------v------+
       | Thực hiện   |
       | khối lệnh 2 |
       +-------------+
```

### Ví dụ:
```c
int x;
cin >> x;

if (x % 2 == 0) {
    cout << "x la so chan";
} else {
    cout << "x la so le";
}
```
👉 Ứng dụng: Kiểm tra điều kiện, phân loại dữ liệu.

---

## 2. Cấu trúc switch – case
- **Ý nghĩa**: Thay thế cho nhiều `if else if` liên tiếp khi cần so sánh 1 biến với nhiều giá trị rời rạc.
- **Cú pháp**:
```c
switch (biểu_thức) {
    case giá_trị_1:
        // Khối lệnh 1
        break;
    case giá_trị_2:
        // Khối lệnh 2
        break;
    default:
        // Khối lệnh mặc định
}
```

⚠️ Lưu ý:
- `break` giúp thoát khỏi `switch`. Nếu quên, chương trình sẽ “chạy rơi xuống” case tiếp theo.
- Chỉ hoạt động với **kiểu số nguyên** hoặc **char**, không dùng cho `float/double`.

### Ví dụ:
```c
int day = 3;
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    default: cout << "Invalid day";
}
```

---

## 3. Toán tử ba ngôi (?:)
- **Ý nghĩa**: Viết gọn `if else`.
- **Cú pháp**:
```c
biến = (điều_kiện) ? giá_trị_nếu_true : giá_trị_nếu_false;
```

### Ví dụ:
```c
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << "Max = " << max;
```

---

## 4. Vòng lặp

### Bảng so sánh các vòng lặp

| Vòng lặp | Điểm đặc trưng | Khi dùng |
|----------|----------------|----------|
| for      | Biết trước số lần lặp | Duyệt mảng, in dãy số |
| while    | Chưa biết trước số lần lặp, dừng khi điều kiện sai | Lặp đến khi nhập dữ liệu hợp lệ |
| do while | Luôn chạy ít nhất 1 lần | Menu chương trình, nhập dữ liệu và kiểm tra lại |

### Ví dụ:
```c
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```
Kết quả: `1 2 3 4 5`

```c
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
```
Kết quả: `1 2 3 4 5`

```c
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
```
Kết quả: `1 2 3 4 5`

---

## 5. Kết hợp vòng lặp và if
Ví dụ: In ra số lẻ từ 1 đến 10
```c
for (int i = 1; i <= 10; i++) {
    if (i % 2 != 0) cout << i << " ";
}
```
Kết quả: `1 3 5 7 9`

---

## 6. break, continue, goto

### break
- Thoát khỏi vòng lặp ngay lập tức.
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    cout << i << " ";
}
// Kết quả: 1 2
```

### continue
- Bỏ qua lần lặp hiện tại, tiếp tục vòng lặp tiếp theo.
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
// Kết quả: 1 2 4 5
```

### goto
- Nhảy đến một nhãn (label) được định nghĩa trong code.
- ⚠️ Hạn chế dùng vì dễ gây rối luồng chương trình.

```c
int x = 1;
label:
cout << x << " ";
x++;
if (x <= 3) goto label;
// Kết quả: 1 2 3
```

---
# Mảng (Array) trong C++

**Mảng** là tập hợp các phần tử **cùng kiểu dữ liệu**, được lưu liên
tiếp trong bộ nhớ và truy cập bằng **chỉ số (index)** bắt đầu từ `0`.

------------------------------------------------------------------------

## 1) Mảng 1 chiều (One-Dimensional Array)

### Khai báo & khởi tạo

-   Cú pháp khai báo:\
    `kiểu_dữ_liệu tên_mảng[kích_thước];`

-   Khởi tạo khi khai báo:

    ``` c
    int a[5];                    // 5 phần tử chưa gán giá trị
    int b[5] = {1, 2, 3, 4, 5};  // khởi tạo đầy đủ
    int c[]  = {7, 8, 9};        // suy ra kích thước = 3
    ```

> ⚠️ Không có thuộc tính lưu sẵn số phần tử. Bạn **tự giữ biến `n`** để
> biết mảng đang dùng bao nhiêu phần tử.

### Nhập / xuất mảng 1 chiều

``` c
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
```

### Tính tổng các phần tử trong mảng

``` c
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += a[i];
}
cout << "Tong = " << sum;
```

### Tìm phần tử lớn nhất

``` c
int maxVal = a[0];
for (int i = 1; i < n; i++) {
    if (a[i] > maxVal) maxVal = a[i];
}
cout << "Gia tri lon nhat: " << maxVal;
```

------------------------------------------------------------------------

## 2) Mảng 2 chiều (Two-Dimensional Array)

Mảng 2 chiều thường được hình dung như **ma trận** (n dòng × m cột).

### Khai báo & khởi tạo

``` c
int a[3][4];    // mảng 3 hàng, 4 cột
int b[2][2] = { {1, 2}, {3, 4} };
```

### Nhập / xuất mảng 2 chiều

``` c
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

### Tính tổng các phần tử

``` c
int sum = 0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        sum += a[i][j];
    }
}
cout << "Tong = " << sum;
```

### Tìm phần tử lớn nhất mỗi hàng

``` c
for (int i = 0; i < n; i++) {
    int maxRow = a[i][0];
    for (int j = 1; j < m; j++) {
        if (a[i][j] > maxRow) maxRow = a[i][j];
    }
    cout << "Max hang " << i << " = " << maxRow << endl;
}
```

------------------------------------------------------------------------

## 3) Ghi nhớ quan trọng

-   Mảng **cố định kích thước** khi khai báo. Nếu cần thay đổi linh hoạt
    → dùng `vector`.
-   Truy cập phần tử ngoài giới hạn sẽ gây **lỗi truy cập bộ nhớ**.
-   Chỉ số mảng bắt đầu từ `0`.

# Thuật toán Sắp xếp Nổi bọt (Bubble Sort)

## Giới thiệu
**Bubble Sort** là một thuật toán sắp xếp đơn giản, hoạt động bằng cách **so sánh từng cặp phần tử kề nhau** và **hoán đổi vị trí nếu chúng không đúng thứ tự**.  
Quá trình này được lặp lại cho đến khi mảng được sắp xếp xong.

Tên gọi "nổi bọt" (bubble) xuất phát từ việc các phần tử lớn dần "nổi" lên cuối mảng sau mỗi vòng lặp.

---

## Độ phức tạp
- **Thời gian:**
  - Trường hợp tốt nhất (*Best case*): `O(n)` (nếu mảng đã sắp xếp, có thể dừng sớm).
  - Trường hợp trung bình (*Average case*): `O(n^2)`.
  - Trường hợp xấu nhất (*Worst case*): `O(n^2)`.
- **Không gian:** `O(1)` (thuật toán sắp xếp tại chỗ, không dùng thêm bộ nhớ).

---

## Ý tưởng thuật toán
1. Bắt đầu từ phần tử đầu tiên, so sánh nó với phần tử ngay sau.
2. Nếu phần tử hiện tại lớn hơn phần tử sau → hoán đổi.
3. Tiếp tục như vậy đến cuối mảng → phần tử lớn nhất "nổi" lên cuối.
4. Lặp lại quá trình, nhưng không cần xét các phần tử đã "nổi" lên đúng vị trí.
5. Dừng khi không còn hoán đổi nào.

---

## Minh họa
Ví dụ: Sắp xếp dãy `[5, 3, 4, 1, 2]` tăng dần:

- Lần 1: `[3, 4, 1, 2, 5]`
- Lần 2: `[3, 1, 2, 4, 5]`
- Lần 3: `[1, 2, 3, 4, 5]` ✅

---

## Code minh họa

### C++
```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Nếu không có hoán đổi nào, mảng đã sắp xếp
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

# String trong C++

## 1. Giới thiệu

-   **String** là kiểu dữ liệu dùng để lưu trữ chuỗi ký tự (văn bản).
-   Trong C++, chuỗi có thể khai báo bằng:
    -   Mảng ký tự (`char[]`)
    -   Hoặc dùng lớp `std::string` trong thư viện `<string>` (cách
        thường dùng).

Ví dụ:

``` cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Hello World";
    cout << name;
    return 0;
}
```

------------------------------------------------------------------------

## 2. Một số phương thức làm việc với String

### 2.1. Lấy độ dài chuỗi

``` cpp
string s = "Hello";
cout << s.length();  // Kết quả: 5
```

### 2.2. Truy cập ký tự trong chuỗi

``` cpp
string s = "Hello";
cout << s[0];  // H
cout << s.at(1); // e
```

### 2.3. Nối chuỗi

``` cpp
string a = "Hello ";
string b = "World";
string c = a + b;      // "Hello World"
a.append(b);           // "Hello World"
```

### 2.4. So sánh chuỗi

``` cpp
string a = "abc";
string b = "xyz";

if (a == b) cout << "Bằng nhau";
if (a.compare(b) < 0) cout << "a nhỏ hơn b";
```

### 2.5. Tìm kiếm trong chuỗi

``` cpp
string s = "Xin chao cac ban";
int pos = s.find("chao");   // Vị trí: 4
```

### 2.6. Thay thế chuỗi

``` cpp
string s = "I love C++";
s.replace(7, 3, "Java");  // Kết quả: "I love Java"
```

### 2.7. Xóa chuỗi

``` cpp
string s = "abcdef";
s.erase(2, 3);   // Xóa từ vị trí 2, 3 ký tự => "abf"
```

### 2.8. Lấy con chuỗi (substr)

``` cpp
string s = "Hello World";
string sub = s.substr(0, 5); // "Hello"
```

### 2.9. Chuyển kiểu dữ liệu

``` cpp
string numStr = "123";
int num = stoi(numStr);     // Chuyển sang int
string s = to_string(456);  // Chuyển int sang string
```

------------------------------------------------------------------------

## 3. Tổng kết

-   `std::string` trong C++ hỗ trợ nhiều phương thức tiện lợi.
-   Các thao tác phổ biến: **lấy độ dài, nối, so sánh, tìm kiếm, thay
    thế, xóa, cắt chuỗi, chuyển đổi kiểu dữ liệu.**
# 📘 Hàm, Tham số và Đối số trong C++

## 1. Hàm là gì?
- **Hàm** là một khối lệnh được định nghĩa để thực hiện một công việc cụ thể.
- Hàm giúp chia chương trình thành các phần nhỏ, dễ quản lý, tái sử dụng và giảm trùng lặp code.

**Cú pháp định nghĩa hàm:**
```cpp
<kiểu_trả_về> <tên_hàm>(<danh_sách_tham_số>) {
    // khối lệnh
    return <giá_trị_trả_về>;
}
```

**Ví dụ:**
```cpp
int sum(int a, int b) {
    return a + b;
}
```

---

## 2. Tham số và Đối số

### Tham số (Parameter)
- Là biến được khai báo trong phần định nghĩa hàm.
- Nó đóng vai trò **nhận dữ liệu** từ bên ngoài truyền vào.

**Ví dụ:**
```cpp
int sum(int a, int b)  // a và b là tham số
{
    return a + b;
}
```

### Đối số (Argument)
- Là giá trị hoặc biến **thực tế** được truyền cho tham số khi gọi hàm.

**Ví dụ:**
```cpp
int main() {
    int result = sum(3, 5); // 3 và 5 là đối số
    cout << result; // Kết quả: 8
}
```

---

## 3. Đối số mặc định (Default Argument)

- Đối số mặc định là giá trị được gán sẵn cho tham số trong định nghĩa hàm.
- Khi gọi hàm **không truyền đối số** cho tham số đó thì chương trình sẽ dùng giá trị mặc định.

**Cú pháp:**
```cpp
<kiểu_trả_về> <tên_hàm>(<kiểu tham_số> tên = giá_trị_mặc_định) {
    // code
}
```

**Ví dụ:**
```cpp
int sum(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << sum(5) << endl;    // chỉ truyền 1 đối số, b sẽ lấy mặc định = 10 → Kết quả: 15
    cout << sum(5, 20) << endl; // truyền đủ 2 đối số → Kết quả: 25
    return 0;
}
```

---

## 4. Tóm tắt
- **Hàm**: Khối lệnh có thể tái sử dụng.  
- **Tham số**: Biến khai báo trong hàm, nhận dữ liệu từ bên ngoài.  
- **Đối số**: Giá trị thực tế truyền vào khi gọi hàm.  
- **Đối số mặc định**: Cho phép gán giá trị mặc định cho tham số, giúp lời gọi hàm linh hoạt hơn.  

---

