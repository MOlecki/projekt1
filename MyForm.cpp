#include "MyForm.h"

using namespace msclr::interop;

System::Void HandelGUI::MyForm::button_kdSuchen_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//String^ e1{ "[0-9]+" };
	//String^ sInput{ this->textBox_knr->Text->Trim() };
	//Int32 iInput;

	//this->textBox_knr->Text = sInput;

	//if (Regex::Match(sInput, e1)->Success)
	//{
	//	iInput = Convert::ToInt32(sInput);
	//	if (iInput > 0)
	//	{
	//		Datenbank ^ dbk = gcnew Datenbank();
	//		kunde * kd;

	//		if (dbk->kunde_isFirma(iInput))	//hier auch checken, ob kunde existiert
	//		{
	//			//TODO: firmenkunden instanziieren
	//			//kd = new firmenkunde();
	//			//usw...
	//		}
	//		else
	//		{	// privatkunden instanziieren
	//			kd = new privatkunde();

	//			//if (kunde existiert)
	//			{
	//				kd->lesen(iInput, dbk);

	//				this->button_neubestellung->Enabled = true;
	//				this->textBox_nachname->Text = marshal_as<String^>(kd->getNachname());
	//				this->textBox_vorname->Text = marshal_as<String^>(kd->getVorname());
	//				this->textBox_plz->Text = marshal_as<String^>(kd->getPlz());
	//				this->textBox_ort->Text = marshal_as<String^>(kd->getOrt());
	//				this->textBox_strasse->Text = marshal_as<String^>(kd->getStrasse());
	//				this->textBox_hausnr->Text = marshal_as<String^>(kd->getHausnr());
	//				if (iInput > 500)	// TODO: andere Unterscheidung privat/-firmenkunde
	//					this->checkBox_isFirma->Checked = true;
	//				else
	//					this->checkBox_isFirma->Checked = false;
	//			}
	//			//else
	//			//{
	//			//	MessageBox::Show("Kunde existiert nicht in der Datenbank");
	//			//	this->button_neubestellung->Enabled = false;
	//			//	this->textBox_nachname->Text = "";
	//			//	this->textBox_vorname->Text = "";
	//			//	this->textBox_plz->Text = "";
	//			//	this->textBox_ort->Text = "";
	//			//	this->textBox_strasse->Text = "";
	//			//	this->textBox_hausnr->Text = "";
	//			//	this->checkBox_isFirma->Checked = false;
	//			//}
	//		}
	//	}
	//	else
	//	{
	//		MessageBox::Show("Kunden-Nr. > 0");
	//		this->button_neubestellung->Enabled = false;
	//		this->textBox_nachname->Text = "";
	//		this->textBox_vorname->Text = "";
	//		this->textBox_plz->Text = "";
	//		this->textBox_ort->Text = "";
	//		this->textBox_strasse->Text = "";
	//		this->textBox_hausnr->Text = "";
	//		this->checkBox_isFirma->Checked = false;
	//	}
	//}
	//else
	//{
	//	//MessageBox::Show("Ungültiger Format");
	//	this->button_neubestellung->Enabled = false;
	//	this->textBox_nachname->Text = "";
	//	this->textBox_vorname->Text = "";
	//	this->textBox_plz->Text = "";
	//	this->textBox_ort->Text = "";
	//	this->textBox_strasse->Text = "";
	//	this->textBox_hausnr->Text = "";
	//	this->checkBox_isFirma->Checked = false;
	//}
}

System::Void HandelGUI::MyForm::textBox_knr_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	if (this->textBox_knr->Text->Trim() != "")
	{
		this->button_kdSuchen->Enabled = true;
		this->button_neubestellung->Enabled = false;
	}
}

System::Void HandelGUI::MyForm::button_neukunde_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	MyForm_Neukunde ^ fm_nk = gcnew MyForm_Neukunde();
	fm_nk->ShowDialog();
	this->textBox_knr->Text = Convert::ToString(fm_nk->Tag);	// aktuelle Knr im Tag
	this->button_kdSuchen_Click(sender, e);
}

System::Void HandelGUI::MyForm::Button_neubestellung_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm_Neubestellung ^ fm_nb = gcnew MyForm_Neubestellung(Convert::ToInt32(this->textBox_knr->Text));
	fm_nb->ShowDialog();


	// TEST
	//DataGridViewRow ^ zeile;

	//this->dataGridView_bestellungen->Rows->Add("MyBnr", "MyAnr", "MyAnz", "MyGesamt", "MySteuer");
}