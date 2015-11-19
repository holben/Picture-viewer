#pragma once
#include "PictureList.h"
namespace PictureViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DisplayWindow
	/// </summary>
	public ref class DisplayWindow : public System::Windows::Forms::Form
	{
	public:
		DisplayWindow(void)
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
		~DisplayWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox1;




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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(90, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(918, 419);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(9, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 419);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Previous";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DisplayWindow::button1_MouseClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(1014, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 419);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DisplayWindow::button2_MouseClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(696, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DisplayWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkGreen;
			this->button4->Location = System::Drawing::Point(892, 437);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(197, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DisplayWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(495, 437);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(195, 54);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Insert";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Position: ";
			// 
			// DisplayWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1102, 503);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"DisplayWindow";
			this->Text = L"DisplayWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: int pos = 0 ;
PictureList pictures;
private: System::Void button2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {//change positive position
	if (pos < pictures.size())
	{
		pos++;
		textBox1->Text = "Position: " + pos;
	}
	else
	{
		textBox1->Text = "Can't go farther";
	}
}
private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {//change negetive position
	if (pos <= 0)
	{
		textBox1->Text = "Can't go back";
	}
	else
	{
		pos--;
		textBox1->Text = "Position: " + pos;
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {//removes picture node
	if (pos != 0)
	{
		pictures.remove(pos);
		textBox1->Text = "Removed: " + pos;
	}
	else
	{
		textBox1->Text = "Can't delete root";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {//adds picture node
	pictures.add("gdssgd");
}
};
}
