#pragma once

namespace Proyecto01KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista* pila0 = new Lista();
		Lista* pila1 = new Lista();
		Lista* pila2 = new Lista();
		Lista* pila3 = new Lista();
		Lista* pila4 = new Lista();
		Lista* pila5 = new Lista();
		Lista* pila6 = new Lista();
		Lista* pila7 = new Lista();
		int cantidadco = 0;
		int contx = 0;
		array<String^>^ fila;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BTNIMPORTAR;
	protected:
	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtcolumnas;

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ TXTPILAS;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btncambiopila;

	private: System::Windows::Forms::Button^ BTNcambiocola;
	private: System::Windows::Forms::RichTextBox^ rtxtmovimientos;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ cambiopila;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtcambiocolumna;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BTNMOVIMIENTO;
	private: System::Windows::Forms::Button^ BTNSALIR;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->BTNIMPORTAR = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TXTPILAS = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtcolumnas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btncambiopila = (gcnew System::Windows::Forms::Button());
			this->BTNcambiocola = (gcnew System::Windows::Forms::Button());
			this->rtxtmovimientos = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BTNMOVIMIENTO = (gcnew System::Windows::Forms::Button());
			this->cambiopila = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtcambiocolumna = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BTNSALIR = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// BTNIMPORTAR
			// 
			this->BTNIMPORTAR->BackColor = System::Drawing::Color::Transparent;
			this->BTNIMPORTAR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTNIMPORTAR.BackgroundImage")));
			this->BTNIMPORTAR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->BTNIMPORTAR->Location = System::Drawing::Point(15, 195);
			this->BTNIMPORTAR->Name = L"BTNIMPORTAR";
			this->BTNIMPORTAR->Size = System::Drawing::Size(157, 58);
			this->BTNIMPORTAR->TabIndex = 2;
			this->BTNIMPORTAR->UseVisualStyleBackColor = false;
			this->BTNIMPORTAR->Click += gcnew System::EventHandler(this, &MyForm::BTNIMPORTAR_Click);
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(182, 209);
			this->txtPath->Margin = System::Windows::Forms::Padding(4);
			this->txtPath->Name = L"txtPath";
			this->txtPath->ReadOnly = true;
			this->txtPath->Size = System::Drawing::Size(302, 32);
			this->txtPath->TabIndex = 3;
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(738, 499);
			this->dgvMatriz->Margin = System::Windows::Forms::Padding(4);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->RowHeadersWidth = 51;
			this->dgvMatriz->Size = System::Drawing::Size(533, 428);
			this->dgvMatriz->TabIndex = 6;
			// 
			// btnExportar
			// 
			this->btnExportar->BackColor = System::Drawing::Color::Transparent;
			this->btnExportar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExportar.BackgroundImage")));
			this->btnExportar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExportar->Location = System::Drawing::Point(163, 286);
			this->btnExportar->Margin = System::Windows::Forms::Padding(4);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(156, 52);
			this->btnExportar->TabIndex = 7;
			this->btnExportar->UseVisualStyleBackColor = false;
			this->btnExportar->Click += gcnew System::EventHandler(this, &MyForm::btnExportar_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TXTPILAS);
			this->groupBox1->Controls->Add(this->BTNIMPORTAR);
			this->groupBox1->Controls->Add(this->btnExportar);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtcolumnas);
			this->groupBox1->Controls->Add(this->txtPath);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(30, 238);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(545, 356);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Generar o Guardar Tablero";
			// 
			// TXTPILAS
			// 
			this->TXTPILAS->Location = System::Drawing::Point(130, 157);
			this->TXTPILAS->Name = L"TXTPILAS";
			this->TXTPILAS->Size = System::Drawing::Size(246, 32);
			this->TXTPILAS->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(393, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Ingrese la cantidad de numeros dentro de pila";
			// 
			// txtcolumnas
			// 
			this->txtcolumnas->Location = System::Drawing::Point(130, 77);
			this->txtcolumnas->Name = L"txtcolumnas";
			this->txtcolumnas->Size = System::Drawing::Size(246, 32);
			this->txtcolumnas->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ingrese la cantidad de columnas que desea";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(526, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(791, 220);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btncambiopila);
			this->groupBox3->Controls->Add(this->BTNcambiocola);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(30, 616);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(545, 188);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cambios que se realizan";
			// 
			// btncambiopila
			// 
			this->btncambiopila->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncambiopila.BackgroundImage")));
			this->btncambiopila->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btncambiopila->Location = System::Drawing::Point(37, 109);
			this->btncambiopila->Name = L"btncambiopila";
			this->btncambiopila->Size = System::Drawing::Size(417, 57);
			this->btncambiopila->TabIndex = 11;
			this->btncambiopila->UseVisualStyleBackColor = true;
			// 
			// BTNcambiocola
			// 
			this->BTNcambiocola->BackColor = System::Drawing::Color::Transparent;
			this->BTNcambiocola->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTNcambiocola.BackgroundImage")));
			this->BTNcambiocola->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BTNcambiocola->Location = System::Drawing::Point(37, 31);
			this->BTNcambiocola->Name = L"BTNcambiocola";
			this->BTNcambiocola->Size = System::Drawing::Size(417, 60);
			this->BTNcambiocola->TabIndex = 8;
			this->BTNcambiocola->UseVisualStyleBackColor = false;
			// 
			// rtxtmovimientos
			// 
			this->rtxtmovimientos->Location = System::Drawing::Point(1407, 395);
			this->rtxtmovimientos->Name = L"rtxtmovimientos";
			this->rtxtmovimientos->Size = System::Drawing::Size(406, 532);
			this->rtxtmovimientos->TabIndex = 15;
			this->rtxtmovimientos->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(30, 834);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(545, 107);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Cambios de dificultad";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(377, 41);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 52);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(24, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 52);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(200, 41);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 52);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1502, 244);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(241, 145);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cambiopila);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtcambiocolumna);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->BTNMOVIMIENTO);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(738, 245);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(533, 234);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Moviemintos que se realizan";
			// 
			// BTNMOVIMIENTO
			// 
			this->BTNMOVIMIENTO->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTNMOVIMIENTO.BackgroundImage")));
			this->BTNMOVIMIENTO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BTNMOVIMIENTO->Location = System::Drawing::Point(117, 177);
			this->BTNMOVIMIENTO->Name = L"BTNMOVIMIENTO";
			this->BTNMOVIMIENTO->Size = System::Drawing::Size(278, 53);
			this->BTNMOVIMIENTO->TabIndex = 11;
			this->BTNMOVIMIENTO->UseVisualStyleBackColor = true;
			// 
			// cambiopila
			// 
			this->cambiopila->Location = System::Drawing::Point(128, 130);
			this->cambiopila->Name = L"cambiopila";
			this->cambiopila->Size = System::Drawing::Size(246, 32);
			this->cambiopila->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(327, 24);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ingrese la pila a la que quiere ingresar";
			// 
			// txtcambiocolumna
			// 
			this->txtcambiocolumna->Location = System::Drawing::Point(128, 68);
			this->txtcambiocolumna->Name = L"txtcambiocolumna";
			this->txtcambiocolumna->Size = System::Drawing::Size(246, 32);
			this->txtcambiocolumna->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(70, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(325, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Ingrese columna a la que desea mover";
			// 
			// BTNSALIR
			// 
			this->BTNSALIR->BackColor = System::Drawing::Color::Transparent;
			this->BTNSALIR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTNSALIR.BackgroundImage")));
			this->BTNSALIR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BTNSALIR->Location = System::Drawing::Point(1704, 12);
			this->BTNSALIR->Name = L"BTNSALIR";
			this->BTNSALIR->Size = System::Drawing::Size(208, 81);
			this->BTNSALIR->TabIndex = 17;
			this->BTNSALIR->UseVisualStyleBackColor = false;
			this->BTNSALIR->Click += gcnew System::EventHandler(this, &MyForm::BTNSALIR_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->BTNSALIR);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->rtxtmovimientos);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void ReestablecerMatriz() {
			dgvMatriz->Rows->Clear();
			dgvMatriz->Columns->Clear();
			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;
		};
	private: System::Void BTNIMPORTAR_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			//Se agregan los filtros al OpenFileDialog
			ofdImportar->Filter = "Archivos de texto (txt) | *.txt";
			ofdImportar->FileName = "";

			//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
			if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
			{
				ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
				txtPath->Text = ofdImportar->FileName;

				//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
				//Importante haber llamado al namespace System::IO antes de usar File
				array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);
				int capilas = Convert::ToInt32(TXTPILAS->Text);
				int cacolumnas = Convert::ToInt32(txtcolumnas->Text);
				//ver la cantidad de pilas
				if (cacolumnas<9)
				{
					if (archivoLineas->Length > 0) 
					{

						//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
						array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
						if (archivoColumna->Length > 0) 
						{
							int cantidadColumnas = archivoColumna->Length;

							//Agrega las columnas
							for (int x = 0; x < cantidadColumnas; x++) 
							{
								//Crea una columna
								DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
								nuevacolumna->Width = 20;
								//Le agrega el tipo de columna que será
								DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
								nuevacolumna->CellTemplate = cellTemplate;
								//Inserta la columna
								dgvMatriz->Columns->Add(nuevacolumna);
							}

							//Agrega las filas de manera dinámica
							for (int i = 0; i < archivoLineas->Length; i++) 
							{
								dgvMatriz->Rows->Add();
							}

							//Llena el DatagridView y cambiar colores
							for (int i = 0; i < archivoLineas->Length; i++) 
							{
								fila = archivoLineas[i]->Split(',');
							}
							//variables a usar
							int j = 0;
							int i = 0;
							//contadores
							int contx = 0, contc = 0;
							// variables de colores
							int B, Z, W, R, Y, G, P, N;
							//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
							while (j!=cantidadColumnas) 
							{
								int contp = 0;
								//llenar en forma de pila
								int cantx = capilas-1;
								//colocar datos hasta llegar a la X
								while (i<archivoColumna->Length&&fila[i]!="X")
								{
									if (contp>=capilas)
									{
										dgvMatriz->Rows->Clear();
										dgvMatriz->Columns->Clear();
										MessageBox::Show("Esta llenando de mas, solo se pueden obtener 8 pilas", "Numeros de más.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										i = archivoColumna->Length;
									}
									else
									{
										//ver que no hay mas colores
										if (contc>=cantidadColumnas)
										{
											if (contc != 8)
											{
												//vaciar el tablero a usar
												dgvMatriz->Rows->Clear();
												dgvMatriz->Columns->Clear();
												//para que salga del ciclo y muestre un mensaje
												i = archivoColumna->Length;
												MessageBox::Show("deben de haber mas pilas para tener la cantidad exacta de colores en el archivo", "no estan los colores necesarios", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
											}
											else
												contc = 0;
										}
										else
										{
											//cambiar colores que ingresa 
											if (fila[i]=="B")
											{
												//cambio a negro
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Black;
												B = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i]=="Z")
											{
												//cambio a AZUL
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Blue;
												Z = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "W")
											{
												//cambio a BLANCO
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::White;
												W = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "R")
											{
												//cambio a ROJO
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Red;
												R = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "Y")
											{
												//cambio a AMARILLO
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Yellow;
												Y = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "G")
											{
												//cambio a VERDE
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Green;
												G = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "P")
											{
												//cambio a MORADO
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::Purple;
												P = 1;
												//conteo de tablero
												cantidadco++;
											}
											else if (fila[i] == "N")
											{
												//cambio a AZUL
												dgvMatriz->Rows[cantx]->Cells[j]->Style->BackColor = Color::DarkBlue;
												N = 1;
												//conteo de tablero
												cantidadco++;
											}
											//CANTIDAD DE COLORES 
											contc = B + Z + W + R + Y + G + P + N;
											//tenga menos filas 
											cantx--;
											//no hallan espacios vacios
											if (fila[i]=="")
											{
												cantx++;
											}
											else
											{
												if (contx==0)
												{
													pila0->
												}
											}
										}
									}
								}
								dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
								j++;
							}
						}
					}

				}
				
			}
			else {
				// Si no se selecciona correctamente un elemento entonces falla
				MessageBox::Show("No se seleccionó ningún archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Ingrese un valor entero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((dgvMatriz->Columns->Count > 0) && (dgvMatriz->Rows->Count > 0)) {
		sfdExportar->Filter = "Archivos de texto (txt) | *.txt";
		if (sfdExportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			//Guardo el contenido del DataGridView en una sola cadena
			String^ linea = "";
			for (int i = 0; i < dgvMatriz->Rows->Count; i++) {
				for (int j = 0; j < dgvMatriz->Columns->Count; j++) {
					if (j == dgvMatriz->Columns->Count - 1)
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + "\r\n";
					else
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + ",";
				}
			}

			//Utilizo el objeto System::IO::File para guardar el texto
			//Importante haber llamado al namespace System::IO antes de usar File
			File::WriteAllText(sfdExportar->FileName, linea);
			MessageBox::Show("Archivo guardado exitosamente"
				, "Operación exitosa"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Information);
		}
		else 
		{
			MessageBox::Show("No se exportó el archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void BTNSALIR_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Que buen juego!! Regresa pronto.", "Salir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	Environment::Exit(0);
}
};
}
