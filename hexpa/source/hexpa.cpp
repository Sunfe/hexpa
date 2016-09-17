#include "hexpa.h"

Parzer::Parzer(QWidget *parent, Qt::WFlags flags) : QDialog(parent)
{
    setupUi(this);

    qint16 width  = geometry().width();
    qint16 height = geometry().height();
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
        result += QString(QChar(ch.toAscii()));
    }

    targetPlainTextEdit->setPlainText(result);
    return;
}

