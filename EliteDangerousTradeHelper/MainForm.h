#pragma once

namespace EDTH {

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
		// String used for users saved files.
	public: String^ CurrentFileDirectory = "";
	public: String^ CurrentFileName = "";
	public: XmlDocument ^ XMLFile = gcnew XmlDocument;
		private: System::Windows::Forms::MenuStrip^  MenuM;
		private: System::Windows::Forms::ToolStripMenuItem^  MenuFile;
		private: System::Windows::Forms::ToolStripMenuItem^  MenuOpen;
		private: System::Windows::Forms::ToolStripMenuItem^  MenuSave;
		private: System::Windows::Forms::ToolStripMenuItem^  MenuSaveAs;
		private: System::Windows::Forms::ToolStripSeparator^  MenuLine;
		private: System::Windows::Forms::ToolStripMenuItem^  MenuExit;
		private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
		private: System::Windows::Forms::Label^  FileNameLabel;









	private: System::Windows::Forms::HelpProvider^  helpProvider1;









	private: System::Windows::Forms::TextBox^  ShipCapacityBox;
	private: System::Windows::Forms::Label^  ShipCapacityLabel;
	private: System::Windows::Forms::TextBox^  ProfitCapTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SystemBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  StationBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BuyBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DistanceBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  JumpsBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ProfitBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ETEBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ProfitHBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ProfitCapBox;
	private: System::Windows::Forms::Label^  SumLabel;
	private: System::Windows::Forms::TextBox^  ProfitHTotal;
	private: System::Windows::Forms::TextBox^  TotalTime;
	private: System::Windows::Forms::TextBox^  ProfitSum;
	private: System::Windows::Forms::TextBox^  LightYearTotal;
	private: System::Windows::Forms::DataGridView^  InformationGrid;








































	public: MainForm(void)
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
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FileNameLabel = (gcnew System::Windows::Forms::Label());
			this->InformationGrid = (gcnew System::Windows::Forms::DataGridView());
			this->SystemBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StationBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BuyBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DistanceBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->JumpsBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfitBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ETEBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfitHBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfitCapBox = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->ShipCapacityBox = (gcnew System::Windows::Forms::TextBox());
			this->ShipCapacityLabel = (gcnew System::Windows::Forms::Label());
			this->ProfitCapTotal = (gcnew System::Windows::Forms::TextBox());
			this->SumLabel = (gcnew System::Windows::Forms::Label());
			this->ProfitHTotal = (gcnew System::Windows::Forms::TextBox());
			this->TotalTime = (gcnew System::Windows::Forms::TextBox());
			this->ProfitSum = (gcnew System::Windows::Forms::TextBox());
			this->LightYearTotal = (gcnew System::Windows::Forms::TextBox());
			this->MenuM->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InformationGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// MenuM
			// 
			this->MenuM->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->MenuFile, this->testToolStripMenuItem });
			this->MenuM->Location = System::Drawing::Point(0, 0);
			this->MenuM->Name = L"MenuM";
			this->MenuM->Size = System::Drawing::Size(967, 24);
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
			this->MenuOpen->Click += gcnew System::EventHandler(this, &MainForm::MenuOpen_Click);
			// 
			// MenuSave
			// 
			this->MenuSave->Name = L"MenuSave";
			this->MenuSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->MenuSave->Size = System::Drawing::Size(177, 22);
			this->MenuSave->Text = L"&Save";
			this->MenuSave->Click += gcnew System::EventHandler(this, &MainForm::MenuSave_Click);
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
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->testToolStripMenuItem->Text = L"Test";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::testToolStripMenuItem_Click);
			// 
			// FileNameLabel
			// 
			this->FileNameLabel->AutoSize = true;
			this->FileNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FileNameLabel->Location = System::Drawing::Point(12, 80);
			this->FileNameLabel->Name = L"FileNameLabel";
			this->FileNameLabel->Size = System::Drawing::Size(82, 18);
			this->FileNameLabel->TabIndex = 0;
			this->FileNameLabel->Text = L"Information";
			// 
			// InformationGrid
			// 
			this->InformationGrid->AllowUserToResizeRows = false;
			this->InformationGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InformationGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->InformationGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->SystemBox,
					this->StationBox, this->BuyBox, this->DistanceBox, this->JumpsBox, this->ProfitBox, this->ETEBox, this->ProfitHBox, this->ProfitCapBox
			});
			this->InformationGrid->Location = System::Drawing::Point(12, 101);
			this->InformationGrid->Name = L"InformationGrid";
			this->InformationGrid->Size = System::Drawing::Size(943, 242);
			this->InformationGrid->TabIndex = 5;
			this->InformationGrid->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::CellEditedProgram);
			// 
			// SystemBox
			// 
			this->SystemBox->HeaderText = L"System Name";
			this->SystemBox->Name = L"SystemBox";
			this->SystemBox->ToolTipText = L"What System are you traveling from.";
			// 
			// StationBox
			// 
			this->StationBox->HeaderText = L"Station Name";
			this->StationBox->Name = L"StationBox";
			this->StationBox->ToolTipText = L"What Station are you traveling from.";
			// 
			// BuyBox
			// 
			this->BuyBox->HeaderText = L"Buy";
			this->BuyBox->Name = L"BuyBox";
			this->BuyBox->ToolTipText = L"What commodities are you buying\?";
			// 
			// DistanceBox
			// 
			this->DistanceBox->HeaderText = L"Distance (Lightyears)";
			this->DistanceBox->Name = L"DistanceBox";
			this->DistanceBox->ToolTipText = L"How far do you have to travel\? Write: 25.6 or 25,6. Omit the Ly part.";
			// 
			// JumpsBox
			// 
			this->JumpsBox->HeaderText = L"Jumps";
			this->JumpsBox->Name = L"JumpsBox";
			this->JumpsBox->ToolTipText = L"How many jumps with your ship is it\? Write a number only.";
			// 
			// ProfitBox
			// 
			this->ProfitBox->HeaderText = L"Profit at destiation (CR)";
			this->ProfitBox->Name = L"ProfitBox";
			this->ProfitBox->ToolTipText = L"What\'s the amount of Credit per Ton you make at the destination. Write 1200, no C"
				L"R or Credits afterwards.";
			// 
			// ETEBox
			// 
			this->ETEBox->HeaderText = L"ETE (mm:ss)";
			this->ETEBox->Name = L"ETEBox";
			this->ETEBox->ToolTipText = L"How long time does it take for you to get there\? Write 5:45 or 05:45 for minutes "
				L"and seconds.";
			// 
			// ProfitHBox
			// 
			this->ProfitHBox->HeaderText = L"Profit / H";
			this->ProfitHBox->Name = L"ProfitHBox";
			this->ProfitHBox->ReadOnly = true;
			this->ProfitHBox->ToolTipText = L"This box is filled with calculations.";
			// 
			// ProfitCapBox
			// 
			this->ProfitCapBox->HeaderText = L"Profit / Capactiy";
			this->ProfitCapBox->Name = L"ProfitCapBox";
			this->ProfitCapBox->ReadOnly = true;
			this->ProfitCapBox->ToolTipText = L"This box is filled with calculations.";
			// 
			// ShipCapacityBox
			// 
			this->ShipCapacityBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ShipCapacityBox->Location = System::Drawing::Point(855, 30);
			this->ShipCapacityBox->MaxLength = 6;
			this->ShipCapacityBox->Name = L"ShipCapacityBox";
			this->ShipCapacityBox->Size = System::Drawing::Size(100, 20);
			this->ShipCapacityBox->TabIndex = 6;
			this->ShipCapacityBox->Text = L"1";
			// 
			// ShipCapacityLabel
			// 
			this->ShipCapacityLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ShipCapacityLabel->AutoSize = true;
			this->ShipCapacityLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShipCapacityLabel->Location = System::Drawing::Point(747, 29);
			this->ShipCapacityLabel->Name = L"ShipCapacityLabel";
			this->ShipCapacityLabel->Size = System::Drawing::Size(102, 18);
			this->ShipCapacityLabel->TabIndex = 7;
			this->ShipCapacityLabel->Text = L"Ship Capacity:";
			// 
			// ProfitCapTotal
			// 
			this->ProfitCapTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ProfitCapTotal->Location = System::Drawing::Point(855, 349);
			this->ProfitCapTotal->MaxLength = 6;
			this->ProfitCapTotal->Name = L"ProfitCapTotal";
			this->ProfitCapTotal->ReadOnly = true;
			this->ProfitCapTotal->Size = System::Drawing::Size(100, 20);
			this->ProfitCapTotal->TabIndex = 8;
			this->ProfitCapTotal->Text = L"0";
			// 
			// SumLabel
			// 
			this->SumLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SumLabel->AutoSize = true;
			this->SumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SumLabel->Location = System::Drawing::Point(12, 351);
			this->SumLabel->Name = L"SumLabel";
			this->SumLabel->Size = System::Drawing::Size(43, 18);
			this->SumLabel->TabIndex = 9;
			this->SumLabel->Text = L"Sum:";
			// 
			// ProfitHTotal
			// 
			this->ProfitHTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ProfitHTotal->Location = System::Drawing::Point(749, 349);
			this->ProfitHTotal->MaxLength = 6;
			this->ProfitHTotal->Name = L"ProfitHTotal";
			this->ProfitHTotal->ReadOnly = true;
			this->ProfitHTotal->Size = System::Drawing::Size(100, 20);
			this->ProfitHTotal->TabIndex = 10;
			this->ProfitHTotal->Text = L"0";
			// 
			// TotalTime
			// 
			this->TotalTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TotalTime->Location = System::Drawing::Point(643, 349);
			this->TotalTime->MaxLength = 6;
			this->TotalTime->Name = L"TotalTime";
			this->TotalTime->ReadOnly = true;
			this->TotalTime->Size = System::Drawing::Size(100, 20);
			this->TotalTime->TabIndex = 11;
			this->TotalTime->Text = L"0";
			// 
			// ProfitSum
			// 
			this->ProfitSum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ProfitSum->Location = System::Drawing::Point(537, 349);
			this->ProfitSum->MaxLength = 6;
			this->ProfitSum->Name = L"ProfitSum";
			this->ProfitSum->ReadOnly = true;
			this->ProfitSum->Size = System::Drawing::Size(100, 20);
			this->ProfitSum->TabIndex = 12;
			this->ProfitSum->Text = L"0";
			// 
			// LightYearTotal
			// 
			this->LightYearTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LightYearTotal->Location = System::Drawing::Point(356, 349);
			this->LightYearTotal->MaxLength = 6;
			this->LightYearTotal->Name = L"LightYearTotal";
			this->LightYearTotal->ReadOnly = true;
			this->LightYearTotal->Size = System::Drawing::Size(100, 20);
			this->LightYearTotal->TabIndex = 13;
			this->LightYearTotal->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 448);
			this->Controls->Add(this->LightYearTotal);
			this->Controls->Add(this->ProfitSum);
			this->Controls->Add(this->TotalTime);
			this->Controls->Add(this->ProfitHTotal);
			this->Controls->Add(this->SumLabel);
			this->Controls->Add(this->ProfitCapTotal);
			this->Controls->Add(this->ShipCapacityLabel);
			this->Controls->Add(this->ShipCapacityBox);
			this->Controls->Add(this->InformationGrid);
			this->Controls->Add(this->FileNameLabel);
			this->Controls->Add(this->MenuM);
			this->MainMenuStrip = this->MenuM;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Elite Dangerous Trading Helper Tool";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MenuM->ResumeLayout(false);
			this->MenuM->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InformationGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ChangeMenuTitle(String^ String) {
	//Changes MenuBar's Title to Filename + Name of App.
	this->Text = String + L" - Elite Dangerous Trading Helper Tool";
}
private: System::Void SaveToFile(String^ FileName) {
	//CurrentFileName
	//Save To File
}
private: System::Void SaveListClick(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void MenuOpen_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ LoadFileDirectory = gcnew OpenFileDialog();
	LoadFileDirectory->Title = "Open File Database";
	LoadFileDirectory->Filter = "XML Files|*.xml";
	LoadFileDirectory->RestoreDirectory = true;

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
	CurrentFileName = LoadFileDirectory->FileName->ToString();
	MessageBox::Show("Filename:\n" + LoadFileDirectory->FileName);
	MessageBox::Show("Directory:\n" + IO::Directory::GetCurrentDirectory());
	MessageBox::Show("CurrentFileDirectory:\n" + CurrentFileDirectory);
	// Change Menu Bar text based on File name.
	MainForm::ChangeMenuTitle(LoadFileDirectory->SafeFileName);
	//System::Windows::Forms::OpenFileDialog::SafeFileName
	String^ strFilename = "D:\\Backup\\Users\\Administrator\\Documents\\Visual Studio 2015\\Projects\\WASD.xml";
	if (File::Exists(LoadFileDirectory->FileName))
	{
		//XMLFile->Load(LoadFileDirectory->FileName);
	}
	else
	{
		MessageBox::Show(L"The file " + LoadFileDirectory->FileName + L" was not found");
	}

}
private: System::Void MenuSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CurrentFileName == "" || CurrentFileDirectory != "") //If File was never loaded
	{
		SaveFileDialog^ SaveFileDirectory = gcnew SaveFileDialog();
		SaveFileDirectory->Title = "Save File Directory";
		SaveFileDirectory->Filter = "XML Files|*.xml";
		SaveFileDirectory->RestoreDirectory = true;

		SaveFileDirectory->FileName = "Untitled";
		SaveFileDirectory->InitialDirectory = System::IO::Directory::GetCurrentDirectory()->ToString();
		//Spawn SaveFileDialog

	}

	MainForm::SaveToFile(CurrentFileName);
}
private: System::Void MenuSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CurrentFileName == "")
	{
		SaveFileDialog^ SaveFileDirectory = gcnew SaveFileDialog();
		SaveFileDirectory->Title = "Save File Directory";
		SaveFileDirectory->Filter = "XML Files|*.xml";
		SaveFileDirectory->RestoreDirectory = true;

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
	MainForm::SaveToFile(CurrentFileName);
}
private: System::Void MenuExit_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Quit without saving?", "Elite Dangerous Trade Helper", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No)
	{
		return;
	}
	else
	{
		Application::Exit();
	}
}
private: System::Void testToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (e->CloseReason == CloseReason::UserClosing)
	{
		if (MessageBox::Show("Quit without saving?", "Elite Dangerous Trade Helper", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		else
		{
			Application::Exit();
		}
	}
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void CellEditedProgram(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	//for (int i = 0; i < sizeof(this->InformationGrid->Rows); i++)
	//{
	MessageBox::Show(this->InformationGrid->Rows[0]->Cells[0]->Value->ToString());
	//}
	
}
};
}