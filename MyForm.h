#pragma once
#include "MyForm_Neukunde.h"
#include "MyForm_Neubestellung.h"
#include "privatkunde.h"

namespace HandelGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			//delete kd;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox_Kunde;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox_Bestellung;
	private: System::Windows::Forms::TextBox^ textBox_knr;
	private: System::Windows::Forms::Label^ label_knr;
	private: System::Windows::Forms::TextBox^ textBox_hausnr;
	private: System::Windows::Forms::Label^ label_hausnr;
	private: System::Windows::Forms::TextBox^ textBox_strasse;
	private: System::Windows::Forms::Label^ label_strasse;
	private: System::Windows::Forms::TextBox^ textBox_ort;
	private: System::Windows::Forms::Label^ label_ort;
	private: System::Windows::Forms::TextBox^ textBox_plz;
	private: System::Windows::Forms::Label^ label_plz;
	private: System::Windows::Forms::TextBox^ textBox_vorname;
	private: System::Windows::Forms::Label^ label_vorname;
	private: System::Windows::Forms::TextBox^ textBox_nachname;
	private: System::Windows::Forms::Label^ label_nachname;
	private: System::Windows::Forms::CheckBox^ checkBox_isFirma;
	private: System::Windows::Forms::Button^ button_neukunde;
	private: System::Windows::Forms::DataGridView^ dataGridView_bestellungen;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bnr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ anr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ anz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gpr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mwst;
	private: System::Windows::Forms::Button^ button_neubestellung;
	private: System::Windows::Forms::Button^  button_kdSuchen;

	//private: kunde * kd;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox_Kunde = (gcnew System::Windows::Forms::GroupBox());
			this->button_kdSuchen = (gcnew System::Windows::Forms::Button());
			this->button_neukunde = (gcnew System::Windows::Forms::Button());
			this->checkBox_isFirma = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_hausnr = (gcnew System::Windows::Forms::TextBox());
			this->label_hausnr = (gcnew System::Windows::Forms::Label());
			this->textBox_strasse = (gcnew System::Windows::Forms::TextBox());
			this->label_strasse = (gcnew System::Windows::Forms::Label());
			this->textBox_ort = (gcnew System::Windows::Forms::TextBox());
			this->label_ort = (gcnew System::Windows::Forms::Label());
			this->textBox_plz = (gcnew System::Windows::Forms::TextBox());
			this->label_plz = (gcnew System::Windows::Forms::Label());
			this->textBox_vorname = (gcnew System::Windows::Forms::TextBox());
			this->label_vorname = (gcnew System::Windows::Forms::Label());
			this->textBox_nachname = (gcnew System::Windows::Forms::TextBox());
			this->label_nachname = (gcnew System::Windows::Forms::Label());
			this->textBox_knr = (gcnew System::Windows::Forms::TextBox());
			this->label_knr = (gcnew System::Windows::Forms::Label());
			this->groupBox_Bestellung = (gcnew System::Windows::Forms::GroupBox());
			this->button_neubestellung = (gcnew System::Windows::Forms::Button());
			this->dataGridView_bestellungen = (gcnew System::Windows::Forms::DataGridView());
			this->bnr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->anr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->anz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gpr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mwst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox_Kunde->SuspendLayout();
			this->groupBox_Bestellung->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_bestellungen))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox_Kunde
			// 
			this->groupBox_Kunde->Controls->Add(this->button_kdSuchen);
			this->groupBox_Kunde->Controls->Add(this->button_neukunde);
			this->groupBox_Kunde->Controls->Add(this->checkBox_isFirma);
			this->groupBox_Kunde->Controls->Add(this->textBox_hausnr);
			this->groupBox_Kunde->Controls->Add(this->label_hausnr);
			this->groupBox_Kunde->Controls->Add(this->textBox_strasse);
			this->groupBox_Kunde->Controls->Add(this->label_strasse);
			this->groupBox_Kunde->Controls->Add(this->textBox_ort);
			this->groupBox_Kunde->Controls->Add(this->label_ort);
			this->groupBox_Kunde->Controls->Add(this->textBox_plz);
			this->groupBox_Kunde->Controls->Add(this->label_plz);
			this->groupBox_Kunde->Controls->Add(this->textBox_vorname);
			this->groupBox_Kunde->Controls->Add(this->label_vorname);
			this->groupBox_Kunde->Controls->Add(this->textBox_nachname);
			this->groupBox_Kunde->Controls->Add(this->label_nachname);
			this->groupBox_Kunde->Controls->Add(this->textBox_knr);
			this->groupBox_Kunde->Controls->Add(this->label_knr);
			this->groupBox_Kunde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox_Kunde->Location = System::Drawing::Point(7, 5);
			this->groupBox_Kunde->Name = L"groupBox_Kunde";
			this->groupBox_Kunde->Size = System::Drawing::Size(711, 197);
			this->groupBox_Kunde->TabIndex = 0;
			this->groupBox_Kunde->TabStop = false;
			this->groupBox_Kunde->Text = L"Kunde";
			// 
			// button_kdSuchen
			// 
			this->button_kdSuchen->BackColor = System::Drawing::Color::Transparent;
			this->button_kdSuchen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_kdSuchen.BackgroundImage")));
			this->button_kdSuchen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_kdSuchen->Enabled = false;
			this->button_kdSuchen->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->button_kdSuchen->FlatAppearance->BorderSize = 0;
			this->button_kdSuchen->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_kdSuchen->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_kdSuchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_kdSuchen->Location = System::Drawing::Point(252, 15);
			this->button_kdSuchen->Name = L"button_kdSuchen";
			this->button_kdSuchen->Size = System::Drawing::Size(35, 35);
			this->button_kdSuchen->TabIndex = 2;
			this->button_kdSuchen->UseVisualStyleBackColor = false;
			this->button_kdSuchen->Click += gcnew System::EventHandler(this, &MyForm::button_kdSuchen_Click);
			// 
			// button_neukunde
			// 
			this->button_neukunde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_neukunde->Location = System::Drawing::Point(559, 16);
			this->button_neukunde->Name = L"button_neukunde";
			this->button_neukunde->Size = System::Drawing::Size(146, 35);
			this->button_neukunde->TabIndex = 3;
			this->button_neukunde->Text = L"Neuer Kunde";
			this->button_neukunde->UseVisualStyleBackColor = true;
			this->button_neukunde->Click += gcnew System::EventHandler(this, &MyForm::button_neukunde_Click);
			// 
			// checkBox_isFirma
			// 
			this->checkBox_isFirma->AutoSize = true;
			this->checkBox_isFirma->Enabled = false;
			this->checkBox_isFirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox_isFirma->Location = System::Drawing::Point(81, 176);
			this->checkBox_isFirma->Name = L"checkBox_isFirma";
			this->checkBox_isFirma->Size = System::Drawing::Size(105, 20);
			this->checkBox_isFirma->TabIndex = 14;
			this->checkBox_isFirma->TabStop = false;
			this->checkBox_isFirma->Text = L"Firmenkunde";
			this->checkBox_isFirma->UseVisualStyleBackColor = true;
			// 
			// textBox_hausnr
			// 
			this->textBox_hausnr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_hausnr->Location = System::Drawing::Point(497, 148);
			this->textBox_hausnr->Name = L"textBox_hausnr";
			this->textBox_hausnr->ReadOnly = true;
			this->textBox_hausnr->Size = System::Drawing::Size(56, 22);
			this->textBox_hausnr->TabIndex = 13;
			this->textBox_hausnr->TabStop = false;
			// 
			// label_hausnr
			// 
			this->label_hausnr->AutoSize = true;
			this->label_hausnr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_hausnr->Location = System::Drawing::Point(436, 151);
			this->label_hausnr->Name = L"label_hausnr";
			this->label_hausnr->Size = System::Drawing::Size(61, 16);
			this->label_hausnr->TabIndex = 12;
			this->label_hausnr->Text = L"Haus-Nr.";
			// 
			// textBox_strasse
			// 
			this->textBox_strasse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_strasse->Location = System::Drawing::Point(81, 148);
			this->textBox_strasse->Name = L"textBox_strasse";
			this->textBox_strasse->ReadOnly = true;
			this->textBox_strasse->Size = System::Drawing::Size(343, 22);
			this->textBox_strasse->TabIndex = 11;
			this->textBox_strasse->TabStop = false;
			// 
			// label_strasse
			// 
			this->label_strasse->AutoSize = true;
			this->label_strasse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_strasse->Location = System::Drawing::Point(32, 151);
			this->label_strasse->Name = L"label_strasse";
			this->label_strasse->Size = System::Drawing::Size(48, 16);
			this->label_strasse->TabIndex = 10;
			this->label_strasse->Text = L"Straße";
			// 
			// textBox_ort
			// 
			this->textBox_ort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ort->Location = System::Drawing::Point(178, 120);
			this->textBox_ort->Name = L"textBox_ort";
			this->textBox_ort->ReadOnly = true;
			this->textBox_ort->Size = System::Drawing::Size(375, 22);
			this->textBox_ort->TabIndex = 9;
			this->textBox_ort->TabStop = false;
			// 
			// label_ort
			// 
			this->label_ort->AutoSize = true;
			this->label_ort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ort->Location = System::Drawing::Point(151, 123);
			this->label_ort->Name = L"label_ort";
			this->label_ort->Size = System::Drawing::Size(25, 16);
			this->label_ort->TabIndex = 8;
			this->label_ort->Text = L"Ort";
			// 
			// textBox_plz
			// 
			this->textBox_plz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plz->Location = System::Drawing::Point(81, 120);
			this->textBox_plz->Name = L"textBox_plz";
			this->textBox_plz->ReadOnly = true;
			this->textBox_plz->Size = System::Drawing::Size(56, 22);
			this->textBox_plz->TabIndex = 7;
			this->textBox_plz->TabStop = false;
			// 
			// label_plz
			// 
			this->label_plz->AutoSize = true;
			this->label_plz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_plz->Location = System::Drawing::Point(48, 123);
			this->label_plz->Name = L"label_plz";
			this->label_plz->Size = System::Drawing::Size(32, 16);
			this->label_plz->TabIndex = 6;
			this->label_plz->Text = L"PLZ";
			// 
			// textBox_vorname
			// 
			this->textBox_vorname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_vorname->Location = System::Drawing::Point(81, 92);
			this->textBox_vorname->Name = L"textBox_vorname";
			this->textBox_vorname->ReadOnly = true;
			this->textBox_vorname->Size = System::Drawing::Size(472, 22);
			this->textBox_vorname->TabIndex = 5;
			this->textBox_vorname->TabStop = false;
			// 
			// label_vorname
			// 
			this->label_vorname->AutoSize = true;
			this->label_vorname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_vorname->Location = System::Drawing::Point(17, 95);
			this->label_vorname->Name = L"label_vorname";
			this->label_vorname->Size = System::Drawing::Size(63, 16);
			this->label_vorname->TabIndex = 4;
			this->label_vorname->Text = L"Vorname";
			// 
			// textBox_nachname
			// 
			this->textBox_nachname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_nachname->Location = System::Drawing::Point(81, 64);
			this->textBox_nachname->Name = L"textBox_nachname";
			this->textBox_nachname->ReadOnly = true;
			this->textBox_nachname->Size = System::Drawing::Size(472, 22);
			this->textBox_nachname->TabIndex = 3;
			this->textBox_nachname->TabStop = false;
			// 
			// label_nachname
			// 
			this->label_nachname->AutoSize = true;
			this->label_nachname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nachname->Location = System::Drawing::Point(6, 67);
			this->label_nachname->Name = L"label_nachname";
			this->label_nachname->Size = System::Drawing::Size(74, 16);
			this->label_nachname->TabIndex = 2;
			this->label_nachname->Text = L"Nachname";
			// 
			// textBox_knr
			// 
			this->textBox_knr->AllowDrop = true;
			this->textBox_knr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_knr->Location = System::Drawing::Point(151, 19);
			this->textBox_knr->Name = L"textBox_knr";
			this->textBox_knr->Size = System::Drawing::Size(100, 26);
			this->textBox_knr->TabIndex = 1;
			this->textBox_knr->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_knr_TextChanged);
			// 
			// label_knr
			// 
			this->label_knr->AutoSize = true;
			this->label_knr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_knr->Location = System::Drawing::Point(78, 25);
			this->label_knr->Name = L"label_knr";
			this->label_knr->Size = System::Drawing::Size(74, 16);
			this->label_knr->TabIndex = 0;
			this->label_knr->Text = L"Kunden-Nr.";
			// 
			// groupBox_Bestellung
			// 
			this->groupBox_Bestellung->Controls->Add(this->button_neubestellung);
			this->groupBox_Bestellung->Controls->Add(this->dataGridView_bestellungen);
			this->groupBox_Bestellung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox_Bestellung->Location = System::Drawing::Point(7, 201);
			this->groupBox_Bestellung->Name = L"groupBox_Bestellung";
			this->groupBox_Bestellung->Size = System::Drawing::Size(711, 344);
			this->groupBox_Bestellung->TabIndex = 23;
			this->groupBox_Bestellung->TabStop = false;
			this->groupBox_Bestellung->Text = L"Bestellung";
			// 
			// button_neubestellung
			// 
			this->button_neubestellung->Enabled = false;
			this->button_neubestellung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_neubestellung->Location = System::Drawing::Point(559, 21);
			this->button_neubestellung->Name = L"button_neubestellung";
			this->button_neubestellung->Size = System::Drawing::Size(146, 35);
			this->button_neubestellung->TabIndex = 4;
			this->button_neubestellung->Text = L"Neue Bestellung";
			this->button_neubestellung->UseVisualStyleBackColor = true;
			this->button_neubestellung->Click += gcnew System::EventHandler(this, &MyForm::Button_neubestellung_Click);
			// 
			// dataGridView_bestellungen
			// 
			this->dataGridView_bestellungen->AllowUserToAddRows = false;
			this->dataGridView_bestellungen->AllowUserToDeleteRows = false;
			this->dataGridView_bestellungen->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_bestellungen->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->bnr,
					this->anr, this->anz, this->gpr, this->mwst
			});
			this->dataGridView_bestellungen->Location = System::Drawing::Point(6, 21);
			this->dataGridView_bestellungen->Name = L"dataGridView_bestellungen";
			this->dataGridView_bestellungen->ReadOnly = true;
			this->dataGridView_bestellungen->Size = System::Drawing::Size(547, 317);
			this->dataGridView_bestellungen->TabIndex = 0;
			// 
			// bnr
			// 
			this->bnr->FillWeight = 200;
			this->bnr->HeaderText = L"Bestell-Nr.";
			this->bnr->Name = L"bnr";
			this->bnr->ReadOnly = true;
			// 
			// anr
			// 
			this->anr->HeaderText = L"Artikel-Nr.";
			this->anr->Name = L"anr";
			this->anr->ReadOnly = true;
			// 
			// anz
			// 
			this->anz->HeaderText = L"Anzahl";
			this->anz->Name = L"anz";
			this->anz->ReadOnly = true;
			// 
			// gpr
			// 
			this->gpr->HeaderText = L"Gesamtpreis";
			this->gpr->Name = L"gpr";
			this->gpr->ReadOnly = true;
			// 
			// mwst
			// 
			this->mwst->HeaderText = L"MwSt";
			this->mwst->Name = L"mwst";
			this->mwst->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 547);
			this->Controls->Add(this->groupBox_Bestellung);
			this->Controls->Add(this->groupBox_Kunde);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Handel";
			this->groupBox_Kunde->ResumeLayout(false);
			this->groupBox_Kunde->PerformLayout();
			this->groupBox_Bestellung->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_bestellungen))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button_neubestellung_Click(System::Object^, System::EventArgs^);
	private: System::Void button_neukunde_Click(System::Object^, System::EventArgs^);
	private: System::Void button_kdSuchen_Click(System::Object^, System::EventArgs^);
	private: System::Void textBox_knr_TextChanged(System::Object^, System::EventArgs^);
};
}
