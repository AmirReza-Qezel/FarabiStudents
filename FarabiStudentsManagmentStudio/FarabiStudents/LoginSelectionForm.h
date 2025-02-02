#pragma once

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginSelectionForm
	/// </summary>
	public ref class LoginSelectionForm : public System::Windows::Forms::Form
	{
	public:
		LoginSelectionForm(void)
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
		~LoginSelectionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ adminbtn;
	private: System::Windows::Forms::Button^ studentbtn;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginSelectionForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->adminbtn = (gcnew System::Windows::Forms::Button());
			this->studentbtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(247, 566);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AllowDrop = true;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(27, 482);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(133, 57);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Copyright 2025 \r\nAmirezaGhezelSofla.\r\nAll rights reserved.";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(24, 378);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 40);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Studio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(24, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 40);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Managment";
			this->label4->Click += gcnew System::EventHandler(this, &LoginSelectionForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(27, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 40);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Students";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &LoginSelectionForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(24, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"University";
			this->label2->Click += gcnew System::EventHandler(this, &LoginSelectionForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(24, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Farabi ";
			this->label1->Click += gcnew System::EventHandler(this, &LoginSelectionForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(57, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label7->Location = System::Drawing::Point(388, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(449, 65);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Select Login Type";
			// 
			// adminbtn
			// 
			this->adminbtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->adminbtn->Location = System::Drawing::Point(303, 193);
			this->adminbtn->Name = L"adminbtn";
			this->adminbtn->Padding = System::Windows::Forms::Padding(1, 1, 130, 1);
			this->adminbtn->Size = System::Drawing::Size(577, 97);
			this->adminbtn->TabIndex = 2;
			this->adminbtn->Text = L"Login As Admin";
			this->adminbtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->adminbtn->UseVisualStyleBackColor = false;
			this->adminbtn->Click += gcnew System::EventHandler(this, &LoginSelectionForm::adminbtn_Click);
			// 
			// studentbtn
			// 
			this->studentbtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->studentbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->studentbtn->Location = System::Drawing::Point(303, 378);
			this->studentbtn->Name = L"studentbtn";
			this->studentbtn->Padding = System::Windows::Forms::Padding(1, 1, 125, 1);
			this->studentbtn->Size = System::Drawing::Size(577, 97);
			this->studentbtn->TabIndex = 3;
			this->studentbtn->Text = L"Login As Student";
			this->studentbtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->studentbtn->UseVisualStyleBackColor = false;
			this->studentbtn->Click += gcnew System::EventHandler(this, &LoginSelectionForm::studentbtn_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(376, 203);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 76);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(376, 388);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(103, 76);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginSelectionForm::pictureBox3_Click);
			// 
			// LoginSelectionForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(957, 566);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->studentbtn);
			this->Controls->Add(this->adminbtn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"LoginSelectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginSelectionForm";
			this->Load += gcnew System::EventHandler(this, &LoginSelectionForm::LoginSelectionForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}

public: bool adminlogin = false;
private: System::Void adminbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	adminlogin = true;
	this->Close();
}

public: bool studentlogin = false;
private: System::Void studentbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	studentlogin = true;
	this->Close();
}
private: System::Void LoginSelectionForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
