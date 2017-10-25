#include "PorosityUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PorosityUI w;
	w.show();
	return a.exec();
}
