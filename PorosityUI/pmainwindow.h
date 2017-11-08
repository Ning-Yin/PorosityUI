#pragma once

#include <qmainwindow.h>
#include <qaction.h>
#include <qpushbutton.h>
#include <qstatusbar.h>
#include <qgraphicsview.h>
#include <qlabel.h>

class PMainWindow :public QMainWindow {
	Q_OBJECT
private:
	QAction *OpenFileAction;
	QAction *ExitAction;

	QLabel *StatusLabel;

public:
	PMainWindow(QWidget *parent = nullptr);

protected:
	void mouseMoveEvent(QMouseEvent *event) override;

private:
	void setProperties();
	void createActions();
	void createMenus();
	void createStatus();

private slots:
	void openFile();

};