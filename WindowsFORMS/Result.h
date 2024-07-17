#pragma once
#include <string>
#include <list>
#include "Student.h"
#include "DynamicList.h"
namespace summerpr {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Results
	/// </summary>
	public ref class Results : public System::Windows::Forms::Form
	{
	public:
		Results(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Results()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ImageList^ imageList1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;






	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button5;











	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(10, 159);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 31);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Имя студента";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(311, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Отправить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Results::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(428, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Results::button2_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Оценки";
			// 
			// textBox2
			// 
			this->textBox2->AcceptsTab = true;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(98, 210);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 31);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox3->Location = System::Drawing::Point(141, 210);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 31);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox4->Location = System::Drawing::Point(184, 210);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 31);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox5->Location = System::Drawing::Point(227, 210);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 31);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox6->Location = System::Drawing::Point(270, 210);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(37, 31);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox7->Location = System::Drawing::Point(10, 69);
			this->textBox7->MaxLength = 30;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(295, 31);
			this->textBox7->TabIndex = 17;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Results::textBox7_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 25);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Имя файла";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(311, 64);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(122, 36);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Отправить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Results::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(428, 64);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(122, 36);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Очистить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Results::button7_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(313, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 36);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Отправить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Results::button3_Click_1);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(627, 100);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(308, 64);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Добавить студента в файл";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Results::button8_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(428, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 36);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Results::button4_Click);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->ForeColor = System::Drawing::Color::Black;
			this->textBox8->Location = System::Drawing::Point(213, 322);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox8->Size = System::Drawing::Size(814, 447);
			this->textBox8->TabIndex = 26;
			this->textBox8->WordWrap = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Window;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->ForeColor = System::Drawing::Color::Black;
			this->textBox9->Location = System::Drawing::Point(539, 365);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(166, 47);
			this->textBox9->TabIndex = 28;
			this->textBox9->WordWrap = false;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->ForeColor = System::Drawing::Color::Black;
			this->textBox10->Location = System::Drawing::Point(375, 437);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(166, 47);
			this->textBox10->TabIndex = 29;
			this->textBox10->WordWrap = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->ForeColor = System::Drawing::Color::Black;
			this->textBox11->Location = System::Drawing::Point(716, 437);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(166, 47);
			this->textBox11->TabIndex = 30;
			this->textBox11->WordWrap = false;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Window;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->ForeColor = System::Drawing::Color::Black;
			this->textBox12->Location = System::Drawing::Point(227, 543);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(166, 47);
			this->textBox12->TabIndex = 31;
			this->textBox12->WordWrap = false;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Window;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->ForeColor = System::Drawing::Color::Black;
			this->textBox13->Location = System::Drawing::Point(428, 543);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(166, 47);
			this->textBox13->TabIndex = 32;
			this->textBox13->WordWrap = false;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Window;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->ForeColor = System::Drawing::Color::Black;
			this->textBox14->Location = System::Drawing::Point(840, 543);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(166, 47);
			this->textBox14->TabIndex = 33;
			this->textBox14->WordWrap = false;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Window;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->ForeColor = System::Drawing::Color::Black;
			this->textBox15->Location = System::Drawing::Point(646, 543);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(166, 47);
			this->textBox15->TabIndex = 34;
			this->textBox15->WordWrap = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 333);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 47);
			this->button5->TabIndex = 35;
			this->button5->Text = L"showlist1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Results::button5_Click);
			// 
			// Results
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1039, 818);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Results";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Results";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		Studentname = " ";
		this->button1->UseVisualStyleBackColor = true;
		pressed2 = 0;

	}
		private:   bool isBeetweenTwoAndFive(String^ number)
		   {
			   if (number == "2" || number == "3" || number == "4" || number == "5")
				   return true;
			   return false;
		   }
		   String^ filename;
		   String^ Studentname;
		   String^ mark1; String^ mark2; String^ mark3; String^ mark4; String^ mark5;
		   bool pressed1 = 0;
		   bool pressed2 = 0;
		   bool pressed3 = 0;
		   bool dataiscorrect()
		   {
			   if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text) || String::IsNullOrEmpty(textBox5->Text)
				   || String::IsNullOrEmpty(textBox6->Text) || String::IsNullOrEmpty(textBox7->Text))
				   return 0;
			   if (!(isBeetweenTwoAndFive(mark1) && isBeetweenTwoAndFive(mark2) && isBeetweenTwoAndFive(mark3) && isBeetweenTwoAndFive(mark4)
				   && isBeetweenTwoAndFive(mark5)))
				   return 0;
			   if (!(pressed1 && pressed2 && pressed3))
				 return 0;
			   return 1;


		   }

		  
		   
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Studentname = textBox1->Text;
		if (String::IsNullOrEmpty(textBox1->Text))
			button1->BackColor = Color::Red;
		else
		{
			button1->BackColor = Color::LightGreen;
			pressed2 = 1;
		}

	}
	
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->FileName = textBox7->Text;

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = textBox7->Text + ".txt";
		if (String::IsNullOrEmpty(textBox7->Text))
			button6->BackColor = Color::Red;
		else
		{
			pressed1 = 1;
			button6->BackColor = Color::LightGreen;
		}


	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Clear();
		saveFileDialog1->FileName = "";
		this->button6->UseVisualStyleBackColor = true;
		pressed1 = 0;


	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		mark1 = textBox2->Text;
		mark2 = textBox3->Text;
		mark3 = textBox4->Text;
		mark4 = textBox5->Text;
		mark5 = textBox6->Text;
		if (String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text) || String::IsNullOrEmpty(textBox5->Text)
			|| String::IsNullOrEmpty(textBox6->Text))
			button3->BackColor = Color::Red;
		else if (!(isBeetweenTwoAndFive(mark1) && isBeetweenTwoAndFive(mark2) && isBeetweenTwoAndFive(mark3) && isBeetweenTwoAndFive(mark4)
			&& isBeetweenTwoAndFive(mark5)))
			button3->BackColor = Color::Red;
		else
		{
			button3->BackColor = Color::LightGreen;
			pressed3 = 1;
		}

	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataiscorrect())
		{

			StreamWriter^ pwriter = gcnew StreamWriter(filename, true);
			String^ str =Studentname;
			pwriter->WriteLine(str);
			str =mark1 + " " + mark2 + " " + mark3 + " " + mark4 + " " + mark5;
			pwriter->WriteLine(str);
			pwriter->Close();
			this->button2_Click(sender,e);
			this->button4_Click(sender,e);
			

		}
		else
			MessageBox::Show(this, "Заполните ячейки корректными данными ", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	mark1 = mark2 = mark3 = mark4 = mark5 = "";
	this->button3->UseVisualStyleBackColor = true;
	pressed3 = 0;



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
