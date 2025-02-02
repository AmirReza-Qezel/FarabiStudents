#include "LoginSelectionForm.h"
#include "AdminLoginForm.h"
#include "AdminWorkspaceForm.h"
#include "AddForm.h"
#include "StudentLoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FarabiStudents::LoginSelectionForm loginForm;
	FarabiStudents::AdminLoginForm adloginForm;
	FarabiStudents::AdminWorkspaceForm adworkForm;
	FarabiStudents::AddForm addForm;
	FarabiStudents::StudentLoginForm studentLoginForm;

	while (true)
	{
		loginForm.ShowDialog();
		if (loginForm.adminlogin)
		{
			
			adloginForm.ShowDialog();
			if (adloginForm.isLoginValid)
			{
				adworkForm.ShowDialog();
			}
			

			break;
			
		}
		else if (loginForm.studentlogin)
		{
			studentLoginForm.ShowDialog();
			break;
		}
		
	}
}
