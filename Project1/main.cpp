#include <iostream>
using namespace std;

class Single
{
public:
	static Single& getInstance()
	{
		static Single instance;
		return instance;
	}

	void setValue(int n)
	{
		val = n;
	}

	void showValue()
	{
		cout << val << endl;
	}

private:
	Single() {}
	int val = 0;

	Single& operator=(const Single& other) = delete;
	Single(const Single& other) = delete;
};

int main()
{
	Single& temp1 = Single::getInstance();
	Single& temp2 = Single::getInstance();

	temp1.setValue(7);
	temp1.showValue();
	temp2.showValue();
}