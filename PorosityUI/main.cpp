#include <qapplication.h>
#include "pmainwindow.h"
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PMainWindow *mainwindow = new PMainWindow();
	mainwindow->show();
	return a.exec();
}
