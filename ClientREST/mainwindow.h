#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QNetworkAccessManager;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void getUsers();
    void getUser();
    void newOrUpdateUser();
    void newUser();
    void updateUser();
    void removeUser();

    Ui::MainWindow *ui;
    QNetworkAccessManager *m_nam;
};

#endif // MAINWINDOW_H
