#pragma once
#include "cola.h"
#include <string>
#include <thread>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>

int barberos[5][2];
CCola clientesCola;
int turno = 0;
int nBarberos = 0;

int tiempoRandom();



using namespace std;
using namespace System;

using namespace System::Threading;



namespace finalB {
	thread func;

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	

	
	/// <summary>
	/// Summary for Barberia
	/// </summary>
	public ref class Barberia : public System::Windows::Forms::Form
	{

	void hiloTiempo() {
		while (1)
		{
			ocupado();
			desocupar();
			Sleep(1000);
		}


	}
		
	public:
		Barberia(void)
		{	
			InitializeComponent();
			Threading::Thread^ tiempo = gcnew Threading::Thread(gcnew Threading::ThreadStart(this, &Barberia::hiloTiempo));

			tiempo->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Barberia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:
	private: System::Windows::Forms::ComboBox^ cmbBarberos;
	private: System::Windows::Forms::Button^ btnInsertarCliente;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ gridViewBarberos;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaBarbero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnaTime;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Barberia::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->cmbBarberos = (gcnew System::Windows::Forms::ComboBox());
			this->btnInsertarCliente = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gridViewBarberos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaBarbero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnaTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewBarberos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblTitulo->Location = System::Drawing::Point(390, 26);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(396, 37);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"BARBER�A EL MIKE";
			// 
			// cmbBarberos
			// 
			this->cmbBarberos->FormattingEnabled = true;
			this->cmbBarberos->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->cmbBarberos->Location = System::Drawing::Point(337, 92);
			this->cmbBarberos->Name = L"cmbBarberos";
			this->cmbBarberos->Size = System::Drawing::Size(494, 24);
			this->cmbBarberos->TabIndex = 1;
			this->cmbBarberos->Text = L"Cantidad de Barberos";
			// 
			// btnInsertarCliente
			// 
			this->btnInsertarCliente->Enabled = false;
			this->btnInsertarCliente->Location = System::Drawing::Point(397, 156);
			this->btnInsertarCliente->Name = L"btnInsertarCliente";
			this->btnInsertarCliente->Size = System::Drawing::Size(303, 64);
			this->btnInsertarCliente->TabIndex = 2;
			this->btnInsertarCliente->Text = L"INSERTAR CLIENTE";
			this->btnInsertarCliente->UseVisualStyleBackColor = true;
			this->btnInsertarCliente->Click += gcnew System::EventHandler(this, &Barberia::btnInsertarCliente_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(210, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Barberos";
			// 
			// gridViewBarberos
			// 
			this->gridViewBarberos->AllowUserToDeleteRows = false;
			this->gridViewBarberos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridViewBarberos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ColumnaBarbero,
					this->columnaTime
			});
			this->gridViewBarberos->Location = System::Drawing::Point(215, 276);
			this->gridViewBarberos->Name = L"gridViewBarberos";
			this->gridViewBarberos->ReadOnly = true;
			this->gridViewBarberos->RowHeadersWidth = 51;
			this->gridViewBarberos->RowTemplate->Height = 24;
			this->gridViewBarberos->Size = System::Drawing::Size(616, 150);
			this->gridViewBarberos->TabIndex = 4;
			// 
			// ColumnaBarbero
			// 
			this->ColumnaBarbero->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumnaBarbero->HeaderText = L"BARBERO";
			this->ColumnaBarbero->MinimumWidth = 6;
			this->ColumnaBarbero->Name = L"ColumnaBarbero";
			this->ColumnaBarbero->ReadOnly = true;
			// 
			// columnaTime
			// 
			this->columnaTime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->columnaTime->HeaderText = L"TIEMPO";
			this->columnaTime->MinimumWidth = 6;
			this->columnaTime->Name = L"columnaTime";
			this->columnaTime->ReadOnly = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(860, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Barberia::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(893, 143);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 310);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// Barberia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1246, 527);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->gridViewBarberos);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnInsertarCliente);
			this->Controls->Add(this->cmbBarberos);
			this->Controls->Add(this->lblTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1264, 574);
			this->MinimumSize = System::Drawing::Size(1264, 574);
			this->Name = L"Barberia";
			this->Text = L"Barberia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridViewBarberos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {



	 nBarberos = System::Convert::ToInt16(cmbBarberos->SelectedIndex);
	nBarberos = nBarberos + 1;
	if (nBarberos == 0) {
		MessageBox::Show("Favor de ingresar al menos un trabajador");
	}
	if (!nBarberos == 0){
		btnInsertarCliente->Enabled = true;

		for (int i=0; i < nBarberos; i++) {
			int n = gridViewBarberos->Rows->Add();
			gridViewBarberos->Rows[n]->Cells[0]->Value = i+1;

		}
		button2->Enabled = false;

		barberos[0][0] = 0;
		barberos[1][0] = 0;
		barberos[2][0] = 0;
		barberos[3][0] = 0;
		barberos[4][0] = 0;

		cmbBarberos->Enabled = false;
	}

}

private: System::Void btnInsertarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	CCliente* infoCliente = new CCliente();
	int s=0;
	s = tiempoRandom();
	infoCliente->setTiempo(s);
	infoCliente->setTurno(turno);
	clientesCola.encolar(infoCliente);
	turno++;

	ocupado();



}

	   int ocupado() {
		   CCliente* infoCliente = new CCliente();




		   for (int i = 0; i < nBarberos; i++) {

			   if (barberos[i][0] == 0 && !clientesCola.colaVacia()) {

				   int tiempoEstimado = 0;

				   *infoCliente = clientesCola.primeroEnCola();
				   int tiempo = infoCliente->getTiempo();
				   barberos[i][1] = tiempo;
				   clientesCola.desencolar();
				   barberos[i][0] = 1;
				   cout << "I= " << i << endl;

				   gridViewBarberos->Rows[i]->Cells[1]->Value = barberos[i][1];


			   }
			   cout << barberos[i][0] << endl;


		   }
		   for (int i = 0; i < 5; i++) {
			   cout << "Tiempo del barbero " << i << ":" << barberos[i][1] << endl;

		   }

		   cout << "personas en la cola: ";
		   clientesCola.mostrarCola();

		   return 0;
	   }
	   
	 public:  void desocupar() {
		   for (int i = 0; i < nBarberos; i++)
		   {
			   if (barberos[i][0] == 1) {
				   barberos[i][1]--;
				   gridViewBarberos->Rows[i]->Cells[1]->Value = barberos[i][1];

				   if (barberos[i][1] == 0) {
					   barberos[i][0] = 0;
				   }

			   }

		   }


	   }

	  


};
}


int tiempoRandom() {
	int value = 0;
	srand(time(NULL));
	value = 4 + rand() % 10;
	return value;
}
