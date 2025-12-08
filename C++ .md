# C++ 快速上手简介



## 语句

### 循环语句

#### while 语句

- whlie 是循环语句的关键字

- 程序根据循环条件的布尔值选择不执行或者执行多次

- 数值的递增或递减是从 0 开始

##### 语法

```c++
while()	循环条件
{
    ++;	更新条件
}
```



##### while 循环单一语句

```c++
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 10;
	
	while(a < b)
	{
		cout << "新值：" << a << endl;
		a++;
	}
}
```

##### while 循环嵌套语句

```c++
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 10;
	
	while(a < b)
	{
		while(a < b)
		{
			cout << "新值：" << a << endl;
			a++;
		}
	}
}
```

### do-while 语句

- do-while 是循环语句的关键字

- 程序根据循环条件的布尔值选择不执行或者执行多次

- 循环会在布尔值返回之前先执行一次
- 数值的递增或递减是从 0 开始

#### 语法

```c++
	do
	{
		++;	更新条件
	}while();	循环条件
```



#### do-while 循环单一语句

```c++
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 10;
	
	do
	{
		a++;
		cout << "新值：" << a << endl;
	}while(a < b);
}
```

#### do-while 循环嵌套语句

```c++
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 10;
	
	do
	{
		do
		{
			a++;
			cout << "新值：" << a << endl;
		}while(a < b);
	}while(a < b);
}
```

