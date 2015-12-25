#pragma once

namespace EliteDangerousTradeHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::MenuStrip^  MenuM;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuFile;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuOpen;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuSave;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuSaveAs;
	private: System::Windows::Forms::ToolStripSeparator^  MenuLine;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuExit;
	private: System::Windows::Forms::Label^  FileNameLabel;	
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
		// String used for users saved files.
		String^ CurrentFileDirectory = "";
		String^ CurrentFileName = "";





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
			this->MenuM = (gcnew System::Windows::Forms::MenuStrip());
			this->MenuFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuLine = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->MenuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FileNameLabel = (gcnew System::Windows::Forms::Label());
			this->MenuM->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuM
			// 
			this->MenuM->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->MenuFile });
			this->MenuM->Location = System::Drawing::Point(0, 0);
			this->MenuM->Name = L"MenuM";
			this->MenuM->Size = System::Drawing::Size(699, 24);
			this->MenuM->TabIndex = 4;
			this->MenuM->Text = L"menuStrip1";
			// 
			// MenuFile
			// 
			this->MenuFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->MenuOpen, this->MenuSave,
					this->MenuSaveAs, this->MenuLine, this->MenuExit
			});
			this->MenuFile->Name = L"MenuFile";
			this->MenuFile->Size = System::Drawing::Size(37, 20);
			this->MenuFile->Text = L"&File";
			// 
			// MenuOpen
			// 
			this->MenuOpen->Name = L"MenuOpen";
			this->MenuOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->MenuOpen->Size = System::Drawing::Size(177, 22);
			this->MenuOpen->Text = L"&Open";
			this->MenuOpen->Click += gcnew System::EventHandler(this, &MainForm::loadToolStripMenuItem_Click);
			// 
			// MenuSave
			// 
			this->MenuSave->Name = L"MenuSave";
			this->MenuSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->MenuSave->Size = System::Drawing::Size(177, 22);
			this->MenuSave->Text = L"&Save";
			this->MenuSave->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// MenuSaveAs
			// 
			this->MenuSaveAs->Name = L"MenuSaveAs";
			this->MenuSaveAs->ShortcutKeyDisplayString = L"";
			this->MenuSaveAs->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt)
				| System::Windows::Forms::Keys::S));
			this->MenuSaveAs->Size = System::Drawing::Size(177, 22);
			this->MenuSaveAs->Text = L"Save &As";
			this->MenuSaveAs->Click += gcnew System::EventHandler(this, &MainForm::MenuSaveAs_Click);
			// 
			// MenuLine
			// 
			this->MenuLine->Name = L"MenuLine";
			this->MenuLine->Size = System::Drawing::Size(174, 6);
			// 
			// MenuExit
			// 
			this->MenuExit->Name = L"MenuExit";
			this->MenuExit->ShortcutKeys = System::Windows::Forms::Keys::F12;
			this->MenuExit->Size = System::Drawing::Size(177, 22);
			this->MenuExit->Text = L"E&xit";
			this->MenuExit->Click += gcnew System::EventHandler(this, &MainForm::MenuExit_Click);
			// 
			// FileNameLabel
			// 
			this->FileNameLabel->AutoSize = true;
			this->FileNameLabel->Location = System::Drawing::Point(12, 37);
			this->FileNameLabel->Name = L"FileNameLabel";
			this->FileNameLabel->Size = System::Drawing::Size(51, 13);
			this->FileNameLabel->TabIndex = 0;
			this->FileNameLabel->Text = L"FileName";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 284);
			this->Controls->Add(this->FileNameLabel);
			this->Controls->Add(this->MenuM);
			this->MainMenuStrip = this->MenuM;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Elite Dangerous Trading Helper Tool";
			this->MenuM->ResumeLayout(false);
			this->MenuM->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ChangeMenuTitle(String^ String) {
		//Changes MenuBar's Title to Filename + Name of App.
		this->Text = String + L" - Elite Dangerous Trading Helper Tool";
}
private: System::Void SaveToFile(String^ String) {
		//Save To File
}
private: System::Void LoadButtonClick(System::Object^  sender, System::EventArgs^  e) {

}
	private: System::Void SaveListClick(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ LoadFileDirectory = gcnew OpenFileDialog();

	LoadFileDirectory->Title = "Open File Database";

	LoadFileDirectory->Filter = "XML Files|*.xml";

	if (CurrentFileDirectory != "")
	{
		LoadFileDirectory->InitialDirectory = CurrentFileDirectory;
	}
	else
	{
		LoadFileDirectory->InitialDirectory = System::IO::Directory::GetCurrentDirectory()->ToString();
	}

	if (LoadFileDirectory->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		return;
	}
	//CurrentFileDirectory = LoadFileDirectory->FileName->ToString();
	CurrentFileDirectory = System::IO::Path::GetDirectoryName(LoadFileDirectory->FileName)->ToString();

	MessageBox::Show("Filename:\n" + LoadFileDirectory->FileName);
	MessageBox::Show("Directory:\n" + IO::Directory::GetCurrentDirectory());
	MessageBox::Show("CurrentFileDirectory:\n" + CurrentFileDirectory);
	// Change Menu Bar text based on File name.
	MainForm::ChangeMenuTitle(LoadFileDirectory->SafeFileName);
	//System::Windows::Forms::OpenFileDialog::SafeFileName
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CurrentFileName == "")
	{
		SaveFileDialog^ SaveFileDirectory = gcnew SaveFileDialog();

		SaveFileDirectory->Title = "Save File Directory";

		SaveFileDirectory->Filter = "Text Files|*.txt|All Files|*.*";

		SaveFileDirectory->DefaultExt = ".txt";

		if (CurrentFileDirectory != "")
		{
			SaveFileDirectory->InitialDirectory = CurrentFileDirectory;
		}
		else
		{
			SaveFileDirectory->InitialDirectory = System::IO::Directory::GetCurrentDirectory()->ToString();
		}

		if (SaveFileDirectory->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		{
			return;
		}
		CurrentFileName = SaveFileDirectory->FileName->ToString();
		MessageBox::Show("Filename:\n" + SaveFileDirectory->FileName);
		MessageBox::Show("Directory:\n" + IO::Directory::GetCurrentDirectory());
		MessageBox::Show("CurrentFileName:\n" + CurrentFileName);
	}
	else
	{
		MessageBox::Show("CurrentFileName:\n" + CurrentFileName);
	}
	MainForm::SaveToFile(" ");
}
private: System::Void MenuSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
	//Spawn SaveFileDialog
	SaveFileDialog^ SaveFileDirectory = gcnew SaveFileDialog();
	SaveFileDirectory->Title = "Save File Directory";
	SaveFileDirectory->Filter = "XML Files|*.xml";
	
	if (CurrentFileName == "") //If File was never loaded
	{
		SaveFileDirectory->FileName = "Untitled";
	}
	else
	{
		SaveFileDirectory->FileName = CurrentFileName;
	}
	if (CurrentFileDirectory != "")
	{
		SaveFileDirectory->InitialDirectory = CurrentFileDirectory;
	}
	else
	{
		SaveFileDirectory->InitialDirectory = System::IO::Directory::GetCurrentDirectory()->ToString();
	}

	if (SaveFileDirectory->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		return;
	}

	CurrentFileName = SaveFileDirectory->FileName->ToString();
	
	MainForm::SaveToFile(CurrentFileName);
	MessageBox::Show("Filename:\n" + SaveFileDirectory->FileName);
	MessageBox::Show("Directory:\n" + IO::Directory::GetCurrentDirectory());
	MessageBox::Show("CurrentFileName:\n" + CurrentFileName);
}
private: System::Void MenuExit_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult QuitDialog;
	QuitDialog = MessageBox::Show("Would you like to save before exiting?", "Elite Dangerous Trade Helper", MessageBoxButtons::YesNoCancel);
	if (QuitDialog == System::Windows::Forms::DialogResult::Yes)
	{
		//Code to save.
		MainForm::saveToolStripMenuItem_Click(this, e);
		//MainForm::saveToolStripMenuItem_Click();
		System::Windows::Forms::Application::Exit();
	};
	if (QuitDialog == System::Windows::Forms::DialogResult::No)
	{
		System::Windows::Forms::Application::Exit();
	};
	if (QuitDialog == System::Windows::Forms::DialogResult::Cancel)
	{
		return;
	};
}
};
}
