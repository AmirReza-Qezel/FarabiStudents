#pragma once
#include"StudentLoginForm.h"
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
	/// Summary for AdminLoginForm
	/// </summary>
	public ref class AdminLoginForm : public System::Windows::Forms::Form
	{
	public:
		AdminLoginForm(void)
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
		~AdminLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ userNametxtBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordtxtBox;
	private: System::Windows::Forms::Button^ loginbtn;
	private: System::Windows::Forms::LinkLabel^ loginlinkLbl;



	private: System::Windows::Forms::Label^ label4;
	protected:

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
			this->userNametxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordtxtBox = (gcnew System::Windows::Forms::TextBox());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->loginlinkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label7->Location = System::Drawing::Point(215, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 66);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Login";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Click += gcnew System::EventHandler(this, &AdminLoginForm::label7_Click);
			// 
			// userNametxtBox
			// 
			this->userNametxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->userNametxtBox->Location = System::Drawing::Point(79, 203);
			this->userNametxtBox->Name = L"userNametxtBox";
			this->userNametxtBox->Size = System::Drawing::Size(434, 36);
			this->userNametxtBox->TabIndex = 3;
			this->userNametxtBox->TextChanged += gcnew System::EventHandler(this, &AdminLoginForm::userNametxtBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(80, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"User Name (Admin)";
			this->label1->Click += gcnew System::EventHandler(this, &AdminLoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label2->Location = System::Drawing::Point(80, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password (Admin)";
			// 
			// passwordtxtBox
			// 
			this->passwordtxtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->passwordtxtBox->Location = System::Drawing::Point(79, 336);
			this->passwordtxtBox->Name = L"passwordtxtBox";
			this->passwordtxtBox->Size = System::Drawing::Size(434, 36);
			this->passwordtxtBox->TabIndex = 5;
			this->passwordtxtBox->TextChanged += gcnew System::EventHandler(this, &AdminLoginForm::passwordtxtBox_TextChanged);
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->loginbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->loginbtn->Location = System::Drawing::Point(144, 435);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(300, 65);
			this->loginbtn->TabIndex = 7;
			this->loginbtn->Text = L"Log Into App";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &AdminLoginForm::loginbtn_Click);
			// 
			// loginlinkLbl
			// 
			this->loginlinkLbl->AutoSize = true;
			this->loginlinkLbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginlinkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->loginlinkLbl->LinkColor = System::Drawing::Color::DimGray;
			this->loginlinkLbl->Location = System::Drawing::Point(297, 512);
			this->loginlinkLbl->Name = L"loginlinkLbl";
			this->loginlinkLbl->Size = System::Drawing::Size(115, 19);
			this->loginlinkLbl->TabIndex = 18;
			this->loginlinkLbl->TabStop = true;
			this->loginlinkLbl->Text = L"Login As Student";
			this->loginlinkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminLoginForm::loginlinkLbl_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label4->Location = System::Drawing::Point(172, 512);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Are you a Student\?";
			// 
			// AdminLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(594, 578);
			this->Controls->Add(this->loginlinkLbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordtxtBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userNametxtBox);
			this->Controls->Add(this->label7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AdminLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login As Admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void userNametxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
public: bool isLoginValid = false;
private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = this->userNametxtBox->Text;
	String^ password = this->passwordtxtBox->Text;

	if ( (userName->Length * password->Length) == 0)
	{
		MessageBox::Show("Please Fill The Username and Password Boxes","Warning", MessageBoxButtons::OK);
	}
	else if (userName == "farabiadmin" && password == "1234")
	{
		isLoginValid = true;
		this->Close();
	}
	else
	{
		MessageBox::Show("Invalid Inputs", "Warning", MessageBoxButtons::OK);
	}
}
  private: System::Void passwordtxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void loginlinkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	

  }
 };
}
