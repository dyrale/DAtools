#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QLabel>
#include <QTreeWidgetItem>

class mainWidget : public QWidget {
    Q_OBJECT
private:
    QVBoxLayout *documentArea;
    QLabel      *activeDocumentLabel;
    QTextEdit   *activeDocument;
public:
    /**
     * @brief std. ctor
     */
    mainWidget(QWidget *parent = 0);
    /**
     * @brief std. dtor
     */
    ~mainWidget() {}
public slots:
    /**
     * @brief This function is used to update the coding-window.
     * @details [long description]
     */
    void        openSelectedDocument(const QString& name);
    void        setCodeinSelection(QTreeWidgetItem* currentItem);
};

#endif // MAIN_WIDGET_H