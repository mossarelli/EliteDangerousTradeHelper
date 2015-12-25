/*
	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <iostream>
#include <string>

#using <mscorlib.dll>
#using <System.Xml.dll>

using namespace System;
using namespace System::Xml;
using namespace System::Windows::Forms;
using namespace System::IO;

#include "MainForm.h"
using namespace EDTH;



[STAThread]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	EDTH::MainForm form; //Create Class
	
	Application::Run(%form);
	return 0;
}