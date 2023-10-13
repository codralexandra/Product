#pragma once

#include <cstdint>
#include <string>
#include "ProductType.h"
#include "IPriceable.h"

class Product : public IPriceable
{
public:
	Product(uint16_t id, const std::string& name, float price);
	std::string GetName() const override;
	//float GetPriceWithTVA() const override;
	virtual uint16_t GetVAT()const = 0;
private:
	uint16_t m_id;
	std::string m_name;
	float m_price;
};

