import std;
using namespace std;

int main()
{
	int a = 0;
	
	if (a > 1)	
	{
		cout << "南风"; // 不执行
	}

	bool x = true;

	if (x == true)	
	{
		cout << "近前无往";	// 执行
	}
	else
	{
		cout << "秋风远到";	// 不执行
	}
}
