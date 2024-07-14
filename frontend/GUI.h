#ifndef GUI_H
#define GUI_H

#include <QWidget>

class GUI : public QWidget {
    Q_OBJECT

public:
    GUI(QWidget* parent = nullptr);

private slots:
    void addBook();
    void viewBooks();
};

#endif
