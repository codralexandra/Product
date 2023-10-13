#include "Product.h"
#include <regex>

Product::Product(uint16_t id, const std::string& name, float price)
	: m_id{ id }, m_name{ name }, m_price{ price } //se poate pune si cu ()
{
	//m_expirationDateOrType = expirationDate;
}

std::string Product::GetName() const
{
	return m_name;
}

float Product::GetPriceWithTVA() const
{
	return m_price+m_price*GetVAT()/100;
}
