#include <vector>
#include <fstream>
#include "Product.h"
#include "ProductType.h"

int main()
{
	std::vector<Product> products;
	for (std::ifstream in{ "product.prodb" }; !in.eof(); /*EMPTY*/)
	{
		uint16_t id;
		std::string name;
		float price;
		uint16_t vat;
		std::string expDateOrType;

		in >> id >> name >> price >> vat >> expDateOrType;
		Product product(id, name, price, vat, expDateOrType);

		products.push_back(product);
	}

	return 0;
}