#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ItemTest.h"

class ItemTest : public QMainWindow
{
	Q_OBJECT

public:
	ItemTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::ItemTestClass ui;
};
