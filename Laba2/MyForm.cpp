#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Laba2::MyForm form;
	Application::Run(% form);
}

System::Void Laba2::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	books1->Add("book1");
		books1->Add("book2");
		books2->Add("book3");
		books2->Add("book4");
		books3->Add("book5");
		books3->Add("book6");

		
		Client1->Set_Discount(10);

		Client2->Set_Discount(15);
		
		Client3->Set_Discount(10);

		
		order^ order1 = gcnew order(1, books1, Client1);
		order^ order2 = gcnew order(2, books2, Client2);
		order^ order3 = gcnew order(3, books3, Client3);

		orders->Add(order1);
		orders->Add(order2);
		orders->Add(order3);

	return System::Void();
}

System::Void Laba2::MyForm::button_search_orders_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ Text = textBox_Discount->Text->ToString();
	bool a = true;
	for (int i = 0; i < Text->Length; i++) {
		if (Text[i] <= 57 && Text[i] >= 48)
		{ }
		else
		{
			a = false;
		}
	}
	
	if (!a) {
		MessageBox::Show("Введено некорректное значение скидки!","Ошибка!");
		return;
	}
	else
	{
		int^ Discount = int::Parse(this->textBox_Discount->Text);
		if (*Discount > 100) {
			MessageBox::Show("Введено некорректное значение скидки!", "Ошибка!");
			return;
		}
		Order_List^ List = gcnew Order_List(orders);
		ArrayList^ outList = List->Search_Orders(Discount);
		if (outList->Count != 0)
		{
			dataGridView_result->Rows->Clear();
			for (int i = 0; i < outList->Count; i++)
			{
				dataGridView_result->Rows->Add(static_cast<order^>(outList[i])->Get_Order_Number(), static_cast<order^>(outList[i])->Get_Client_Name(), static_cast<order^>(outList[i])->Get_Client_Discount());
			}
		}
		else
		{
			MessageBox::Show("Ничего не найдено", "Печалька");
		}
	}
}


