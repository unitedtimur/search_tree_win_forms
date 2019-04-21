#pragma once

#include <vector>
#include <msclr/marshal_cppstd.h>
#include <ctime>
#include "Bin_Tree.h"
#include "source.hpp"

namespace searchtreewinforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	vector<bin_tree> trees;

	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			srand(time((unsigned int)0));
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::ComboBox^ leftBox;
	private: System::Windows::Forms::Label^ leftLabel;
	private: System::Windows::Forms::Label^ middleLabel;
	private: System::Windows::Forms::ComboBox^ middleBox;
	private: System::Windows::Forms::Label^ rightLabel;
	private: System::Windows::Forms::ComboBox^ rightBox;
	private: System::Windows::Forms::Label^ textBoxLabel;
	private: System::Windows::Forms::TextBox^ textBox;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->leftBox = (gcnew System::Windows::Forms::ComboBox());
			this->leftLabel = (gcnew System::Windows::Forms::Label());
			this->middleLabel = (gcnew System::Windows::Forms::Label());
			this->middleBox = (gcnew System::Windows::Forms::ComboBox());
			this->rightLabel = (gcnew System::Windows::Forms::Label());
			this->rightBox = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxLabel = (gcnew System::Windows::Forms::Label());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox->Location = System::Drawing::Point(12, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(866, 514);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->Click += gcnew System::EventHandler(this, &main::PictureBox_Click);
			// 
			// leftBox
			// 
			this->leftBox->FormattingEnabled = true;
			this->leftBox->Location = System::Drawing::Point(884, 32);
			this->leftBox->Name = L"leftBox";
			this->leftBox->Size = System::Drawing::Size(148, 24);
			this->leftBox->TabIndex = 1;
			this->leftBox->SelectedIndexChanged += gcnew System::EventHandler(this, &main::LeftBox_SelectedIndexChanged);
			// 
			// leftLabel
			// 
			this->leftLabel->AutoSize = true;
			this->leftLabel->Location = System::Drawing::Point(884, 12);
			this->leftLabel->Name = L"leftLabel";
			this->leftLabel->Size = System::Drawing::Size(148, 17);
			this->leftLabel->TabIndex = 2;
			this->leftLabel->Text = L"Actions for picture box";
			this->leftLabel->Click += gcnew System::EventHandler(this, &main::LeftLabel_Click);
			// 
			// middleLabel
			// 
			this->middleLabel->AutoSize = true;
			this->middleLabel->Location = System::Drawing::Point(1061, 12);
			this->middleLabel->Name = L"middleLabel";
			this->middleLabel->Size = System::Drawing::Size(124, 17);
			this->middleLabel->TabIndex = 3;
			this->middleLabel->Text = L"Actions for objects";
			this->middleLabel->Click += gcnew System::EventHandler(this, &main::MiddleLabel_Click);
			// 
			// middleBox
			// 
			this->middleBox->FormattingEnabled = true;
			this->middleBox->Location = System::Drawing::Point(1038, 32);
			this->middleBox->Name = L"middleBox";
			this->middleBox->Size = System::Drawing::Size(219, 24);
			this->middleBox->TabIndex = 4;
			this->middleBox->SelectedIndexChanged += gcnew System::EventHandler(this, &main::MiddleBox_SelectedIndexChanged);
			// 
			// rightLabel
			// 
			this->rightLabel->AutoSize = true;
			this->rightLabel->Location = System::Drawing::Point(1260, 12);
			this->rightLabel->Name = L"rightLabel";
			this->rightLabel->Size = System::Drawing::Size(95, 17);
			this->rightLabel->TabIndex = 5;
			this->rightLabel->Text = L"List of objects";
			this->rightLabel->Click += gcnew System::EventHandler(this, &main::RightLabel_Click);
			// 
			// rightBox
			// 
			this->rightBox->FormattingEnabled = true;
			this->rightBox->Location = System::Drawing::Point(1263, 32);
			this->rightBox->Name = L"rightBox";
			this->rightBox->Size = System::Drawing::Size(92, 24);
			this->rightBox->TabIndex = 6;
			this->rightBox->SelectedIndexChanged += gcnew System::EventHandler(this, &main::RightBox_SelectedIndexChanged);
			// 
			// textBoxLabel
			// 
			this->textBoxLabel->AutoSize = true;
			this->textBoxLabel->Location = System::Drawing::Point(1361, 12);
			this->textBoxLabel->Name = L"textBoxLabel";
			this->textBoxLabel->Size = System::Drawing::Size(75, 17);
			this->textBoxLabel->TabIndex = 7;
			this->textBoxLabel->Text = L"Enter here";
			this->textBoxLabel->Click += gcnew System::EventHandler(this, &main::TextBoxLabel_Click);
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(1364, 32);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(100, 22);
			this->textBox->TabIndex = 8;
			this->textBox->TextChanged += gcnew System::EventHandler(this, &main::TextBox_TextChanged);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1479, 538);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->textBoxLabel);
			this->Controls->Add(this->rightBox);
			this->Controls->Add(this->rightLabel);
			this->Controls->Add(this->middleBox);
			this->Controls->Add(this->middleLabel);
			this->Controls->Add(this->leftLabel);
			this->Controls->Add(this->leftBox);
			this->Controls->Add(this->pictureBox);
			this->Name = L"main";
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "by UnitedTimur (c)";
		this->BackColor = Color::Gray;

		//leftBox
		leftBox->Items->Add("Paint current tree");
		leftBox->Items->Add("Clear the screen");

		//middleBox
		middleBox->Items->Add("Create new object");		      //0
		middleBox->Items->Add("Out all trees in console");	  //1
		middleBox->Items->Add("Out current tree in console"); //2
		middleBox->Items->Add("Create random size tree");     //3
		middleBox->Items->Add("Clear the console");			  //4
		middleBox->Items->Add("Delete key in current tree");  //5
		middleBox->Items->Add("Find key in current tree");	  //6
		middleBox->Items->Add("Find max in current tree");    //7
		middleBox->Items->Add("Find min in current tree");    //8
		middleBox->Items->Add("Add in current tree number");  //9

		//textBox
		textBox->Text = Convert::ToString(0);
	}
	private: System::Void PictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LeftLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LeftBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ graph = pictureBox->CreateGraphics();
		Brush^ brushE = gcnew SolidBrush(Color::Orange);
		Brush^ brushT = gcnew SolidBrush(Color::Black);
		String^ drawS;
		System::Drawing::Font^ drawF = gcnew System::Drawing::Font("Arial", 18);

		switch (leftBox->SelectedIndex)
		{
		case 0:
		{
			graph->Clear(Color::Gray);

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					vector<int> tree = trees[i].post();

					node* _node = trees[i].get_root();

					int left = 0, right = pictureBox->Width - 100;

					for (auto var : tree)
					{
						drawS = Convert::ToString(var);
						paint(graph, brushE, brushT, drawF, drawS, _node, left, right, 0);
					}
				}
			}

			break;
		}
		case 1:
		{
			graph->Clear(Color::Gray);
			break;
		}
		}
	}
	private: System::Void MiddleLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MiddleBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		static int i = 0;

		switch (middleBox->SelectedIndex)
		{
		case 0: // Create new object
		{
			cout << "// Method 'Create new object' //" << endl;

			if (Convert::ToInt64(textBox->Text) == 0)
			{
				bin_tree tree;
				trees.push_back(tree);
			}
			else if (Convert::ToInt64(textBox->Text))
			{
				bin_tree tree(Convert::ToInt64(textBox->Text));
				trees.push_back(tree);
			}

			rightBox->Items->Add(Convert::ToString("Tree" + ++i));

			break;
		}
		case 1: // Out all trees in console
		{
			cout << "// Method 'Out all trees in console' //" << endl;

			int j = 0;

			for (auto tree : trees)
			{
				cout << "	// Tree " << ++j << " ---> " << tree << endl;
			}
			break;
		}
		case 2: // Out current tree in console
		{
			cout << "// Method 'Out current tree in console' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					cout << "	// Tree " << i + 1 << " ---> " << trees[i] << endl;
				}
			}
			break;
		}
		case 3: // Create random size tree
		{
			cout << "// Method 'Create random size tree' //" << endl;

			bin_tree tree;

			for (auto i = 0; i < Convert::ToInt64(textBox->Text); ++i)
			{
				tree.add_node(rand() % 99 - 45);
			}

			trees.push_back(tree);

			rightBox->Items->Add(Convert::ToString("Tree" + ++i));

			break;
		}
		case 4: // Clear the console
		{
			cout << "// Method 'clear the console' //" << endl;
			system("cls");
			break;
		}
		case 5: // Delete key in current tree
		{
			cout << "// Method 'Delete key in current tree' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					trees[i].delete_node(Convert::ToInt64(textBox->Text));
				}
			}

			break;
		}
		case 6: // Find key in current tree
		{
			cout << "// Method 'Find key in current tree' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					node* _node = trees[i].find_key(Convert::ToInt64(textBox->Text));

					if (_node != nullptr)
					{
						cout << "	// Key was founded ---> " << _node->get_data() << endl;
					}
					else
					{
						cout << "	// Key wasn't founded ---> null" << endl;
					}
				}
			}

			break;
		}
		case 7: // Find max in current tree
		{
			cout << "// Method 'Find max in current tree' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					node* _node = trees[i].find_max();

					if (_node != nullptr)
					{
						cout << "	// Max was founded ---> " << _node->get_data() << endl;
					}
					else
					{
						cout << "	// Max wasn't founded ---> null" << endl;
					}
				}
			}

			break;
		}
		case 8: // Find min in current tree
		{
			cout << "// Method 'Find min in current tree' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					node* _node = trees[i].find_min();

					if (_node != nullptr)
					{
						cout << "	// Min was founded ---> " << _node->get_data() << endl;
					}
					else
					{
						cout << "	// Min wasn't founded ---> null" << endl;
					}
				}
			}

			break;
		}
		case 9: // Add in current tree number
		{
			cout << "// Method 'Add in current tree number' //" << endl;

			for (auto i = 0; i < trees.size(); ++i)
			{
				if (i == rightBox->SelectedIndex)
				{
					trees[i].add_node(Convert::ToInt64(textBox->Text));
				}
			}

			break;
		}
		}
	}
	private: System::Void RightLabel_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void RightBox_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void TextBoxLabel_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void TextBox_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	};
}
