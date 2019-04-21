#include "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main(cli::array<String^>^ arg)
{
	Application::VisualStyleState;
	Application::SetCompatibleTextRenderingDefault(false);
	searchtreewinforms::main mainForm;
	Application::Run(% mainForm);

	return 0;
}