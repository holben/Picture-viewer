#pragma once
#include "PictureList.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
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
	private: System::Windows::Forms::Button^  btn_prev;
	protected:

	private: System::Windows::Forms::Button^  btn_next;
	private: System::Windows::Forms::Button^  btn_remove;


	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_insert;


	private: System::Windows::Forms::TextBox^  positionDisplay;
	private: System::Windows::Forms::Label^  PictureName;
	private: System::Windows::Forms::TextBox^  Address;










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
			this->btn_prev = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_remove = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->positionDisplay = (gcnew System::Windows::Forms::TextBox());
			this->PictureName = (gcnew System::Windows::Forms::Label());
			this->Address = (gcnew System::Windows::Forms::TextBox());
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
			// btn_prev
			// 
			this->btn_prev->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_prev->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->btn_prev->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_prev->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prev->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_prev->Location = System::Drawing::Point(9, 12);
			this->btn_prev->Name = L"btn_prev";
			this->btn_prev->Size = System::Drawing::Size(75, 419);
			this->btn_prev->TabIndex = 1;
			this->btn_prev->Text = L"Previous";
			this->btn_prev->UseVisualStyleBackColor = false;
			this->btn_prev->Click += gcnew System::EventHandler(this, &DisplayWindow::btn_prev_Click);
			// 
			// btn_next
			// 
			this->btn_next->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_next->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->btn_next->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_next->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_next->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_next->Location = System::Drawing::Point(1014, 12);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(75, 419);
			this->btn_next->TabIndex = 2;
			this->btn_next->Text = L"Next";
			this->btn_next->UseVisualStyleBackColor = false;
			this->btn_next->Click += gcnew System::EventHandler(this, &DisplayWindow::btn_next_Click);
			// 
			// btn_remove
			// 
			this->btn_remove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_remove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_remove->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_remove->ForeColor = System::Drawing::Color::Maroon;
			this->btn_remove->Location = System::Drawing::Point(696, 437);
			this->btn_remove->Name = L"btn_remove";
			this->btn_remove->Size = System::Drawing::Size(190, 54);
			this->btn_remove->TabIndex = 3;
			this->btn_remove->Text = L"Remove";
			this->btn_remove->UseVisualStyleBackColor = false;
			this->btn_remove->Click += gcnew System::EventHandler(this, &DisplayWindow::btn_remove_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::DarkGreen;
			this->btn_add->Location = System::Drawing::Point(892, 437);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(197, 54);
			this->btn_add->TabIndex = 4;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &DisplayWindow::btn_add_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::SlateGray;
			this->btn_insert->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_insert->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_insert->Location = System::Drawing::Point(495, 437);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(195, 54);
			this->btn_insert->TabIndex = 5;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &DisplayWindow::btn_insert_Click);
			// 
			// positionDisplay
			// 
			this->positionDisplay->Location = System::Drawing::Point(90, 12);
			this->positionDisplay->Name = L"positionDisplay";
			this->positionDisplay->Size = System::Drawing::Size(100, 20);
			this->positionDisplay->TabIndex = 6;
			this->positionDisplay->Text = L"Position: 0";
			// 
			// PictureName
			// 
			this->PictureName->AutoSize = true;
			this->PictureName->Location = System::Drawing::Point(492, 15);
			this->PictureName->Name = L"PictureName";
			this->PictureName->Size = System::Drawing::Size(0, 13);
			this->PictureName->TabIndex = 7;
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(908, 411);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(100, 20);
			this->Address->TabIndex = 8;
			// 
			// DisplayWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1102, 503);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->PictureName);
			this->Controls->Add(this->positionDisplay);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_remove);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_prev);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"DisplayWindow";
			this->Text = L"DisplayWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		PictureList pictures;
		int pos;
		System::String^ s2s(std::string  str) {
			return gcnew System::String(str.c_str());
		}


		std::string s2s(System::String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}

private: System::Void btn_next_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pos >= pictures.size())
	{

		
	}
	else
	{

		pos++;
		positionDisplay->Text = "Position: " + pos;
		pictures.walkToPosition(pos);
		PictureName->Text = s2s(pictures.get(pos));
	}
}
private: System::Void btn_prev_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pos < 1)
	{
		
		
	}
	else
	{

		pos--;
		positionDisplay->Text = "Position: " + pos;
		pictures.walkToPosition(pos);
		PictureName->Text = s2s(pictures.get(pos));
	}
}
private: System::Void btn_remove_Click(System::Object^  sender, System::EventArgs^  e) {
	pictures.remove(pos);
	
}
private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {

	System::String^ Location = Address->Text;
	pictures.add(s2s(Location));
	pos = pictures.size();
	pictures.walkToPosition(pos);
	positionDisplay->Text = "Position: " + pos;
	PictureName->Text = s2s(pictures.get(pos));
	
}
private: System::Void btn_insert_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ Location = Address->Text;
	pictures.insert(pos, s2s(Location));
}
};
}
