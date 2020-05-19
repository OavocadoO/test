#include "ItemTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ItemTest w;
	w.show();
	return a.exec();
}
