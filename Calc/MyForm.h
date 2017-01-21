#pragma once

namespace Calc {

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
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnDecPnt;
	protected:





	protected:








	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btneq;
	private: System::Windows::Forms::Button^  btnDiv;






	private: System::Windows::Forms::Button^  btnMult;

	private: System::Windows::Forms::Button^  btnMinus;

	private: System::Windows::Forms::Button^  btnPlus;

	private: System::Windows::Forms::Label^  lblShowOp;
	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnPlusMinus;
	private: System::Windows::Forms::Button^  btnBackspace;

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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDecPnt = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btneq = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->Location = System::Drawing::Point(13, 13);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(218, 43);
			this->txtDisplay->TabIndex = 0;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(13, 129);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(50, 50);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(69, 129);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(50, 50);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(12, 185);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(50, 50);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(69, 185);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(50, 50);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(13, 241);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(50, 50);
			this->btn1->TabIndex = 5;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(69, 241);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(50, 50);
			this->btn2->TabIndex = 6;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(13, 297);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(50, 50);
			this->btn0->TabIndex = 7;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			// 
			// btnDecPnt
			// 
			this->btnDecPnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDecPnt->Location = System::Drawing::Point(69, 297);
			this->btnDecPnt->Name = L"btnDecPnt";
			this->btnDecPnt->Size = System::Drawing::Size(50, 50);
			this->btnDecPnt->TabIndex = 8;
			this->btnDecPnt->Text = L".";
			this->btnDecPnt->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(125, 129);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(50, 50);
			this->btn9->TabIndex = 9;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(125, 185);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(50, 50);
			this->btn6->TabIndex = 10;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(125, 241);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(50, 50);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btneq
			// 
			this->btneq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btneq->Location = System::Drawing::Point(125, 297);
			this->btneq->Name = L"btneq";
			this->btneq->Size = System::Drawing::Size(50, 50);
			this->btneq->TabIndex = 12;
			this->btneq->Text = L"=";
			this->btneq->UseVisualStyleBackColor = true;
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDiv->Location = System::Drawing::Point(181, 297);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(50, 50);
			this->btnDiv->TabIndex = 13;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMult->Location = System::Drawing::Point(181, 241);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(50, 50);
			this->btnMult->TabIndex = 14;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(181, 185);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(50, 50);
			this->btnMinus->TabIndex = 15;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(181, 129);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(50, 50);
			this->btnPlus->TabIndex = 16;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Location = System::Drawing::Point(17, 19);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 17;
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(70, 73);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(50, 50);
			this->btnCE->TabIndex = 18;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(126, 73);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(50, 50);
			this->btnC->TabIndex = 19;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlusMinus->Location = System::Drawing::Point(181, 73);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(50, 50);
			this->btnPlusMinus->TabIndex = 21;
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackspace->Location = System::Drawing::Point(13, 73);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(50, 50);
			this->btnBackspace->TabIndex = 20;
			this->btnBackspace->Text = L"CE";
			this->btnBackspace->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(243, 359);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btneq);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnDecPnt);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
