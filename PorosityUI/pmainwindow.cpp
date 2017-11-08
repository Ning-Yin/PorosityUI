#include "pmainwindow.h"
#include <qmenubar.h>
#include <qfiledialog.h>
#include <qapplication.h>
#include <qdesktopwidget.h>
#include <qevent.h>

PMainWindow::PMainWindow(QWidget *parent) :
	QMainWindow(parent) {
	setProperties();
	setMouseTracking(true);

	createActions();
	createMenus();
	createStatus();
}

void PMainWindow::mouseMoveEvent(QMouseEvent * event)
{
	StatusLabel->setText(QString::number(event->x()));
}

void PMainWindow::setProperties()
{
	setFixedSize(1000, 700);
	setWindowState(Qt::WindowMaximized);
	setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);

}

void PMainWindow::createActions() {
	OpenFileAction = new QAction(QString("Open"), this);
	connect(OpenFileAction, SIGNAL(triggered()), this, SLOT(openFile()));

	ExitAction = new QAction(QString("Exit"), this);
	connect(ExitAction, SIGNAL(triggered()), this, SLOT(close()));

	
}

void PMainWindow::createMenus() {
	QMenu *FileMenu = menuBar()->addMenu(QString("File"));
	FileMenu->addAction(OpenFileAction);
	FileMenu->addSeparator();
	FileMenu->addAction(ExitAction);
}

void PMainWindow::createStatus() {
	StatusLabel = new QLabel(QString("s"));
	StatusLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
	StatusLabel->setMinimumSize(StatusLabel->sizeHint());

	statusBar()->addWidget(StatusLabel, 1);
	statusBar()->showMessage(QString("Starting..."), 5000);
}

void PMainWindow::openFile() {
	QString path = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files(*.jpg *.png *.tif)"));
	if (path.length() != 0) {
		
	}
}