#include<QtCore>
#include<QtGui>
#include<iostream>

class MainWindow : public QWidget
{
	public:
		MainWindow();

	private:
		double operand_1 = 0.0;  //Speichervariablen erstellen
        	double operand_2 = 0.0;
        	double ergebnis = 0.0;
        	char operator_;
		QLineEdit *anzeige;
		void z0_angeklickt();  //Funktionen der Buttons erstellen
		void z1_angeklickt();
		void z2_angeklickt();
		void z3_angeklickt();
		void z4_angeklickt();
		void z5_angeklickt();
		void z6_angeklickt();
		void z7_angeklickt();
		void z8_angeklickt();
		void z9_angeklickt();
		void del_angeklickt();
		void komma_angeklickt();
		void allclear_angeklickt();
		void plus_angeklickt();
		void minus_angeklickt();
		void mal_angeklickt();
		void geteilt_angeklickt();
		void gleich_angeklickt();
		void vz_angeklickt();
};

MainWindow::MainWindow()
{
	setMinimumSize(700, 350);

	QPushButton *eingabe_z0 = new QPushButton();  //Erstellen der Buttons
	eingabe_z0->setText("0");
	QPushButton *eingabe_z1 = new QPushButton();
	eingabe_z1->setText("1");
	QPushButton *eingabe_z2 = new QPushButton();
	eingabe_z2->setText("2");
	QPushButton *eingabe_z3 = new QPushButton();
	eingabe_z3->setText("3");
	QPushButton *eingabe_z4 = new QPushButton();
	eingabe_z4->setText("4");
	QPushButton *eingabe_z5 = new QPushButton();
	eingabe_z5->setText("5");
	QPushButton *eingabe_z6 = new QPushButton();
	eingabe_z6->setText("6");
	QPushButton *eingabe_z7 = new QPushButton();
	eingabe_z7->setText("7");
	QPushButton *eingabe_z8 = new QPushButton();
	eingabe_z8->setText("8");
	QPushButton *eingabe_z9 = new QPushButton();
	eingabe_z9->setText("9");
	QPushButton *eingabe_komma = new QPushButton();
        eingabe_komma->setText(",");
	QPushButton *eingabe_del = new QPushButton();
	eingabe_del->setText("DEL");
	QPushButton *eingabe_mal = new QPushButton();
	eingabe_mal->setText("x");
	QPushButton *eingabe_geteilt = new QPushButton();
	eingabe_geteilt->setText("/");
	QPushButton *eingabe_plus = new QPushButton();
	eingabe_plus->setText("+");
	QPushButton *eingabe_minus = new QPushButton();
	eingabe_minus->setText("-");
	QPushButton *eingabe_gleich = new QPushButton();
	eingabe_gleich->setText("=");
	QPushButton *eingabe_allclear = new QPushButton();
        eingabe_allclear->setText("AC");
	QPushButton *eingabe_vz = new QPushButton();
        eingabe_vz->setText("+ / _");

	anzeige = new QLineEdit();  //Eingaben- und Ergebnisanzeige erstellen
	anzeige->setReadOnly(true);
	anzeige->setAlignment(Qt::AlignRight);

	QGridLayout *anordnung = new QGridLayout();  //Anordnung der Buttons erstellen
	anordnung->addWidget(anzeige,1,1,1,4);
	anordnung->addWidget(eingabe_z0,6,2,1,1);
	anordnung->addWidget(eingabe_z1,5,1,1,1);
	anordnung->addWidget(eingabe_z2,5,2,1,1);
	anordnung->addWidget(eingabe_z3,5,3,1,1);
	anordnung->addWidget(eingabe_z4,4,1,1,1);
	anordnung->addWidget(eingabe_z5,4,2,1,1);
	anordnung->addWidget(eingabe_z6,4,3,1,1);
	anordnung->addWidget(eingabe_z7,3,1,1,1);
	anordnung->addWidget(eingabe_z8,3,2,1,1);
	anordnung->addWidget(eingabe_z9,3,3,1,1);
	anordnung->addWidget(eingabe_komma,6,1,1,1);
	anordnung->addWidget(eingabe_del,2,3,1,1);
	anordnung->addWidget(eingabe_mal,4,4,1,1);
	anordnung->addWidget(eingabe_geteilt,3,4,1,1);
	anordnung->addWidget(eingabe_plus,6,4,1,1);
	anordnung->addWidget(eingabe_minus,5,4,1,1);
	anordnung->addWidget(eingabe_gleich,6,3,1,1);
	anordnung->addWidget(eingabe_allclear,2,4,1,1);
	anordnung->addWidget(eingabe_vz,2,1,1,1);

	setLayout(anordnung);  //Anordnung übernehmen

	QObject::connect(eingabe_z0, &QPushButton::clicked, this, &MainWindow::z0_angeklickt);  //Funktionen mit Buttons verknüpft
	QObject::connect(eingabe_z1, &QPushButton::clicked, this, &MainWindow::z1_angeklickt);
	QObject::connect(eingabe_z2, &QPushButton::clicked, this, &MainWindow::z2_angeklickt);
	QObject::connect(eingabe_z3, &QPushButton::clicked, this, &MainWindow::z3_angeklickt);
	QObject::connect(eingabe_z4, &QPushButton::clicked, this, &MainWindow::z4_angeklickt);
	QObject::connect(eingabe_z5, &QPushButton::clicked, this, &MainWindow::z5_angeklickt);
	QObject::connect(eingabe_z6, &QPushButton::clicked, this, &MainWindow::z6_angeklickt);
	QObject::connect(eingabe_z7, &QPushButton::clicked, this, &MainWindow::z7_angeklickt);
	QObject::connect(eingabe_z8, &QPushButton::clicked, this, &MainWindow::z8_angeklickt);
	QObject::connect(eingabe_z9, &QPushButton::clicked, this, &MainWindow::z9_angeklickt);
	QObject::connect(eingabe_komma, &QPushButton::clicked, this, &MainWindow::komma_angeklickt);
	QObject::connect(eingabe_del, &QPushButton::clicked, this, &MainWindow::del_angeklickt);
	QObject::connect(eingabe_mal, &QPushButton::clicked, this, &MainWindow::mal_angeklickt);
	QObject::connect(eingabe_geteilt, &QPushButton::clicked, this, &MainWindow::geteilt_angeklickt);
	QObject::connect(eingabe_plus, &QPushButton::clicked, this, &MainWindow::plus_angeklickt);
	QObject::connect(eingabe_minus, &QPushButton::clicked, this, &MainWindow::minus_angeklickt);
	QObject::connect(eingabe_gleich, &QPushButton::clicked, this, &MainWindow::gleich_angeklickt);
	QObject::connect(eingabe_allclear, &QPushButton::clicked, this, &MainWindow::allclear_angeklickt);
	QObject::connect(eingabe_vz, &QPushButton::clicked, this, &MainWindow::vz_angeklickt);
}

void MainWindow::z0_angeklickt()  //Funktionen der Buttons beschreiben
{
	if(anzeige->text()=="0")
	{
		anzeige->clear();
	}
	anzeige->insert("0");
}

void MainWindow::z1_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
        anzeige->insert("1");
}

void MainWindow::z2_angeklickt()
{	
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
        anzeige->insert("2");
}

void MainWindow::z3_angeklickt()
{
        if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("3");
}

void MainWindow::z4_angeklickt()
{
        if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("4");
}

void MainWindow::z5_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("5");
}

void MainWindow::z6_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("6");
}

void MainWindow::z7_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }anzeige->insert("7");
}

void MainWindow::z8_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("8");
}

void MainWindow::z9_angeklickt()
{
	if(anzeige->text()=="0")
        {
                anzeige->clear();
        }
	anzeige->insert("9");
}

void MainWindow::vz_angeklickt()
{
	if(anzeige->text()!="0")
        {
        	double temp = 0.0;
		temp = anzeige->text().toDouble();
		temp = temp*(-1);
		anzeige->setText(QString::number(temp));
	}

}

void MainWindow::komma_angeklickt()
{
	if(anzeige->text().contains(".")==false)
	{
		anzeige->insert(".");
	}
}

void MainWindow::del_angeklickt()
{
        anzeige->backspace();
}

void MainWindow::mal_angeklickt()
{
        operand_1 = anzeige->text().toDouble();
	operator_ = 'x';
	anzeige->clear();
}

void MainWindow::geteilt_angeklickt()
{
        operand_1 = anzeige->text().toDouble();
        operator_ = '/';
        anzeige->clear();
}

void MainWindow::plus_angeklickt()
{
        operand_1 = anzeige->text().toDouble();
        operator_ = '+';
        anzeige->clear();
}

void MainWindow::minus_angeklickt()
{
        operand_1 = anzeige->text().toDouble();
        operator_ = '-';
        anzeige->clear();
}

void MainWindow::allclear_angeklickt()
{
	operand_1 = 0;
	operand_2 = 0;
	ergebnis = 0;
	anzeige->clear();
}

void MainWindow::gleich_angeklickt()
{
        operand_2 = anzeige->text().toDouble();
	
	switch(operator_)
	{
		case 'x':
			ergebnis = operand_1*operand_2;
			break;
		case '/':
			if(operand_2==0)
			{
				anzeige->setText("ERR");
			}else
			{
			ergebnis = operand_1/operand_2;
			break;
			}
		case '+':
			ergebnis = operand_1+operand_2;
			break;
		case '-': 
			ergebnis = operand_1-operand_2;
			break;
	}
       anzeige->setText(QString::number(ergebnis));
}


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow *window = new MainWindow();
	window->show();

	return app.exec();
}
