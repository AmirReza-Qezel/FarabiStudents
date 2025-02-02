#pragma once
#include <string>
#include "AddForm.h"
#include "UpdateForm.h"
#include "RemoveForm.h"

namespace FarabiStudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for AdminWorkspaceForm
	/// </summary>
	public ref class AdminWorkspaceForm : public System::Windows::Forms::Form
	{
	public:
		AdminWorkspaceForm(void)
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
		~AdminWorkspaceForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:




	private: System::Windows::Forms::DataGridView^ dataGridViewStudents;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ remove_btn;


	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::RadioButton^ showallrbtn;
	private: System::Windows::Forms::RadioButton^ showcerbtn;
	private: System::Windows::Forms::RadioButton^ showierbtn;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;













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
			this->dataGridViewStudents = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->showallrbtn = (gcnew System::Windows::Forms::RadioButton());
			this->showcerbtn = (gcnew System::Windows::Forms::RadioButton());
			this->showierbtn = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStudents))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewStudents
			// 
			this->dataGridViewStudents->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewStudents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStudents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID,
					this->FullName, this->Column3, this->Column4
			});
			this->dataGridViewStudents->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->dataGridViewStudents->Location = System::Drawing::Point(334, 159);
			this->dataGridViewStudents->Name = L"dataGridViewStudents";
			this->dataGridViewStudents->RowHeadersWidth = 51;
			this->dataGridViewStudents->Size = System::Drawing::Size(542, 365);
			this->dataGridViewStudents->TabIndex = 4;
			this->dataGridViewStudents->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminWorkspaceForm::dataGridViewStudents_CellContentClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"StudentID";
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// FullName
			// 
			this->FullName->DataPropertyName = L"FullName";
			this->FullName->HeaderText = L"Full Name";
			this->FullName->MinimumWidth = 6;
			this->FullName->Name = L"FullName";
			this->FullName->Width = 125;
			// 
			// Column3
			// 
			this->Column3->DataPropertyName = L"Major";
			this->Column3->HeaderText = L"Major";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->DataPropertyName = L"TotalScore";
			this->Column4->HeaderText = L"Total Score";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->update_btn);
			this->panel1->Controls->Add(this->remove_btn);
			this->panel1->Controls->Add(this->add_btn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(309, 554);
			this->panel1->TabIndex = 2;
			// 
			// update_btn
			// 
			this->update_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->update_btn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_btn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->update_btn->Location = System::Drawing::Point(32, 219);
			this->update_btn->Margin = System::Windows::Forms::Padding(0);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(240, 103);
			this->update_btn->TabIndex = 15;
			this->update_btn->Text = L"Update Existing Student";
			this->update_btn->UseVisualStyleBackColor = false;
			this->update_btn->Click += gcnew System::EventHandler(this, &AdminWorkspaceForm::update_btn_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->remove_btn->Location = System::Drawing::Point(32, 384);
			this->remove_btn->Margin = System::Windows::Forms::Padding(0);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(240, 103);
			this->remove_btn->TabIndex = 15;
			this->remove_btn->Text = L"Remove Existing Student";
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &AdminWorkspaceForm::remove_btn_Click);
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->add_btn->Location = System::Drawing::Point(32, 55);
			this->add_btn->Margin = System::Windows::Forms::Padding(0);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(240, 103);
			this->add_btn->TabIndex = 15;
			this->add_btn->Text = L"Add New Student";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &AdminWorkspaceForm::add_btn_Click);
			// 
			// showallrbtn
			// 
			this->showallrbtn->AutoSize = true;
			this->showallrbtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showallrbtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->showallrbtn->Location = System::Drawing::Point(334, 116);
			this->showallrbtn->Name = L"showallrbtn";
			this->showallrbtn->Size = System::Drawing::Size(112, 29);
			this->showallrbtn->TabIndex = 5;
			this->showallrbtn->Text = L"Show All";
			this->showallrbtn->UseVisualStyleBackColor = true;
			this->showallrbtn->CheckedChanged += gcnew System::EventHandler(this, &AdminWorkspaceForm::showallrbtn_CheckedChanged);
			// 
			// showcerbtn
			// 
			this->showcerbtn->AutoSize = true;
			this->showcerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showcerbtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->showcerbtn->Location = System::Drawing::Point(468, 116);
			this->showcerbtn->Name = L"showcerbtn";
			this->showcerbtn->Size = System::Drawing::Size(195, 29);
			this->showcerbtn->TabIndex = 5;
			this->showcerbtn->Text = L"Show CE Students";
			this->showcerbtn->UseVisualStyleBackColor = true;
			this->showcerbtn->CheckedChanged += gcnew System::EventHandler(this, &AdminWorkspaceForm::showcerbtn_CheckedChanged);
			// 
			// showierbtn
			// 
			this->showierbtn->AutoSize = true;
			this->showierbtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showierbtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->showierbtn->Location = System::Drawing::Point(687, 116);
			this->showierbtn->Name = L"showierbtn";
			this->showierbtn->Size = System::Drawing::Size(189, 29);
			this->showierbtn->TabIndex = 5;
			this->showierbtn->Text = L"Show IE Students";
			this->showierbtn->UseVisualStyleBackColor = true;
			this->showierbtn->CheckedChanged += gcnew System::EventHandler(this, &AdminWorkspaceForm::showierbtn_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(453, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 62);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Admin Panel";
			// 
			// AdminWorkspaceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(915, 554);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->showierbtn);
			this->Controls->Add(this->showcerbtn);
			this->Controls->Add(this->showallrbtn);
			this->Controls->Add(this->dataGridViewStudents);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AdminWorkspaceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminWorkspaceForm";
			this->Load += gcnew System::EventHandler(this, &AdminWorkspaceForm::AdminWorkspaceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStudents))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void AdminWorkspaceForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
public: bool showAddDialog = false;
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	FarabiStudents::AddForm addfrm;
	showAddDialog = true;
	addfrm.ShowDialog();
}
public: bool showUpdateDialog = false;
private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	FarabiStudents::UpdateForm upfrm;
	showUpdateDialog = true;
	upfrm.ShowDialog();
}
public: bool showRemoveDialog = false;
private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	FarabiStudents::RemoveForm rmvfrm;
	showRemoveDialog = true;
	rmvfrm.ShowDialog();
}
private: System::Void dataGridViewStudents_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void showallrbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection conn(constr);
	conn.Open();
	String^ query = "SELECT * FROM dbo.Students ORDER BY TotalScore Desc";
	SqlCommand^ command= gcnew SqlCommand(query,% conn);
	DataTable dtbl;
	SqlDataReader^ myReader;
	SqlDataAdapter^ sda = gcnew SqlDataAdapter();
	sda->SelectCommand = command;
	DataTable^ dbdataset = gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bsource = gcnew BindingSource();
	bsource->DataSource = dbdataset;
	dataGridViewStudents->DataSource = bsource;
	sda->Update(dbdataset);

}
private: System::Void showcerbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection conn(constr);
	conn.Open();
	String^ query = "SELECT * FROM dbo.Students WHERE Major = 'CE' ORDER BY TotalScore Desc";
	SqlCommand^ command = gcnew SqlCommand(query, % conn);
	DataTable dtbl;
	SqlDataReader^ myReader;
	SqlDataAdapter^ sda = gcnew SqlDataAdapter();
	sda->SelectCommand = command;
	DataTable^ dbdataset = gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bsource = gcnew BindingSource();
	bsource->DataSource = dbdataset;
	dataGridViewStudents->DataSource = bsource;
	sda->Update(dbdataset);
}
private: System::Void showierbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Data Source=DESKTOP-MG3EK2G;Initial Catalog=FarabiStudentManagerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection conn(constr);
	conn.Open();
	String^ query = "SELECT * FROM dbo.Students WHERE Major = 'IE' ORDER BY TotalScore Desc";
	SqlCommand^ command = gcnew SqlCommand(query, % conn);
	DataTable dtbl;
	SqlDataReader^ myReader;
	SqlDataAdapter^ sda = gcnew SqlDataAdapter();
	sda->SelectCommand = command;
	DataTable^ dbdataset = gcnew DataTable();
	sda->Fill(dbdataset);
	BindingSource^ bsource = gcnew BindingSource();
	bsource->DataSource = dbdataset;
	dataGridViewStudents->DataSource = bsource;
	sda->Update(dbdataset);
}
};
}
