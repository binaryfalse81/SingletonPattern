#if (1) // logger test
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Logger {
public:
	static Logger& getInstance() {
		static Logger instance;
		return instance;
	}

	~Logger() {
		file1.close();
	}

	void write(string str) {
		file1 << "ERROR :: " << str << "\n";
	}

private:
	ofstream file1;

	Logger() {
		file1.open("input.txt");
	}
};

int main() {
	Logger& logger = Logger::getInstance();
	logger.write("abcd");

	Logger& logger2 = Logger::getInstance();
	logger2.write("efgh");
}
#endif



#if (0) // singleton ±âº»
include <iostream>
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
#endif