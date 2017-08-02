#pragma once

#include "EEPCreator.h"

namespace Fatigue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::GroupBox^  Act1;
	private: System::Windows::Forms::GroupBox^  Act2;
	private: System::Windows::Forms::GroupBox^  Act3;
	private: System::Windows::Forms::GroupBox^  Act4;
	private: System::Windows::Forms::GroupBox^  Act5;
	private: System::Windows::Forms::GroupBox^  Act6;
	private: System::Windows::Forms::GroupBox^  Act7;
	private: System::Windows::Forms::GroupBox^  Act8;
	private: System::Windows::Forms::Label^  speedLabel1;
	private: System::Windows::Forms::Label^  Label;






	private: System::Windows::Forms::TextBox^  speedIn1;
	private: System::Windows::Forms::TextBox^  travelIn1;





	private: System::Windows::Forms::Button^  save1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label1;





	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Label^  label18;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label20;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label21;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  travelIn2;
	private: System::Windows::Forms::TextBox^  travelIn3;
	private: System::Windows::Forms::TextBox^  travelIn4;
	private: System::Windows::Forms::TextBox^  travelIn5;
	private: System::Windows::Forms::TextBox^  travelIn6;
	private: System::Windows::Forms::TextBox^  travelIn7;
	private: System::Windows::Forms::TextBox^  travelIn8;

























	private: System::Windows::Forms::TextBox^  speedIn2;
	private: System::Windows::Forms::TextBox^  speedIn3;
	private: System::Windows::Forms::TextBox^  speedIn4;
	private: System::Windows::Forms::TextBox^  speedIn5;
	private: System::Windows::Forms::TextBox^  speedIn6;
	private: System::Windows::Forms::TextBox^  speedIn7;
	private: System::Windows::Forms::TextBox^  speedIn8;
	private: System::Windows::Forms::Button^  save2;
	private: System::Windows::Forms::Button^  save3;
	private: System::Windows::Forms::Button^  save4;
	private: System::Windows::Forms::Button^  save5;
	private: System::Windows::Forms::Button^  save6;
	private: System::Windows::Forms::Button^  save7;
	private: System::Windows::Forms::Button^  save8;








	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;

	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label33;

	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label35;

	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label36;

	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label37;

	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label38;

	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label39;

	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label8;





























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Act1 = (gcnew System::Windows::Forms::GroupBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->save1 = (gcnew System::Windows::Forms::Button());
			this->speedIn1 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn1 = (gcnew System::Windows::Forms::TextBox());
			this->speedLabel1 = (gcnew System::Windows::Forms::Label());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->Act2 = (gcnew System::Windows::Forms::GroupBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->save2 = (gcnew System::Windows::Forms::Button());
			this->speedIn2 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Act3 = (gcnew System::Windows::Forms::GroupBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->save3 = (gcnew System::Windows::Forms::Button());
			this->speedIn3 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Act4 = (gcnew System::Windows::Forms::GroupBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->save4 = (gcnew System::Windows::Forms::Button());
			this->speedIn4 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Act5 = (gcnew System::Windows::Forms::GroupBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->save5 = (gcnew System::Windows::Forms::Button());
			this->speedIn5 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Act6 = (gcnew System::Windows::Forms::GroupBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->save6 = (gcnew System::Windows::Forms::Button());
			this->speedIn6 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn6 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Act7 = (gcnew System::Windows::Forms::GroupBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->save7 = (gcnew System::Windows::Forms::Button());
			this->speedIn7 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn7 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Act8 = (gcnew System::Windows::Forms::GroupBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->save8 = (gcnew System::Windows::Forms::Button());
			this->speedIn8 = (gcnew System::Windows::Forms::TextBox());
			this->travelIn8 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Act1->SuspendLayout();
			this->Act2->SuspendLayout();
			this->Act3->SuspendLayout();
			this->Act4->SuspendLayout();
			this->Act5->SuspendLayout();
			this->Act6->SuspendLayout();
			this->Act7->SuspendLayout();
			this->Act8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Act1
			// 
			this->Act1->BackColor = System::Drawing::SystemColors::Control;
			this->Act1->Controls->Add(this->label41);
			this->Act1->Controls->Add(this->label33);
			this->Act1->Controls->Add(this->save1);
			this->Act1->Controls->Add(this->speedIn1);
			this->Act1->Controls->Add(this->travelIn1);
			this->Act1->Controls->Add(this->speedLabel1);
			this->Act1->Controls->Add(this->Label);
			this->Act1->Location = System::Drawing::Point(40, 117);
			this->Act1->Name = L"Act1";
			this->Act1->Size = System::Drawing::Size(219, 296);
			this->Act1->TabIndex = 0;
			this->Act1->TabStop = false;
			this->Act1->Text = L"Actuator 1";
			this->Act1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(172, 150);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(33, 13);
			this->label41->TabIndex = 16;
			this->label41->Text = L"mm/s";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(174, 84);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(23, 13);
			this->label33->TabIndex = 15;
			this->label33->Text = L"mm";
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::label33_Click);
			// 
			// save1
			// 
			this->save1->Location = System::Drawing::Point(52, 205);
			this->save1->Name = L"save1";
			this->save1->Size = System::Drawing::Size(97, 48);
			this->save1->TabIndex = 6;
			this->save1->Text = L"Save";
			this->save1->UseVisualStyleBackColor = true;
			this->save1->Click += gcnew System::EventHandler(this, &MyForm::save1_Click);
			// 
			// speedIn1
			// 
			this->speedIn1->Location = System::Drawing::Point(86, 141);
			this->speedIn1->Name = L"speedIn1";
			this->speedIn1->Size = System::Drawing::Size(82, 20);
			this->speedIn1->TabIndex = 5;
			// 
			// travelIn1
			// 
			this->travelIn1->Location = System::Drawing::Point(86, 77);
			this->travelIn1->Name = L"travelIn1";
			this->travelIn1->Size = System::Drawing::Size(82, 20);
			this->travelIn1->TabIndex = 3;
			this->travelIn1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// speedLabel1
			// 
			this->speedLabel1->AutoSize = true;
			this->speedLabel1->Location = System::Drawing::Point(9, 148);
			this->speedLabel1->Name = L"speedLabel1";
			this->speedLabel1->Size = System::Drawing::Size(38, 13);
			this->speedLabel1->TabIndex = 2;
			this->speedLabel1->Text = L"Speed";
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->Location = System::Drawing::Point(9, 84);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(37, 13);
			this->Label->TabIndex = 0;
			this->Label->Text = L"Travel";
			this->Label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Act2
			// 
			this->Act2->BackColor = System::Drawing::SystemColors::Control;
			this->Act2->Controls->Add(this->label42);
			this->Act2->Controls->Add(this->label34);
			this->Act2->Controls->Add(this->save2);
			this->Act2->Controls->Add(this->speedIn2);
			this->Act2->Controls->Add(this->travelIn2);
			this->Act2->Controls->Add(this->label15);
			this->Act2->Controls->Add(this->label1);
			this->Act2->Location = System::Drawing::Point(259, 117);
			this->Act2->Name = L"Act2";
			this->Act2->Size = System::Drawing::Size(213, 296);
			this->Act2->TabIndex = 1;
			this->Act2->TabStop = false;
			this->Act2->Text = L"Actuator 2";
			this->Act2->Enter += gcnew System::EventHandler(this, &MyForm::Act2_Enter);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(173, 150);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(33, 13);
			this->label42->TabIndex = 17;
			this->label42->Text = L"mm/s";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(174, 84);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(23, 13);
			this->label34->TabIndex = 16;
			this->label34->Text = L"mm";
			// 
			// save2
			// 
			this->save2->Location = System::Drawing::Point(50, 205);
			this->save2->Name = L"save2";
			this->save2->Size = System::Drawing::Size(97, 48);
			this->save2->TabIndex = 7;
			this->save2->Text = L"Save";
			this->save2->UseVisualStyleBackColor = true;
			this->save2->Click += gcnew System::EventHandler(this, &MyForm::save2_Click);
			// 
			// speedIn2
			// 
			this->speedIn2->Location = System::Drawing::Point(86, 143);
			this->speedIn2->Name = L"speedIn2";
			this->speedIn2->Size = System::Drawing::Size(82, 20);
			this->speedIn2->TabIndex = 7;
			// 
			// travelIn2
			// 
			this->travelIn2->Location = System::Drawing::Point(90, 77);
			this->travelIn2->Name = L"travelIn2";
			this->travelIn2->Size = System::Drawing::Size(82, 20);
			this->travelIn2->TabIndex = 7;
			this->travelIn2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 148);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 13);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Speed";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Travel";
			// 
			// Act3
			// 
			this->Act3->BackColor = System::Drawing::SystemColors::Control;
			this->Act3->Controls->Add(this->label43);
			this->Act3->Controls->Add(this->label35);
			this->Act3->Controls->Add(this->save3);
			this->Act3->Controls->Add(this->speedIn3);
			this->Act3->Controls->Add(this->travelIn3);
			this->Act3->Controls->Add(this->label16);
			this->Act3->Controls->Add(this->label2);
			this->Act3->Location = System::Drawing::Point(472, 117);
			this->Act3->Name = L"Act3";
			this->Act3->Size = System::Drawing::Size(212, 296);
			this->Act3->TabIndex = 1;
			this->Act3->TabStop = false;
			this->Act3->Text = L"Actuator 3";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(168, 157);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(33, 13);
			this->label43->TabIndex = 18;
			this->label43->Text = L"mm/s";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(168, 81);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(23, 13);
			this->label35->TabIndex = 17;
			this->label35->Text = L"mm";
			// 
			// save3
			// 
			this->save3->Location = System::Drawing::Point(44, 205);
			this->save3->Name = L"save3";
			this->save3->Size = System::Drawing::Size(97, 48);
			this->save3->TabIndex = 8;
			this->save3->Text = L"Save";
			this->save3->UseVisualStyleBackColor = true;
			this->save3->Click += gcnew System::EventHandler(this, &MyForm::save3_Click);
			// 
			// speedIn3
			// 
			this->speedIn3->Location = System::Drawing::Point(83, 147);
			this->speedIn3->Name = L"speedIn3";
			this->speedIn3->Size = System::Drawing::Size(82, 20);
			this->speedIn3->TabIndex = 8;
			// 
			// travelIn3
			// 
			this->travelIn3->Location = System::Drawing::Point(83, 77);
			this->travelIn3->Name = L"travelIn3";
			this->travelIn3->Size = System::Drawing::Size(82, 20);
			this->travelIn3->TabIndex = 8;
			this->travelIn3->TextChanged += gcnew System::EventHandler(this, &MyForm::travel3_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 13);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Speed";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Travel";
			// 
			// Act4
			// 
			this->Act4->BackColor = System::Drawing::SystemColors::Control;
			this->Act4->Controls->Add(this->label44);
			this->Act4->Controls->Add(this->label36);
			this->Act4->Controls->Add(this->save4);
			this->Act4->Controls->Add(this->speedIn4);
			this->Act4->Controls->Add(this->travelIn4);
			this->Act4->Controls->Add(this->label17);
			this->Act4->Controls->Add(this->label3);
			this->Act4->Location = System::Drawing::Point(684, 117);
			this->Act4->Name = L"Act4";
			this->Act4->Size = System::Drawing::Size(203, 296);
			this->Act4->TabIndex = 1;
			this->Act4->TabStop = false;
			this->Act4->Text = L"Actuator 4";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(168, 157);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(33, 13);
			this->label44->TabIndex = 19;
			this->label44->Text = L"mm/s";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(168, 80);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 13);
			this->label36->TabIndex = 18;
			this->label36->Text = L"mm";
			// 
			// save4
			// 
			this->save4->Location = System::Drawing::Point(47, 205);
			this->save4->Name = L"save4";
			this->save4->Size = System::Drawing::Size(97, 48);
			this->save4->TabIndex = 9;
			this->save4->Text = L"Save";
			this->save4->UseVisualStyleBackColor = true;
			this->save4->Click += gcnew System::EventHandler(this, &MyForm::save4_Click);
			// 
			// speedIn4
			// 
			this->speedIn4->Location = System::Drawing::Point(82, 150);
			this->speedIn4->Name = L"speedIn4";
			this->speedIn4->Size = System::Drawing::Size(82, 20);
			this->speedIn4->TabIndex = 9;
			// 
			// travelIn4
			// 
			this->travelIn4->Location = System::Drawing::Point(82, 73);
			this->travelIn4->Name = L"travelIn4";
			this->travelIn4->Size = System::Drawing::Size(82, 20);
			this->travelIn4->TabIndex = 9;
			this->travelIn4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 150);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Speed";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Travel";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// Act5
			// 
			this->Act5->BackColor = System::Drawing::SystemColors::Control;
			this->Act5->Controls->Add(this->label45);
			this->Act5->Controls->Add(this->label37);
			this->Act5->Controls->Add(this->save5);
			this->Act5->Controls->Add(this->speedIn5);
			this->Act5->Controls->Add(this->travelIn5);
			this->Act5->Controls->Add(this->label18);
			this->Act5->Controls->Add(this->label4);
			this->Act5->Location = System::Drawing::Point(40, 419);
			this->Act5->Name = L"Act5";
			this->Act5->Size = System::Drawing::Size(219, 301);
			this->Act5->TabIndex = 1;
			this->Act5->TabStop = false;
			this->Act5->Text = L"Actuator 5";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(172, 162);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(33, 13);
			this->label45->TabIndex = 20;
			this->label45->Text = L"mm/s";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(172, 85);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(23, 13);
			this->label37->TabIndex = 19;
			this->label37->Text = L"mm";
			// 
			// save5
			// 
			this->save5->Location = System::Drawing::Point(52, 212);
			this->save5->Name = L"save5";
			this->save5->Size = System::Drawing::Size(97, 48);
			this->save5->TabIndex = 10;
			this->save5->Text = L"Save";
			this->save5->UseVisualStyleBackColor = true;
			this->save5->Click += gcnew System::EventHandler(this, &MyForm::save5_Click);
			// 
			// speedIn5
			// 
			this->speedIn5->Location = System::Drawing::Point(86, 155);
			this->speedIn5->Name = L"speedIn5";
			this->speedIn5->Size = System::Drawing::Size(82, 20);
			this->speedIn5->TabIndex = 10;
			this->speedIn5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// travelIn5
			// 
			this->travelIn5->Location = System::Drawing::Point(86, 78);
			this->travelIn5->Name = L"travelIn5";
			this->travelIn5->Size = System::Drawing::Size(82, 20);
			this->travelIn5->TabIndex = 10;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 155);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(38, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Speed";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Travel";
			// 
			// Act6
			// 
			this->Act6->BackColor = System::Drawing::SystemColors::Control;
			this->Act6->Controls->Add(this->label46);
			this->Act6->Controls->Add(this->label38);
			this->Act6->Controls->Add(this->save6);
			this->Act6->Controls->Add(this->speedIn6);
			this->Act6->Controls->Add(this->travelIn6);
			this->Act6->Controls->Add(this->label19);
			this->Act6->Controls->Add(this->label5);
			this->Act6->Location = System::Drawing::Point(259, 419);
			this->Act6->Name = L"Act6";
			this->Act6->Size = System::Drawing::Size(213, 301);
			this->Act6->TabIndex = 1;
			this->Act6->TabStop = false;
			this->Act6->Text = L"Actuator 6";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(174, 162);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(33, 13);
			this->label46->TabIndex = 21;
			this->label46->Text = L"mm/s";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(174, 85);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(23, 13);
			this->label38->TabIndex = 20;
			this->label38->Text = L"mm";
			// 
			// save6
			// 
			this->save6->Location = System::Drawing::Point(50, 212);
			this->save6->Name = L"save6";
			this->save6->Size = System::Drawing::Size(97, 48);
			this->save6->TabIndex = 11;
			this->save6->Text = L"Save";
			this->save6->UseVisualStyleBackColor = true;
			this->save6->Click += gcnew System::EventHandler(this, &MyForm::save6_Click);
			// 
			// speedIn6
			// 
			this->speedIn6->Location = System::Drawing::Point(90, 155);
			this->speedIn6->Name = L"speedIn6";
			this->speedIn6->Size = System::Drawing::Size(82, 20);
			this->speedIn6->TabIndex = 11;
			this->speedIn6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// travelIn6
			// 
			this->travelIn6->Location = System::Drawing::Point(90, 78);
			this->travelIn6->Name = L"travelIn6";
			this->travelIn6->Size = System::Drawing::Size(82, 20);
			this->travelIn6->TabIndex = 11;
			this->travelIn6->TextChanged += gcnew System::EventHandler(this, &MyForm::lineIn6_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 155);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 13);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Speed";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Travel";
			// 
			// Act7
			// 
			this->Act7->BackColor = System::Drawing::SystemColors::Control;
			this->Act7->Controls->Add(this->label47);
			this->Act7->Controls->Add(this->label39);
			this->Act7->Controls->Add(this->save7);
			this->Act7->Controls->Add(this->speedIn7);
			this->Act7->Controls->Add(this->travelIn7);
			this->Act7->Controls->Add(this->label20);
			this->Act7->Controls->Add(this->label6);
			this->Act7->Location = System::Drawing::Point(472, 419);
			this->Act7->Name = L"Act7";
			this->Act7->Size = System::Drawing::Size(212, 301);
			this->Act7->TabIndex = 1;
			this->Act7->TabStop = false;
			this->Act7->Text = L"Actuator 7";
			this->Act7->Enter += gcnew System::EventHandler(this, &MyForm::groupBox7_Enter);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(168, 159);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(33, 13);
			this->label47->TabIndex = 22;
			this->label47->Text = L"mm/s";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(171, 85);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(23, 13);
			this->label39->TabIndex = 21;
			this->label39->Text = L"mm";
			// 
			// save7
			// 
			this->save7->Location = System::Drawing::Point(44, 212);
			this->save7->Name = L"save7";
			this->save7->Size = System::Drawing::Size(97, 48);
			this->save7->TabIndex = 12;
			this->save7->Text = L"Save";
			this->save7->UseVisualStyleBackColor = true;
			this->save7->Click += gcnew System::EventHandler(this, &MyForm::save7_Click);
			// 
			// speedIn7
			// 
			this->speedIn7->Location = System::Drawing::Point(83, 152);
			this->speedIn7->Name = L"speedIn7";
			this->speedIn7->Size = System::Drawing::Size(82, 20);
			this->speedIn7->TabIndex = 12;
			// 
			// travelIn7
			// 
			this->travelIn7->Location = System::Drawing::Point(83, 78);
			this->travelIn7->Name = L"travelIn7";
			this->travelIn7->Size = System::Drawing::Size(82, 20);
			this->travelIn7->TabIndex = 12;
			this->travelIn7->TextChanged += gcnew System::EventHandler(this, &MyForm::lowIn6_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 155);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 12;
			this->label20->Text = L"Speed";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Travel";
			// 
			// Act8
			// 
			this->Act8->BackColor = System::Drawing::SystemColors::Control;
			this->Act8->Controls->Add(this->label48);
			this->Act8->Controls->Add(this->label40);
			this->Act8->Controls->Add(this->save8);
			this->Act8->Controls->Add(this->speedIn8);
			this->Act8->Controls->Add(this->travelIn8);
			this->Act8->Controls->Add(this->label21);
			this->Act8->Controls->Add(this->label7);
			this->Act8->Location = System::Drawing::Point(684, 419);
			this->Act8->Name = L"Act8";
			this->Act8->Size = System::Drawing::Size(203, 301);
			this->Act8->TabIndex = 1;
			this->Act8->TabStop = false;
			this->Act8->Text = L"Actuator 8";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(168, 158);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(33, 13);
			this->label48->TabIndex = 23;
			this->label48->Text = L"mm/s";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(168, 85);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(23, 13);
			this->label40->TabIndex = 22;
			this->label40->Text = L"mm";
			// 
			// save8
			// 
			this->save8->Location = System::Drawing::Point(47, 212);
			this->save8->Name = L"save8";
			this->save8->Size = System::Drawing::Size(97, 48);
			this->save8->TabIndex = 13;
			this->save8->Text = L"Save";
			this->save8->UseVisualStyleBackColor = true;
			this->save8->Click += gcnew System::EventHandler(this, &MyForm::save8_Click);
			// 
			// speedIn8
			// 
			this->speedIn8->Location = System::Drawing::Point(82, 152);
			this->speedIn8->Name = L"speedIn8";
			this->speedIn8->Size = System::Drawing::Size(82, 20);
			this->speedIn8->TabIndex = 13;
			// 
			// travelIn8
			// 
			this->travelIn8->Location = System::Drawing::Point(82, 78);
			this->travelIn8->Name = L"travelIn8";
			this->travelIn8->Size = System::Drawing::Size(82, 20);
			this->travelIn8->TabIndex = 13;
			this->travelIn8->TextChanged += gcnew System::EventHandler(this, &MyForm::travel8_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 155);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(38, 13);
			this->label21->TabIndex = 13;
			this->label21->Text = L"Speed";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 81);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Travel";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(31, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(298, 99);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(502, 22);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(211, 16);
			this->label23->TabIndex = 4;
			this->label23->Text = L"Travel must be between 0 and 150";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(502, 50);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(213, 16);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Speed must be between 0 and 400";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(502, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(346, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"*Travel can\'t be larger than position after jogging";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(919, 743);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Act2);
			this->Controls->Add(this->Act3);
			this->Controls->Add(this->Act4);
			this->Controls->Add(this->Act5);
			this->Controls->Add(this->Act6);
			this->Controls->Add(this->Act7);
			this->Controls->Add(this->Act8);
			this->Controls->Add(this->Act1);
			this->Name = L"MyForm";
			this->Text = L"Rubber Fatigue Tester";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Act1->ResumeLayout(false);
			this->Act1->PerformLayout();
			this->Act2->ResumeLayout(false);
			this->Act2->PerformLayout();
			this->Act3->ResumeLayout(false);
			this->Act3->PerformLayout();
			this->Act4->ResumeLayout(false);
			this->Act4->PerformLayout();
			this->Act5->ResumeLayout(false);
			this->Act5->PerformLayout();
			this->Act6->ResumeLayout(false);
			this->Act6->PerformLayout();
			this->Act7->ResumeLayout(false);
			this->Act7->PerformLayout();
			this->Act8->ResumeLayout(false);
			this->Act8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox7_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Act2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lowIn6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lineIn6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void highIn1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void save1_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel1 = travelIn1->Text;
		String ^ speed1 = speedIn1->Text;

		double travInt1 = System::Convert::ToDouble(travel1);
		double speedInt1 = System::Convert::ToDouble(speed1);

		Printer one(travInt1, speedInt1, "Actuator1.EEP");


	}

	private: System::Void save2_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel2 = travelIn2->Text;
		String ^ speed2 = speedIn2->Text;

		double travInt2 = System::Convert::ToDouble(travel2);
		double speedInt2 = System::Convert::ToDouble(speed2);

		Printer two(travInt2, speedInt2, "Actuator2.EEP");

	}
	private: System::Void save3_Click(System::Object^  sender, System::EventArgs^  e) {


		String ^ travel3 = travelIn3->Text;
		String ^ speed3 = speedIn3->Text;

		double travInt3 = System::Convert::ToDouble(travel3);
		double speedInt3 = System::Convert::ToDouble(speed3);

		Printer three(travInt3, speedInt3, "Actuator3.EEP");


	}
	private: System::Void save4_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel4 = travelIn4->Text;
		String ^ speed4 = speedIn4->Text;

		double travInt4 = System::Convert::ToDouble(travel4);
		double speedInt4 = System::Convert::ToDouble(speed4);

		Printer four(travInt4, speedInt4, "Actuator4.EEP");
	}
	private: System::Void save5_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel5 = travelIn5->Text;
		String ^ speed5 = speedIn5->Text;

		double travInt5 = System::Convert::ToDouble(travel5);
		double speedInt5 = System::Convert::ToDouble(speed5);

		Printer five(travInt5, speedInt5, "Actuator5.EEP");


	}
	private: System::Void save6_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel6 = travelIn6->Text;
		String ^ speed6 = speedIn6->Text;

		double travInt6 = System::Convert::ToDouble(travel6);
		double speedInt6 = System::Convert::ToDouble(speed6);

		Printer six(travInt6, speedInt6, "Actuator6.EEP");

	}
	private: System::Void save7_Click(System::Object^  sender, System::EventArgs^  e) {


		String ^ travel7 = travelIn7->Text;
		String ^ speed7 = speedIn7->Text;

		double travInt7 = System::Convert::ToDouble(travel7);
		double speedInt7 = System::Convert::ToDouble(speed7);

		Printer seven(travInt7, speedInt7, "Actuator7.EEP");



	}
	private: System::Void save8_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ travel8 = travelIn8->Text;
		String ^ speed8 = speedIn8->Text;

		double travInt8 = System::Convert::ToDouble(travel8);
		double speedInt8 = System::Convert::ToDouble(speed8);

		Printer eight(travInt8, speedInt8, "Actuator8.EEP");

	}
	private: System::Void label33_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void highIn2_TextChanged(System::Object^  sender, System::EventArgs^  e) {}

	private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void travel3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void travel8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
};
