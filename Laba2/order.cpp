//#include "pch.h"
#include "order.h"

order::order(int^ New_Number, ArrayList^ New_Books, Client^ New_Client)
{
    if (*New_Number > 0) {
        this->Order_Number = New_Number;
        this->Books = New_Books;
        this->Client_Name = New_Client->Get_Client_Name();
        this->Client_Discount = New_Client->Get_Discount();
    }
    else this->Order_Number = '-1';
}


int^ order::Get_Order_Number()
{
    return this->Order_Number;
}

int^ order::Get_Client_Discount()
{
    return this->Client_Discount;
}

String^ order::Get_Client_Name()
{
    return this->Client_Name;
}
