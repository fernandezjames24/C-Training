#pragma once
#include <iostream>

class AccessTest
{
public:
	static int testpublic;
	void testpublicmethod();
	
	
private:
	static int testprivate;
	void testprivatemethod();
	

protected:
	static int testprotected;
	void testprotectedmethod();

};










