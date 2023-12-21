#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_minusplus;
	private: System::Windows::Forms::Button^ btn_percent;
	protected:




	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_multiplication;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_plus;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ button20;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	protected:






	protected:


	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_minusplus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_multiplication = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->result_label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->result_label->Dock = System::Windows::Forms::DockStyle::Top;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result_label->Location = System::Drawing::Point(0, 0);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(307, 70);
			this->result_label->TabIndex = 0;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ac->Location = System::Drawing::Point(12, 88);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(65, 55);
			this->btn_ac->TabIndex = 1;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_minusplus
			// 
			this->btn_minusplus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_minusplus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minusplus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minusplus->Location = System::Drawing::Point(83, 88);
			this->btn_minusplus->Name = L"btn_minusplus";
			this->btn_minusplus->Size = System::Drawing::Size(65, 55);
			this->btn_minusplus->TabIndex = 2;
			this->btn_minusplus->Text = L"+/-";
			this->btn_minusplus->UseVisualStyleBackColor = false;
			this->btn_minusplus->Click += gcnew System::EventHandler(this, &MyForm::btn_minusplus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_percent->Location = System::Drawing::Point(154, 88);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(65, 55);
			this->btn_percent->TabIndex = 3;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_divide->Location = System::Drawing::Point(225, 88);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(65, 55);
			this->btn_divide->TabIndex = 4;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_multiplication
			// 
			this->btn_multiplication->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_multiplication->Location = System::Drawing::Point(225, 149);
			this->btn_multiplication->Name = L"btn_multiplication";
			this->btn_multiplication->Size = System::Drawing::Size(65, 55);
			this->btn_multiplication->TabIndex = 8;
			this->btn_multiplication->Text = L"*";
			this->btn_multiplication->UseVisualStyleBackColor = false;
			this->btn_multiplication->Click += gcnew System::EventHandler(this, &MyForm::btn_multiplication_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(154, 149);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(83, 149);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 6;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 149);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 5;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plus->Location = System::Drawing::Point(225, 210);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 55);
			this->btn_plus->TabIndex = 12;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(154, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(83, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 210);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 55);
			this->button12->TabIndex = 9;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minus->Location = System::Drawing::Point(225, 271);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 55);
			this->btn_minus->TabIndex = 16;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(154, 271);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 15;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(83, 271);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 14;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(12, 271);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 13;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_equal->Location = System::Drawing::Point(225, 332);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 55);
			this->btn_equal->TabIndex = 20;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_dot->Location = System::Drawing::Point(154, 332);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 19;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(12, 332);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 55);
			this->button20->TabIndex = 17;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(307, 431);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_multiplication);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_minusplus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(264, 470);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion

	   private: System::Void BtnNumberClick(System::Object^ sender, System::EventArgs^ e) {
		   Button^ button = safe_cast<Button^>(sender);
		   
		   if (this->result_label->Text == "0" || is_equal) {
			   this->result_label->Text = button->Text;
			   is_equal = false;
		   }
		   else
			   this->result_label->Text = this->result_label->Text + button->Text;
	   }
private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void btn_multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}


private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToDouble(this->result_label->Text);
	this->user_action = action;
	this->result_label->Text = "0";
}
private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;

	float second = System::Convert::ToDouble(this->result_label->Text);
	float res;
	switch (this->user_action) {
	case '+':res = this->first_num + second; break;
	case '-':res = this->first_num - second; break;
	case '*':res = this->first_num * second; break;
	case '%':res = this->first_num * second / 100; break;
	case '/':
		if (second == 0) {
			res = 0;
			MessageBox::Show(this, "На ноль делить нельзя", "ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
		else
			res = this->first_num / second;
		break;
	}
	is_equal = true;
	this->result_label->Text = System::Convert::ToString(res);
}
private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result_label->Text = "0";
	this->first_num = 0;
	this->user_action = ' ';
	this->is_equal = false;
}
private: System::Void btn_minusplus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->result_label->Text);
	num *= -1;
	this->result_label->Text = System::Convert::ToString(num);
}
private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->result_label->Text;
	if (!text->Contains(","))
		this->result_label->Text = text + ",";
}
};
}
