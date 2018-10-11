#include "QPano3.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPano3 w;
	w.show();
	return a.exec();
}
