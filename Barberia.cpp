#include "Barberia.h"
#include "cola.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThreadAttribute]



void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	finalB::Barberia form;
	Application::Run(% form);
	

	


}

