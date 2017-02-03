#include "modifiedfilesdialog.h"
#include "ui_modifiedfilesdialog.h"

ModifiedFilesDialog::ModifiedFilesDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ModifiedFilesDialog)
{
	ui->setupUi(this);
}

ModifiedFilesDialog::~ModifiedFilesDialog()
{
	delete ui;
}

void ModifiedFilesDialog::on_cancelButton_clicked()
{
	this->result = 0;
	this->close();
}

void ModifiedFilesDialog::on_discardAllButton_2_clicked()
{
	this->result = 1;
	this->close();
}

void ModifiedFilesDialog::on_saveAllButton_clicked()
{
	this->result = 2;
	this->close();
}

int ModifiedFilesDialog::getResult()
{
	return this->result;
}
