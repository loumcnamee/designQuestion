#include "Inventory.h"


unsigned int Inventory::size() const {
  return _inventory.size();
}

void Inventory::addItem(const InventoryItem& theItem)
{
  _inventory.insert( std::pair<unsigned int, const InventoryItem&>(22, theItem) );
}
