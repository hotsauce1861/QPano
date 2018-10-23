#include "QPano3.h"
#include "qpano3mainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPano3 w;
	QPano3MainWindow w2;
	QFile f(":/QPano3/Resources/qss/GB.qss");
	QString qss = "";
	if (f.open(QFile::ReadOnly))
	{
		qss = QLatin1String(f.readAll());
		f.close();		
		qApp->setStyleSheet(qss);
	}	
	w2.show();
//	w.show();
	return a.exec();
}
