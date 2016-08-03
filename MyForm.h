#pragma once
#include <string>
#include "msclr\marshal_cppstd.h"
#include <ctime>
#include <cstdlib>

namespace randPSWgen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	// start PSW declarations
	const string digitList = "1234567890";
	const string lowerList = "abcdefghijklmnopqrstuvwxyz";
	const string upperList = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string symbolList = "~!@#$%^&*_+-=?";
	const string ambiguousList = "{}[]()/|\'`~,\".:;.<>";
	// end PSW declarations

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonGenPsw;
	protected:

	internal: System::Windows::Forms::CheckedListBox^  checkedListBoxOptions;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownPswLength;
	internal:
	private:

	private:

	private: System::Windows::Forms::Label^  labelPswLength;
	internal:

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  buttonCopyPsw;

	private: System::Windows::Forms::TextBox^  textBoxNewPsw;

	private: System::Windows::Forms::Label^  labelChooseOptions;
	private: System::Windows::Forms::Label^  labelNewPsw;
	private: System::Windows::Forms::Label^  labelEmptyOptions;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;



	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->buttonGenPsw = (gcnew System::Windows::Forms::Button());
			this->checkedListBoxOptions = (gcnew System::Windows::Forms::CheckedListBox());
			this->numericUpDownPswLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelPswLength = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->buttonCopyPsw = (gcnew System::Windows::Forms::Button());
			this->textBoxNewPsw = (gcnew System::Windows::Forms::TextBox());
			this->labelChooseOptions = (gcnew System::Windows::Forms::Label());
			this->labelNewPsw = (gcnew System::Windows::Forms::Label());
			this->labelEmptyOptions = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPswLength))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonGenPsw
			// 
			this->buttonGenPsw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonGenPsw->Location = System::Drawing::Point(147, 199);
			this->buttonGenPsw->Margin = System::Windows::Forms::Padding(4);
			this->buttonGenPsw->Name = L"buttonGenPsw";
			this->buttonGenPsw->Size = System::Drawing::Size(277, 46);
			this->buttonGenPsw->TabIndex = 0;
			this->buttonGenPsw->Text = L"Generate password";
			this->buttonGenPsw->UseVisualStyleBackColor = true;
			this->buttonGenPsw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkedListBoxOptions
			// 
			this->checkedListBoxOptions->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->checkedListBoxOptions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxOptions->BackColor = System::Drawing::SystemColors::MenuBar;
			this->checkedListBoxOptions->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBoxOptions->CheckOnClick = true;
			this->checkedListBoxOptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkedListBoxOptions->ForeColor = System::Drawing::SystemColors::WindowText;
			this->checkedListBoxOptions->FormattingEnabled = true;
			this->checkedListBoxOptions->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Include Lowercase characters", L"Include Uppercase characters",
					L"Include Numbers", L"Include Symbols", L"Include Ambiguous characters"
			});
			this->checkedListBoxOptions->Location = System::Drawing::Point(16, 50);
			this->checkedListBoxOptions->Margin = System::Windows::Forms::Padding(4);
			this->checkedListBoxOptions->Name = L"checkedListBoxOptions";
			this->checkedListBoxOptions->Size = System::Drawing::Size(549, 90);
			this->checkedListBoxOptions->TabIndex = 2;
			this->checkedListBoxOptions->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// numericUpDownPswLength
			// 
			this->numericUpDownPswLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->numericUpDownPswLength->Location = System::Drawing::Point(331, 161);
			this->numericUpDownPswLength->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownPswLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 128, 0, 0, 0 });
			this->numericUpDownPswLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDownPswLength->Name = L"numericUpDownPswLength";
			this->numericUpDownPswLength->Size = System::Drawing::Size(101, 23);
			this->numericUpDownPswLength->TabIndex = 3;
			this->numericUpDownPswLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// labelPswLength
			// 
			this->labelPswLength->AutoSize = true;
			this->labelPswLength->Location = System::Drawing::Point(135, 163);
			this->labelPswLength->Name = L"labelPswLength";
			this->labelPswLength->Size = System::Drawing::Size(180, 17);
			this->labelPswLength->TabIndex = 4;
			this->labelPswLength->Text = L"Password Length (6 - 128):";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(16, 253);
			this->progressBar1->MarqueeAnimationSpeed = 1;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(549, 13);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 6;
			// 
			// buttonCopyPsw
			// 
			this->buttonCopyPsw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonCopyPsw->Location = System::Drawing::Point(147, 350);
			this->buttonCopyPsw->Margin = System::Windows::Forms::Padding(4);
			this->buttonCopyPsw->Name = L"buttonCopyPsw";
			this->buttonCopyPsw->Size = System::Drawing::Size(277, 46);
			this->buttonCopyPsw->TabIndex = 0;
			this->buttonCopyPsw->Text = L"Copy password";
			this->buttonCopyPsw->UseVisualStyleBackColor = true;
			// 
			// textBoxNewPsw
			// 
			this->textBoxNewPsw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxNewPsw->Location = System::Drawing::Point(16, 300);
			this->textBoxNewPsw->Name = L"textBoxNewPsw";
			this->textBoxNewPsw->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxNewPsw->Size = System::Drawing::Size(549, 38);
			this->textBoxNewPsw->TabIndex = 8;
			this->textBoxNewPsw->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxNewPsw->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxNewPsw_TextChanged);
			// 
			// labelChooseOptions
			// 
			this->labelChooseOptions->AutoSize = true;
			this->labelChooseOptions->BackColor = System::Drawing::SystemColors::Control;
			this->labelChooseOptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChooseOptions->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelChooseOptions->Location = System::Drawing::Point(117, 13);
			this->labelChooseOptions->Name = L"labelChooseOptions";
			this->labelChooseOptions->Size = System::Drawing::Size(363, 17);
			this->labelChooseOptions->TabIndex = 4;
			this->labelChooseOptions->Text = L"Choose options for new password (at least one of them):";
			this->labelChooseOptions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelNewPsw
			// 
			this->labelNewPsw->AutoSize = true;
			this->labelNewPsw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelNewPsw->Location = System::Drawing::Point(231, 277);
			this->labelNewPsw->Name = L"labelNewPsw";
			this->labelNewPsw->Size = System::Drawing::Size(103, 17);
			this->labelNewPsw->TabIndex = 4;
			this->labelNewPsw->Text = L"New password:";
			// 
			// labelEmptyOptions
			// 
			this->labelEmptyOptions->AutoSize = true;
			this->labelEmptyOptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelEmptyOptions->ForeColor = System::Drawing::Color::Red;
			this->labelEmptyOptions->Location = System::Drawing::Point(177, 33);
			this->labelEmptyOptions->Name = L"labelEmptyOptions";
			this->labelEmptyOptions->Size = System::Drawing::Size(231, 17);
			this->labelEmptyOptions->TabIndex = 9;
			this->labelEmptyOptions->Text = L"CHOOSE AT LEAST ONE OPTION!";
			this->labelEmptyOptions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelEmptyOptions->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(581, 408);
			this->Controls->Add(this->labelEmptyOptions);
			this->Controls->Add(this->textBoxNewPsw);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->labelNewPsw);
			this->Controls->Add(this->labelChooseOptions);
			this->Controls->Add(this->labelPswLength);
			this->Controls->Add(this->numericUpDownPswLength);
			this->Controls->Add(this->checkedListBoxOptions);
			this->Controls->Add(this->buttonCopyPsw);
			this->Controls->Add(this->buttonGenPsw);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(597, 447);
			this->MinimumSize = System::Drawing::Size(597, 447);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(3);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"randPSWgen";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPswLength))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkedListBoxOptions->CheckedItems->Count == 0) // at least one option must be cheked!
		{
			labelEmptyOptions->Visible = true;
			buttonGenPsw->Enabled = false;
		}
		else
		{
			labelEmptyOptions->Visible = false;
			buttonGenPsw->Enabled = true;
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		checkedListBoxOptions->SetItemCheckState(0, CheckState::Checked);
		buttonCopyPsw->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // create new password

		string workList{};
		int pswLength = (int)numericUpDownPswLength->Value; // get password length
		string psw{};

		if (checkedListBoxOptions->GetItemChecked(0))
		{
			workList += lowerList;
		}
		if (checkedListBoxOptions->GetItemChecked(1))
		{
			workList += upperList;
		}
		if (checkedListBoxOptions->GetItemChecked(2))
		{
			workList += digitList;
		}
		if (checkedListBoxOptions->GetItemChecked(3))
		{
			workList += symbolList;
		}
		if (checkedListBoxOptions->GetItemChecked(4))
		{
			workList += ambiguousList;
		}
		srand(time(NULL));
		int pswNum; // variable for random number
		int workLength = workList.length();
		progressBar1->Minimum = 1; // start for progress bar
		progressBar1->Maximum = pswLength;
		progressBar1->Value = 1;
		for (int i = 0; i < pswLength; i++) // iterate through psw length
		{
			pswNum = rand() % workLength; // looking for rand number in work list
			psw += workList[pswNum]; // add letter to psw
			progressBar1->PerformStep(); // move progress bar
			textBoxNewPsw->Text = msclr::interop::marshal_as<System::String^>(psw);
			buttonCopyPsw->Enabled = true;
		}
	}
	private: System::Void textBoxNewPsw_TextChanged(System::Object^  sender, System::EventArgs^  e) { // set copy button to gray if text is empty
		if (!textBoxNewPsw->Text->Equals(""))
		{
			buttonCopyPsw->Enabled = true;
		}
		else
		{
			buttonCopyPsw->Enabled = false;
		}
	}
};
}
