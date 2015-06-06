#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    m_ui(new Ui::MainWindow),
    m_translation("54GzQbyspseUfRUbvDdVMKQW")
{
    m_ui->setupUi(this);

    connect(m_ui->pushButton, SIGNAL(clicked()), this, SLOT(translation()));
}

MainWindow::~MainWindow(void)
{
    delete m_ui;
}

void MainWindow::translation(void)
{
    this->setEnabled(false);

    m_ui->label->clear();

    auto data = m_translation.translation(m_ui->lineEdit->text());

    if(data.first)
    {
        m_ui->label->setText(data.second);
    }
    else
    {
        m_ui->label->setText("Error");
    }

    this->setEnabled(true);
}
