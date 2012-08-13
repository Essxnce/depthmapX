/********************************************************************************
** Form generated from reading UI file 'ColourScaleDlg.ui'
**
** Created: Fri 13. Jul 09:56:32 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOURSCALEDLG_H
#define UI_COLOURSCALEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CColourScaleDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *c_color_type;
    QSlider *c_blue_slider_ctrl;
    QHBoxLayout *horizontalLayout;
    QLabel *c_blue;
    QLineEdit *c_blue_value_window;
    QSlider *c_red_slider_ctrl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *c_red;
    QLineEdit *c_red_value_window;
    QVBoxLayout *verticalLayout;
    QCheckBox *c_show_lines;
    QCheckBox *c_show_centroids;
    QCheckBox *c_show_fill;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *c_ok;
    QPushButton *c_applytoall;
    QPushButton *c_cancel;

    void setupUi(QDialog *CColourScaleDlg)
    {
        if (CColourScaleDlg->objectName().isEmpty())
            CColourScaleDlg->setObjectName(QString::fromUtf8("CColourScaleDlg"));
        CColourScaleDlg->resize(347, 376);
        verticalLayout_2 = new QVBoxLayout(CColourScaleDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        c_color_type = new QComboBox(CColourScaleDlg);
        c_color_type->setObjectName(QString::fromUtf8("c_color_type"));
        c_color_type->setEnabled(false);

        verticalLayout_2->addWidget(c_color_type);

        c_blue_slider_ctrl = new QSlider(CColourScaleDlg);
        c_blue_slider_ctrl->setObjectName(QString::fromUtf8("c_blue_slider_ctrl"));
        c_blue_slider_ctrl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(c_blue_slider_ctrl);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        c_blue = new QLabel(CColourScaleDlg);
        c_blue->setObjectName(QString::fromUtf8("c_blue"));

        horizontalLayout->addWidget(c_blue);

        c_blue_value_window = new QLineEdit(CColourScaleDlg);
        c_blue_value_window->setObjectName(QString::fromUtf8("c_blue_value_window"));
        c_blue_value_window->setEnabled(false);

        horizontalLayout->addWidget(c_blue_value_window);


        verticalLayout_2->addLayout(horizontalLayout);

        c_red_slider_ctrl = new QSlider(CColourScaleDlg);
        c_red_slider_ctrl->setObjectName(QString::fromUtf8("c_red_slider_ctrl"));
        c_red_slider_ctrl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(c_red_slider_ctrl);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        c_red = new QLabel(CColourScaleDlg);
        c_red->setObjectName(QString::fromUtf8("c_red"));

        horizontalLayout_2->addWidget(c_red);

        c_red_value_window = new QLineEdit(CColourScaleDlg);
        c_red_value_window->setObjectName(QString::fromUtf8("c_red_value_window"));
        c_red_value_window->setEnabled(false);

        horizontalLayout_2->addWidget(c_red_value_window);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        c_show_lines = new QCheckBox(CColourScaleDlg);
        c_show_lines->setObjectName(QString::fromUtf8("c_show_lines"));

        verticalLayout->addWidget(c_show_lines);

        c_show_centroids = new QCheckBox(CColourScaleDlg);
        c_show_centroids->setObjectName(QString::fromUtf8("c_show_centroids"));

        verticalLayout->addWidget(c_show_centroids);

        c_show_fill = new QCheckBox(CColourScaleDlg);
        c_show_fill->setObjectName(QString::fromUtf8("c_show_fill"));

        verticalLayout->addWidget(c_show_fill);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        c_ok = new QPushButton(CColourScaleDlg);
        c_ok->setObjectName(QString::fromUtf8("c_ok"));

        horizontalLayout_3->addWidget(c_ok);

        c_applytoall = new QPushButton(CColourScaleDlg);
        c_applytoall->setObjectName(QString::fromUtf8("c_applytoall"));

        horizontalLayout_3->addWidget(c_applytoall);

        c_cancel = new QPushButton(CColourScaleDlg);
        c_cancel->setObjectName(QString::fromUtf8("c_cancel"));

        horizontalLayout_3->addWidget(c_cancel);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(CColourScaleDlg);
        QObject::connect(c_blue_value_window, SIGNAL(textChanged(QString)), CColourScaleDlg, SLOT(OnChangeBlueValue()));
        QObject::connect(c_red_value_window, SIGNAL(textChanged(QString)), CColourScaleDlg, SLOT(OnChangeRedValue()));
        QObject::connect(c_red_slider_ctrl, SIGNAL(sliderMoved(int)), CColourScaleDlg, SLOT(OnReleasedRedSlider(int)));
        QObject::connect(c_blue_slider_ctrl, SIGNAL(sliderMoved(int)), CColourScaleDlg, SLOT(OnReleasedBlueSlider(int)));
        QObject::connect(c_color_type, SIGNAL(currentIndexChanged(int)), CColourScaleDlg, SLOT(OnSelchangeColor(int)));
        QObject::connect(c_show_lines, SIGNAL(clicked(bool)), CColourScaleDlg, SLOT(OnBnClickedShowLines(bool)));
        QObject::connect(c_show_fill, SIGNAL(clicked(bool)), CColourScaleDlg, SLOT(OnBnClickedShowFill(bool)));
        QObject::connect(c_show_centroids, SIGNAL(clicked(bool)), CColourScaleDlg, SLOT(OnBnClickedShowCentroids(bool)));
        QObject::connect(c_applytoall, SIGNAL(clicked()), CColourScaleDlg, SLOT(OnBnClickedApplytoall()));
        QObject::connect(c_ok, SIGNAL(clicked()), CColourScaleDlg, SLOT(OnOK()));
        QObject::connect(c_cancel, SIGNAL(clicked()), CColourScaleDlg, SLOT(OnCancel()));

        QMetaObject::connectSlotsByName(CColourScaleDlg);
    } // setupUi

    void retranslateUi(QDialog *CColourScaleDlg)
    {
        CColourScaleDlg->setWindowTitle(QApplication::translate("CColourScaleDlg", " depthmapX - Set Colour Scale", 0, QApplication::UnicodeUTF8));
        c_blue->setText(QApplication::translate("CColourScaleDlg", "Blue", 0, QApplication::UnicodeUTF8));
        c_red->setText(QApplication::translate("CColourScaleDlg", "Red", 0, QApplication::UnicodeUTF8));
        c_show_lines->setText(QApplication::translate("CColourScaleDlg", "Show polygon edges", 0, QApplication::UnicodeUTF8));
        c_show_centroids->setText(QApplication::translate("CColourScaleDlg", "Show polygon centroids", 0, QApplication::UnicodeUTF8));
        c_show_fill->setText(QApplication::translate("CColourScaleDlg", "Show polygons filled", 0, QApplication::UnicodeUTF8));
        c_ok->setText(QApplication::translate("CColourScaleDlg", "Apply", 0, QApplication::UnicodeUTF8));
        c_applytoall->setText(QApplication::translate("CColourScaleDlg", "Apply to All", 0, QApplication::UnicodeUTF8));
        c_cancel->setText(QApplication::translate("CColourScaleDlg", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CColourScaleDlg: public Ui_CColourScaleDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOURSCALEDLG_H
