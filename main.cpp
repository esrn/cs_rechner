#include <QtCore>
#include <QtGui>
#include <iostream>

class MainWindow : public QWidget
{
	public:
		MainWindow();
		double operand_1 = 0.0;  //Speichervariablen erstellen
        	double operand_2 = 0.0;
        	double ergebnis = 0.0;
        	char operator_;
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
};

MainWindow::MainWindow()
{
	setMinimumSize(700, 350);

	QPushButton *eingabe_z0 = new QPushbutton();  //Erstellen der Buttons
	eingabe_z0->setText("0");
	QPushButton *eingabe_z1 = new QPushbutton();
	eingabe_z1->setText("1");
	QPushButton *eingabe_z2 = new QPushbutton();
	eingabe_z2->setText("2");
	QPushButton *eingabe_z3 = new QPushbutton();
	eingabe_z3->setText("3");
	QPushButton *eingabe_z4 = new QPushbutton();
	eingabe_z4->setText("4");
	QPushButton *eingabe_z5 = new QPushbutton();
	eingabe_z5->setText("5");
	QPushButton *eingabe_z6 = new QPushbutton();
	eingabe_z6->setText("6");
	QPushButton *eingabe_z7 = new QPushbutton();
	eingabe_z7->setText("7");
	QPushButton *eingabe_z8 = new QPushbutton();
	eingabe_z8->setText("8");
	QPushButton *eingabe_z9 = new QPushbutton();
	eingabe_z9->setText("9");
	QPushButton *eingabe_komma = new QPushbutton();
        eingabe_z9->setText(",");
	QPushButton *eingabe_del = new QPushbutton();
	eingabe_del->setText("DEL");
	QPushButton *eingabe_mal = new QPushbutton();
	eingabe_mal->setText("x");
	QPushButton *eingabe_geteilt = new QPushbutton();
	eingabe_geteilt->setText("/");
	QPushButton *eingabe_plus = new QPushbutton();
	eingabe_plus->setText("+");
	QPushButton *eingabe_minus = new QPushbutton();
	eingabe_minus->setText("-");
	QPushButton *eingabe_gleich = new QPushbutton();
	eingabe_gleich->setText("=");
	QPushButton *eingabe_allclear = new QPushbutton();
        eingabe_gleich->setText("AC");

	QLineEdit *anzeige = new QLineEdit();  //Eingaben- und Ergebnisanzeige erstellen
	anzeige->setReadOnly(true);
	anzeige->setAlignment(Qt::AlignHCenter);

	QGridLayout *anordnung = new QGridLayout();  //Anordnung der Buttons erstellen
	anordnung->addWidget(anzeige,0,0,-1,1);
	anordnung->addWidget(eingabe_z0,5,2,1,1);
	anordnung->addWidget(eingabe_z1,4,1,1,1);
	anordnung->addWidget(eingabe_z2,4,2,1,1);
	anordnung->addWidget(eingabe_z3,4,3,1,1);
	anordnung->addWidget(eingabe_z4,3,1,1,1);
	anordnung->addWidget(eingabe_z5,3,2,1,1);
	anordnung->addWidget(eingabe_z6,3,3,1,1);
	anordnung->addWidget(eingabe_z7,2,1,1,1);
	anordnung->addWidget(eingabe_z8,2,2,1,1);
	anordnung->addWidget(eingabe_z9,2,3,1,1);
	anordnung->addWidget(eingabe_komma,1,3,1,1);
	anordnung->addWidget(eingabe_del,6,4,1,1);
	anordnung->addWidget(eingabe_mal,2,4,1,1);
	anordnung->addWidget(eingabe_geteilt,1,4,1,1);
	anordnung->addWidget(eingabe_plus,4,4,1,1);
	anordnung->addWidget(eingabe_minus,3,4,1,1);
	anordnung->addWidget(eingabe_gleich,5,4,1,1);
	anordnung->addWidget(eingabe_allclear,6,3,1,1);

	setLayout(anordnung);  //Anordnung übernehmen

	QObject::conncet(eingabe_z0; &QPushButton::clicked, this, &MainWindow::z0_angeklickt);  //Funktionen mit Buttons verknüpft
	QObject::conncet(eingabe_z1; &QPushButton::clicked, this, &MainWindow::z1_angeklickt);
	QObject::conncet(eingabe_z2; &QPushButton::clicked, this, &MainWindow::z2_angeklickt);
	QObject::conncet(eingabe_z3; &QPushButton::clicked, this, &MainWindow::z3_angeklickt);
	QObject::conncet(eingabe_z4; &QPushButton::clicked, this, &MainWindow::z4_angeklickt);
	QObject::conncet(eingabe_z5; &QPushButton::clicked, this, &MainWindow::z5_angeklickt);
	QObject::conncet(eingabe_z6; &QPushButton::clicked, this, &MainWindow::z6_angeklickt);
	QObject::conncet(eingabe_z7; &QPushButton::clicked, this, &MainWindow::z7_angeklickt);
	QObject::conncet(eingabe_z8; &QPushButton::clicked, this, &MainWindow::z8_angeklickt);
	QObject::conncet(eingabe_z9; &QPushButton::clicked, this, &MainWindow::z9_angeklickt);
	QObject::conncet(eingabe_komma; &QPushButton::clicked, this, &MainWindow::komma_angeklickt);
	QObject::conncet(eingabe_del; &QPushButton::clicked, this, &MainWindow::del_angeklickt);
	QObject::conncet(eingabe_mal; &QPushButton::clicked, this, &MainWindow::mal_angeklickt);
	QObject::conncet(eingabe_geteilt; &QPushButton::clicked, this, &MainWindow::geteilt_angeklickt);
	QObject::conncet(eingabe_plus; &QPushButton::clicked, this, &MainWindow::plus_angeklickt);
	QObject::conncet(eingabe_minus; &QPushButton::clicked, this, &MainWindow::minus_angeklickt);
	QObject::conncet(eingabe_gleich; &QPushButton::clicked, this, &MainWindow::gleich_angeklickt);
	QObject::conncet(eingabe_allclear; &QPushButton::clicked, this, &MainWindow::allclear_angeklickt);
}

void MainWindow::z0_angeklickt()  //Funktionen der Buttons beschreiben
{
	anzeige->insert("0");
}

void MainWindow::z1_angeklickt()
{
        anzeige->insert("1");
}

void MainWindow::z2_angeklickt()
{
        anzeige->insert("2");
}

void MainWindow::z3_angeklickt()
{
        anzeige->insert("3");
}

void MainWindow::z4_angeklickt()
{
        anzeige->insert("4");
}

void MainWindow::z5_angeklickt()
{
        anzeige->insert("5");
}

void MainWindow::z6_angeklickt()
{
        anzeige->insert("6");
}

void MainWindow::z7_angeklickt()
{
        anzeige->insert("7");
}

void MainWindow::z8_angeklickt()
{
        anzeige->insert("8");
}

void MainWindow::z9_angeklickt()
{
        anzeige->insert("9");
}

void MainWindow::komma_angeklickt()
{
        anzeige->insert(",");
}

void MainWindow::del_angeklickt()
{
        anzeige->backspace();
}

void MainWindow::mal_angeklickt()
{
        operand_1 = strtod(anzeige->displaytext(),NULL);
	operator_ = 'x';
	anzeige->clear();
}

void MainWindow::geteilt_angeklickt()
{
        operand_1 = strtod(anzeige->displaytext(),NULL);
        operator_ = '/';
        anzeige->clear();
}

void MainWindow::plus_angeklickt()
{
        operand_1 = strtod(anzeige->displaytext(),NULL);
        operator_ = '+';
        anzeige->clear();
}

void MainWindow::minus_angeklickt()
{
        operand_1 = strtod(anzeige->displaytext(),NULL);
        operator_ = '-';
        anzeige->clear();
}

void MainWindows::allclear_angeklickt()
{
	operand_1 = 0;
	operand_2 = 0;
	ergebnis = 0;
	anzeige->clear();
}

void MainWindow::gleich_angeklickt()
{
        operand_2 = strtod(anzeige->displaytext(),NULL);
	switch(operator_)
	{
		case x:
			ergebnis = operand_1*operand_2;
			break;
		case /:
			ergebnis = operand_1/operand_2;
			break;
		case +:
			ergebnis = operand_1+operand_2;
			break
		case -: 
			ergebnis = operand_1-operand_2;
			break;
	}
       anzeige->setText(ergebnis); 
}


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow *window = new MainWindow();
	window->show();

	return app.exec();
}
