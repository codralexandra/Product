#include "Product.h"
#include <regex>

Product::Product(uint16_t id, const std::string& name, float price, uint16_t vat, std::string expirationDate)
	: m_id{ id }, m_name{ name }, m_price{ price }, m_vat{ vat }, m_expirationDate{ expirationDate }
{
	//m_expirationDateOrType = expirationDate;
}

Product::Product(uint16_t id, const std::string& name, float price, uint16_t vat, ProductType type)
	: m_id{ id }, m_name{ name }, m_price{ price }, m_vat{ vat }, m_type{type}
{
	//m_expirationDateOrType = type;
}
