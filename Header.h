#pragma once
#include "Product.h"

void Initialize(Product& product);
void Initialize(Product products[], size_t size);
void Show(Product products[], size_t size);
void ManageProducts(Product*& products, size_t& size);
