

#include <iostream>
using namespace std;

class Code{

public:
	Code()
	{
		cout<<"we are in code class\n";
	}
};

class Debug : public Code{

public:
	Debug()
	{
		cout<<"we are in Debug class\n";
	}
};

class Error : public Debug{

public:
	Error()
	{
		cout<<"we are in Error class\n";
	}
};

int main()
{
	Error r;
}