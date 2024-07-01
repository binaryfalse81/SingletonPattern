#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton& getInstance()
	{
		static Singleton instance;
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
	Singleton() {}
	int val = 0;

	Singleton& operator=(const Singleton& other) = delete;
	Singleton(const Singleton& other) = delete;
};

int main()
{
	Singleton& temp1 = Singleton::getInstance();
	Singleton& temp2 = Singleton::getInstance();

	temp1.setValue(7);
	temp1.showValue();
	temp2.showValue();
}