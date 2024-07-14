#include "GUI.h"
#include <QPushButton>
#include <QVBoxLayout>

GUI::GUI(QWidget* parent) : QWidget(parent) {
    QVBoxLayout* layout = new QVBoxLayout(this);

    QPushButton* addBookButton = new QPushButton("Add Book", this);
    QPushButton* viewBooksButton = new QPushButton("View Books", this);

    layout->addWidget(addBookButton);
    layout->addWidget(viewBooksButton);

    connect(addBookButton, &QPushButton::clicked, this, &GUI::addBook);
    connect(viewBooksButton, &QPushButton::clicked, this, &GUI::viewBooks);
}

void GUI::addBook() {
    // Implement add book functionality
}

void GUI::viewBooks() {
    // Implement view books functionality
}
