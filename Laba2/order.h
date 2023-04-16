#pragma once
#include "Client.h"
using namespace System;
using namespace System::Collections;

ref class order
{
private:
	int^ Order_Number = nullptr;
	ArrayList^ Books = gcnew ArrayList();
	String^ Client_Name = "";
	int^ Client_Discount = nullptr;
public:
	order(int^ New_Number, ArrayList^ New_Books, Client^ New_Client);
	int^ Get_Order_Number();
	int^ Get_Client_Discount();
	String^ Get_Client_Name();
};

