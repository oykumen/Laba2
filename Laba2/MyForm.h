#pragma once
#include "Client.h"
#include "order.h"
#include "Search_Orders.h"

namespace Laba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			/*ArrayList^ books1 = gcnew ArrayList();
			books1->Add("book1");
			books1->Add("book2");
			ArrayList^ books2 = gcnew ArrayList();
			books2->Add("book3");
			books2->Add("book4");
			ArrayList^ books3 = gcnew ArrayList();
			books3->Add("book5");
			books3->Add("book6");

			Client^ Client1 = gcnew Client("Client1");
			Client1->Set_Discount(10);
			Client^ Client2 = gcnew Client("Client2");
			Client2->Set_Discount(15);
			Client^ Client3 = gcnew Client("Client3");
			Client3->Set_Discount(10);

			ArrayList^ orders = gcnew ArrayList();
			order^ order1 = gcnew order(1, books1, Client1);
			order^ order2 = gcnew order(2, books2, Client2);
			order^ order3 = gcnew order(3, books3, Client3);

			orders->Add(order1);
			orders->Add(order2);
			orders->Add(order3);

			Order_List^ List = gcnew Order_List(orders);*/
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_search_orders;
	private: System::Windows::Forms::TextBox^ textBox_Discount;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView_result;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Order_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Client_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Discount;
	private: ArrayList^ books1 = gcnew ArrayList();
	private: ArrayList^ books2 = gcnew ArrayList();
	private: ArrayList^ books3 = gcnew ArrayList();
	private: Client^ Client1 = gcnew Client("Client1");
	private: Client^ Client2 = gcnew Client("Client2");
	private: Client^ Client3 = gcnew Client("Client3");
	private: ArrayList^ orders = gcnew ArrayList();











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_search_orders = (gcnew System::Windows::Forms::Button());
			this->textBox_Discount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_result = (gcnew System::Windows::Forms::DataGridView());
			this->Column_Order_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Client_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_result))->BeginInit();
			this->SuspendLayout();
			// 
			// button_search_orders
			// 
			this->button_search_orders->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_search_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_search_orders->Location = System::Drawing::Point(190, 80);
			this->button_search_orders->Name = L"button_search_orders";
			this->button_search_orders->Size = System::Drawing::Size(100, 46);
			this->button_search_orders->TabIndex = 0;
			this->button_search_orders->Text = L"Найти заказы";
			this->button_search_orders->UseVisualStyleBackColor = true;
			this->button_search_orders->UseWaitCursor = true;
			this->button_search_orders->Click += gcnew System::EventHandler(this, &MyForm::button_search_orders_Click);
			// 
			// textBox_Discount
			// 
			this->textBox_Discount->Location = System::Drawing::Point(190, 31);
			this->textBox_Discount->Name = L"textBox_Discount";
			this->textBox_Discount->Size = System::Drawing::Size(100, 24);
			this->textBox_Discount->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите значение скидки";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_search_orders);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox_Discount);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 155);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поиск заказов по заданной скидке";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// dataGridView_result
			// 
			this->dataGridView_result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_result->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column_Order_Number,
					this->Column_Client_Name, this->Column_Discount
			});
			this->dataGridView_result->Location = System::Drawing::Point(374, 12);
			this->dataGridView_result->Name = L"dataGridView_result";
			this->dataGridView_result->RowHeadersWidth = 51;
			this->dataGridView_result->RowTemplate->Height = 24;
			this->dataGridView_result->Size = System::Drawing::Size(299, 155);
			this->dataGridView_result->TabIndex = 4;
			// 
			// Column_Order_Number
			// 
			this->Column_Order_Number->FillWeight = 55;
			this->Column_Order_Number->HeaderText = L"Номер заказа";
			this->Column_Order_Number->MinimumWidth = 55;
			this->Column_Order_Number->Name = L"Column_Order_Number";
			this->Column_Order_Number->Width = 55;
			// 
			// Column_Client_Name
			// 
			this->Column_Client_Name->FillWeight = 60;
			this->Column_Client_Name->HeaderText = L"Имя клиента";
			this->Column_Client_Name->MinimumWidth = 60;
			this->Column_Client_Name->Name = L"Column_Client_Name";
			this->Column_Client_Name->Width = 60;
			// 
			// Column_Discount
			// 
			this->Column_Discount->FillWeight = 55;
			this->Column_Discount->HeaderText = L"Скидка";
			this->Column_Discount->MinimumWidth = 55;
			this->Column_Discount->Name = L"Column_Discount";
			this->Column_Discount->Width = 55;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 174);
			this->Controls->Add(this->dataGridView_result);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(703, 221);
			this->MinimumSize = System::Drawing::Size(703, 221);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_result))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_search_orders_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
