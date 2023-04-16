//#include "pch.h"
#include "Client.h"

Client::Client(String^ New_Client_Name)
{
	this->Client_Name = New_Client_Name;
}

void Client::Set_Discount(int^ New_Client_Discount)
{
	this->Client_Discount = New_Client_Discount;
}

int^ Client::Get_Discount()
{

	return this->Client_Discount;
}

String^ Client::Get_Client_Name()
{
	return this->Client_Name;
}
