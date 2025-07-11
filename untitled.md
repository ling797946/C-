# 语句

## 选择语句

### if-else 语句

语法：

1、如果计算结果为非零值就执行 if，如果计算结果为零值就执行 else

2、else 与最近的 if 相关联，else 是可选的



单独使用 if

```c++
import std;
using namespace std;

int main() {
    auto a = 110;
    if (a > 0) {
        cout << a;
    }
}
```

 使用 if-else

```cpp
import std;
using namespace std;

int main() {
    auto a = 0;
    if (a < 0) {
        cout << a;
    }
    else {
        cout << a << a;
    }
}
```

 

## 跳转语句

### break 语句

 语法：

1、braek 语句只终止它最近的循环语句或其所在条件语句

基于 for 和 if 的使用方法

```c++
import std;
using namespace std;

int main() {
	for (auto a = 0; a < 10; a++) {
		if (a == 5) {
			break;
		}
		cout << a;
	}
}
```

基于范围的 for 和 if 使用方法

```c++
import std;
using namespace std;

int main() {
	vector<int> i{ 0,1,2,3,4,5 };
	for (auto x : i) {
		if (x == 4) {
			break;
		}
		cout << x;
	}
}
```


