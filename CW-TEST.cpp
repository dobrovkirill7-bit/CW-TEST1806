#include <iostream>
#include <cstring>

using namespace std;

class Laptop
{
private:
	char* _brand;
	double _price;
public:
	Laptop(const char* brand, double price)
	{
		_brand = new char[strlen(brand) + 1];
		strcpy(_brand, brand);
		_price = price;
	}

	~Laptop()
	{
		delete[] _brand;
		cout << "Brand was delete from this universal" << endl;
	}

	void info()
	{
		cout << "Cool brand: " << _brand << " Price: " << _price << endl;
	}
};


int main()
{
	{
		Laptop laptop1("XiaomiUltraNanoBananaChikenBurgerFromChina", 52.52);
		laptop1.info();
	}
}