#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include "navette.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    QWidget *m_zoneCentrale;
    QGraphicsView *m_gview;
    QGraphicsScene *m_scene;
    Navette *m_navette;
};

#endif // MAINWINDOW_H
