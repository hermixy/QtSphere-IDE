#ifndef QSIPROJECT_H
#define QSIPROJECT_H

#include <QObject>

class QSIProject : public QObject {
	Q_OBJECT
	Q_ENUMS(Compiler)
	public:
		explicit QSIProject(QString path, QObject *parent = nullptr);
		QString getPath(bool projectFile);
		QString name;
		QString author;
		int width;
		int height;
		int apiLevel;
		int version;
		QString saveID;
		QString summary;
		QString buildDir;
		QString script;
		QIcon* getIcon();
		QString getCompiler();
		void setCompiler(QString set);
		enum Compiler { Vanilla, Cell };
	signals:

	public slots:

	private:
		QString path;
		QString projectPath;
		QString compler;
};

#endif // QSIPROJECT_H
