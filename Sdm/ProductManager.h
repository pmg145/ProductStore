
#define PRODUCTMANAGER_H
#include "Product.h"
class ProductManager
{
	public:
		ProductManager();
		~ProductManager();
			bool Insert (Product p);
			bool Delete (int id);
			bool update (Product p);
			//Product retrieve (int id); 
	
	protected:
};



