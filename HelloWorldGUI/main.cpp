#include <QApplication>
#include <QDialog>
#include <QDebug>

int main ( int argc, char **argv ) {
	
	QApplication theApp ( argc, argv );

	QDialog dlg;
	dlg.show();

 	return theApp.exec();	
}
