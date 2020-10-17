#include "MyForm.h"
#include <iostream>
#include <stdio.h>
#include<fstream>
#include"Nodo.h"
#include"Lista.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto01KarlaLopez1059420::MyForm form;
	Application::Run(% form);
	return 0;

}
