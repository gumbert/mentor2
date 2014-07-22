#include <QApplication>
#include "../gui/mainwindow.h"
#include "../tasks/tasktree.h"
#include "../utils/utils.h"
#include <QTextCodec>
#include "../utils/txttobmp.h"
#include "../quiz/file/xmlquizfile.h"
#include "../quiz/quiz.h"
#include <QDebug>

int main(int argc, char *argv[])
{
	//QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	//QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	QApplication a(argc, argv);

    TxtToBmp::instance()->setFont(QFont("Times New Roman", 12, QFont::Normal));
	MainWindow w;
	w.show();


	return a.exec();
}

