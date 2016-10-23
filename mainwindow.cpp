#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow (QWidget *parent) :
    QMainWindow (parent)
{
    tb_toolBar = new QToolBar (this);
    sb_statusBar = new QStatusBar (this);

    te_message = new QTextEdit ();
    le_sendMsg = new QLineEdit ();
    c_sequence = new QComboBox ();
    s_sendAck = new QRadioButton (tr("Send auto ACK"));
    pb_sendMsg = new QPushButton (tr("Send msg"));
    w_centralWidget = new QWidget(this);
    lay_main = new QGridLayout (w_centralWidget);

    this->init ();

    w_centralWidget->setLayout (this->lay_main);
    this->setCentralWidget (this->w_centralWidget);
}

void MainWindow::init ()
{
    this->setWindowTitle (tr("Dev Tool"));
    statusBar ()->showMessage (tr("Set Bluetooth® interface in preference"));

    this->tb_toolBar->addAction (QIcon (":/icons/settings"), "settings", this, SLOT (settings()));
    this->tb_toolBar->addAction (QIcon (":/icons/save"), "save", this, SLOT (save ()));
    this->tb_toolBar->addAction (QIcon (":/icons/reload"), "reload", this, SLOT (reload ()));
    this->tb_toolBar->addAction (QIcon (":/icons/start"), "start", this, SLOT (start()));
    this->tb_toolBar->addAction (QIcon (":/icons/stop"), "stop", this, SLOT (stop ()));
    this->tb_toolBar->addAction (QIcon (":/icon/about"), "about", this, SLOT (about ()));
    this->addToolBar (this->tb_toolBar);

    this->te_message->setText (tr("Welcome in Rail Dev Tool.\nMessages will appear here:\n"));
    this->le_sendMsg->setText (tr("Write you're message here..."));
    this->te_message->setReadOnly (true);

    this->lay_main->addWidget (this->c_sequence, 0, 0);
    this->lay_main->addWidget (this->le_sendMsg, 1, 0);
    this->lay_main->addWidget (this->pb_sendMsg, 0, 1, 2, 1);
    this->lay_main->addWidget (this->te_message, 2, 0, 1, 2);
    this->lay_main->addWidget (this->s_sendAck, 3, 0, 1, 2);
}

void MainWindow::settings ()
{
    // TODO
}

void MainWindow::save ()
{
    std::ofstream fos (QFileDialog::getOpenFileName (this, tr("Select a file"), QDir::homePath (), tr("Text (*.txt)")).toStdString (), std::ios::out | std::ios::app);
    if (fos)
    {
        fos << (te_message->toPlainText ().toStdString ());
        fos.close ();
    }
    else
    {
        qDebug() << "File open error...";
    }
}

void MainWindow::about ()
{
    // TODO
}

void MainWindow::reload ()
{
    this->te_message->setText ("");
}

void MainWindow::start ()
{
    // TODO
}

void MainWindow::stop ()
{
    // TODO
}

MainWindow::~MainWindow ()
{
}
