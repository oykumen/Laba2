#pragma once
using namespace System;
using namespace System::Collections;
ref class Client
{
private:
	String^ Client_Name = "";
	int^ Client_Discount = nullptr;
public:
	Client(String^ New_Client_Name);
	void Set_Discount(int^ New_Client_Discount);
	int^ Get_Discount();
	String^ Get_Client_Name();
};

