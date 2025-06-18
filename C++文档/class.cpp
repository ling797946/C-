import std;

using namespace std;

int main()
{
	if (true)	// 反之亦然，因为false会选择执行else中的语句或直接跳过。
	{
		cout << "近前";
	}

	int a = 1;

	if (a > 0)	// 大于0即执行if中的语句，反正将执行else中的语句。
	{
		cout << "南风";
	}
	else
	{
		cout << "南浪";
	}
}
