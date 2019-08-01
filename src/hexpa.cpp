#include "hexpa.h"

Parzer::Parzer(QWidget *parent, Qt::WindowFlags flags) : QDialog(parent, flags)
{
    setupUi(this);

    int width  = geometry().width();
    int height = geometry().height();
    setFixedSize(width,height);
    srcPlainTextEdit->setFocus();

    connect(srcPlainTextEdit, SIGNAL(textChanged()), this, SLOT(ParzeMagic())); 
}

Parzer::~Parzer()
{

}

void Parzer::ParzeMagic()
{
    QString text = srcPlainTextEdit->toPlainText().replace(QRegExp("\"|\'|\\s"),"\\x");
    QStringList hexList = text.split("\\x", QString::SkipEmptyParts);

    QString result;
    bool ok;
    for(qint32 n = 0; n < hexList.count(); n++)
    {
        int num = hexList.at(n).toInt(&ok, 16);
        if(!ok)
            continue;

        QChar ch(num); 
        result += QString(ch.unicode());
    }

    targetPlainTextEdit->setPlainText(result);
    return;
}

