#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std ;
class Product{

    private :
    	int id ;
    	string title ;
    	string  description ;
    	double Price ; 


	public:
		Product();
		Product(int id, string title, string description,double price);
		
		~Product();
	protected:
};

#endif
