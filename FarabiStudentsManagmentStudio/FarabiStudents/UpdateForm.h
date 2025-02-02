#pragma once

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateForm
	/// </summary>
	public ref class UpdateForm : public System::Windows::Forms::Form
	{
	public:
		UpdateForm(void)
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
		~UpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ xq;
	private: System::Windows::Forms::Label^ o;
	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ h;
	private: System::Windows::Forms::Label^ g;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ v;
	private: System::Windows::Forms::TextBox^ socialSkilltb;
	private: System::Windows::Forms::TextBox^ Quantumtb;
	private: System::Windows::Forms::TextBox^ rocketsciencetb;
	private: System::Windows::Forms::TextBox^ mathtb;
	private: System::Windows::Forms::Label^ k;
	private: System::Windows::Forms::Label^ d;
	private: System::Windows::Forms::TextBox^ Physicstb;
	private: System::Windows::Forms::TextBox^ biologytb;
	private: System::Windows::Forms::TextBox^ Majortb;
	private: System::Windows::Forms::TextBox^ Fullnametb;
	private: System::Windows::Forms::TextBox^ IDtb;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->xq = (gcnew System::Windows::Forms::Label());
			this->o = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->h = (gcnew System::Windows::Forms::Label());
			this->g = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->v = (gcnew System::Windows::Forms::Label());
			this->socialSkilltb = (gcnew System::Windows::Forms::TextBox());
			this->Quantumtb = (gcnew System::Windows::Forms::TextBox());
			this->rocketsciencetb = (gcnew System::Windows::Forms::TextBox());
			this->mathtb = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::Label());
			this->d = (gcnew System::Windows::Forms::Label());
			this->Physicstb = (gcnew System::Windows::Forms::TextBox());
			this->biologytb = (gcnew System::Windows::Forms::TextBox());
			this->Majortb = (gcnew System::Windows::Forms::TextBox());
			this->Fullnametb = (gcnew System::Windows::Forms::TextBox());
			this->IDtb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(204, 582);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 54);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(198, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 45);
			this->label3->TabIndex = 72;
			this->label3->Text = L"Courses Scores";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label1->Location = System::Drawing::Point(215, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 45);
			this->label1->TabIndex = 71;
			this->label1->Text = L"Student Info";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// xq
			// 
			this->xq->AutoSize = true;
			this->xq->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->xq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->xq->Location = System::Drawing::Point(422, 475);
			this->xq->Name = L"xq";
			this->xq->Size = System::Drawing::Size(98, 23);
			this->xq->TabIndex = 69;
			this->xq->Text = L"Social Skill";
			// 
			// o
			// 
			this->o->AutoSize = true;
			this->o->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->o->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->o->Location = System::Drawing::Point(123, 475);
			this->o->Name = L"o";
			this->o->Size = System::Drawing::Size(124, 23);
			this->o->TabIndex = 68;
			this->o->Text = L"Quantum Calc";
			// 
			// a
			// 
			this->a->AutoSize = true;
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->a->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->a->Location = System::Drawing::Point(422, 264);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(134, 23);
			this->a->TabIndex = 67;
			this->a->Text = L"Rocket Science";
			// 
			// h
			// 
			this->h->AutoSize = true;
			this->h->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->h->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->h->Location = System::Drawing::Point(518, 94);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(58, 23);
			this->h->TabIndex = 66;
			this->h->Text = L"Major";
			// 
			// g
			// 
			this->g->AutoSize = true;
			this->g->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->g->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->g->Location = System::Drawing::Point(272, 94);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(93, 23);
			this->g->TabIndex = 65;
			this->g->Text = L"Full Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label9->Location = System::Drawing::Point(87, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 23);
			this->label9->TabIndex = 64;
			this->label9->Text = L"ID";
			// 
			// v
			// 
			this->v->AutoSize = true;
			this->v->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->v->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->v->Location = System::Drawing::Point(123, 264);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(115, 23);
			this->v->TabIndex = 70;
			this->v->Text = L"Mathematics";
			// 
			// socialSkilltb
			// 
			this->socialSkilltb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->socialSkilltb->Location = System::Drawing::Point(426, 508);
			this->socialSkilltb->Name = L"socialSkilltb";
			this->socialSkilltb->Size = System::Drawing::Size(109, 36);
			this->socialSkilltb->TabIndex = 63;
			// 
			// Quantumtb
			// 
			this->Quantumtb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Quantumtb->Location = System::Drawing::Point(122, 508);
			this->Quantumtb->Name = L"Quantumtb";
			this->Quantumtb->Size = System::Drawing::Size(109, 36);
			this->Quantumtb->TabIndex = 62;
			// 
			// rocketsciencetb
			// 
			this->rocketsciencetb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->rocketsciencetb->Location = System::Drawing::Point(426, 297);
			this->rocketsciencetb->Name = L"rocketsciencetb";
			this->rocketsciencetb->Size = System::Drawing::Size(109, 36);
			this->rocketsciencetb->TabIndex = 61;
			// 
			// mathtb
			// 
			this->mathtb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->mathtb->Location = System::Drawing::Point(122, 297);
			this->mathtb->Name = L"mathtb";
			this->mathtb->Size = System::Drawing::Size(109, 36);
			this->mathtb->TabIndex = 60;
			// 
			// k
			// 
			this->k->AutoSize = true;
			this->k->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->k->Location = System::Drawing::Point(422, 372);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(69, 23);
			this->k->TabIndex = 59;
			this->k->Text = L"Physics";
			// 
			// d
			// 
			this->d->AutoSize = true;
			this->d->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->d->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->d->Location = System::Drawing::Point(123, 372);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(73, 23);
			this->d->TabIndex = 58;
			this->d->Text = L"Biology";
			// 
			// Physicstb
			// 
			this->Physicstb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Physicstb->Location = System::Drawing::Point(426, 405);
			this->Physicstb->Name = L"Physicstb";
			this->Physicstb->Size = System::Drawing::Size(109, 36);
			this->Physicstb->TabIndex = 57;
			// 
			// biologytb
			// 
			this->biologytb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->biologytb->Location = System::Drawing::Point(122, 405);
			this->biologytb->Name = L"biologytb";
			this->biologytb->Size = System::Drawing::Size(109, 36);
			this->biologytb->TabIndex = 56;
			// 
			// Majortb
			// 
			this->Majortb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Majortb->Location = System::Drawing::Point(473, 120);
			this->Majortb->Name = L"Majortb";
			this->Majortb->Size = System::Drawing::Size(140, 36);
			this->Majortb->TabIndex = 54;
			// 
			// Fullnametb
			// 
			this->Fullnametb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Fullnametb->Location = System::Drawing::Point(251, 120);
			this->Fullnametb->Name = L"Fullnametb";
			this->Fullnametb->Size = System::Drawing::Size(140, 36);
			this->Fullnametb->TabIndex = 55;
			// 
			// IDtb
			// 
			this->IDtb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->IDtb->Location = System::Drawing::Point(41, 120);
			this->IDtb->Name = L"IDtb";
			this->IDtb->Size = System::Drawing::Size(140, 36);
			this->IDtb->TabIndex = 53;
			// 
			// UpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 664);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->xq);
			this->Controls->Add(this->o);
			this->Controls->Add(this->a);
			this->Controls->Add(this->h);
			this->Controls->Add(this->g);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->v);
			this->Controls->Add(this->socialSkilltb);
			this->Controls->Add(this->Quantumtb);
			this->Controls->Add(this->rocketsciencetb);
			this->Controls->Add(this->mathtb);
			this->Controls->Add(this->k);
			this->Controls->Add(this->d);
			this->Controls->Add(this->Physicstb);
			this->Controls->Add(this->biologytb);
			this->Controls->Add(this->Majortb);
			this->Controls->Add(this->Fullnametb);
			this->Controls->Add(this->IDtb);
			this->Controls->Add(this->button1);
			this->Name = L"UpdateForm";
			this->Text = L"UpdateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
