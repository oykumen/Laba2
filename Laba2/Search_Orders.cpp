//#include "pch.h"
#include "Search_Orders.h"
#include "order.h"
Order_List::Order_List(ArrayList^ New_orders)
{
    this->orders = New_orders;
}

ArrayList^ Order_List::Search_Orders(int^ Discount)
{
    ArrayList^ Orders = gcnew ArrayList();
    int^ buf = nullptr;
    for (int i = 0; i < orders->Count; i++)
    {
        buf = (static_cast<order^>(orders[i]))->Get_Client_Discount();
        if (*buf == *Discount)
        {
            Orders->Add(static_cast<order^>(orders[i]));
        }
    }
    return Orders;
}
