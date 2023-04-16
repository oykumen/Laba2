#pragma once
using namespace System;
using namespace System::Collections;
ref class Order_List
{
private:
	ArrayList^ orders = gcnew ArrayList();
public:
	Order_List(ArrayList^ New_orders);
	ArrayList^ Search_Orders(int^ Discount);
};

