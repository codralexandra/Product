#include <vector>
#include <fstream>
#include "Product.h"
#include "ProductType.h"
#include "PerishableProduct.h"

int main()
{
	std::vector<IPriceable*> products;
	for (std::ifstream in{ "product.prodb" }; !in.eof(); /*EMPTY*/)
	{
		uint16_t id;
		std::string name;
		float price;
		uint16_t vat;
		std::string expDateOrType;

		in >> id >> name >> price >> vat >> expDateOrType;
		IPriceable* product=new PerishableProduct(id, name, price, expDateOrType);

		products.push_back(product);
	}

	return 0;
}