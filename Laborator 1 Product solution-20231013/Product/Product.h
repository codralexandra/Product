#pragma once

#include <cstdint>
#include <string>
#include "ProductType.h"

class Product
{
public:
	Product(uint16_t id, const std::string& name, float price, uint16_t vat, std::string expirationDate);
	Product(uint16_t id, const std::string& name, float price, uint16_t vat, ProductType type);


private:
	uint16_t m_id;
	std::string m_name;
	float m_price;

	uint16_t m_vat;
	std::string m_expirationDate;
	ProductType m_type;
};

