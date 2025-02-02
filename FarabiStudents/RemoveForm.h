#pragma once

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RemoveForm
	/// </summary>
	public ref class RemoveForm : public System::Windows::Forms::Form
	{
	public:
		RemoveForm(void)
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
		~RemoveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(53, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 54);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label9->Location = System::Drawing::Point(91, 53);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 23);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Student ID";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox9->Location = System::Drawing::Point(85, 79);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(109, 36);
			this->textBox9->TabIndex = 35;
			// 
			// RemoveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button1);
			this->Name = L"RemoveForm";
			this->Text = L"RemoveForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
