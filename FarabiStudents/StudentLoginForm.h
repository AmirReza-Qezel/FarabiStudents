#pragma once
#include "AdminLoginForm.h"
#include "LoginSelectionForm.h"

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StudentLoginForm
	/// </summary>
	public ref class StudentLoginForm : public System::Windows::Forms::Form
	{
	public:
		StudentLoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label7->Location = System::Drawing::Point(60, -113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 66);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Login";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(142, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 65);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Log Into App";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label2->Location = System::Drawing::Point(81, 306);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 23);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(80, 339);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(434, 36);
			this->textBox2->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(81, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"UT Mail Adress";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(80, 206);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(434, 36);
			this->textBox1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(216, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 66);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label4->Location = System::Drawing::Point(173, 502);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Are you an Admin\?";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::DimGray;
			this->linkLabel1->Location = System::Drawing::Point(302, 502);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(106, 19);
			this->linkLabel1->TabIndex = 16;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Login As Admin";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StudentLoginForm::linkLabel1_LinkClicked);
			// 
			// StudentLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(594, 578);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StudentLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login As Student";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		
	}
};
}
