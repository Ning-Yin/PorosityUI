#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PorosityUI.h"

class PorosityUI : public QMainWindow
{
	Q_OBJECT

public:
	PorosityUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::PorosityUIClass ui;
};
