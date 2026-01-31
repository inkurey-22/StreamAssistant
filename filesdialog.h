#ifndef FILESDIALOG_H
#define FILESDIALOG_H

#include <QDialog>
#include <QFile>
#include <QLineEdit>
#include <QMap>

#define dirAmount 12

namespace Ui {
    class FilesDialog;
}

class FilesDialog : public QDialog {
    Q_OBJECT

  signals:
    void allDone();

  public:
    explicit FilesDialog(QWidget* parent = nullptr, QMap<QString, QString>* directoryFor = nullptr, QString* directories = nullptr);
    ~FilesDialog();

  private slots:
    void onAlphaTeamDirectoryHelpClicked();
    void onBravoTeamDirectoryHelpClicked();
    void onLogosDirectoryHelpClicked();
    void onMapsDirectoryHelpClicked();
    void onModeIconsDirectoryHelpClicked();
    void onSplatfestColorsDirectoryHelpClicked();
    void onTurfWarColorsDirectoryHelpClicked();
    void onRankedColorsDirectoryHelpClicked();
    void onImportingFilesDirectoryHelpClicked();
    void onDefaultDirectoryHelpClicked();
    void onWinPointsDirectoryHelpClicked();
    void onWeaponsDirectoryHelpClicked();
    void onAlphaTeamDirectoryFindClicked();
    void onBravoTeamDirectoryFindClicked();
    void onLogosDirectoryFindClicked();
    void onMapsDirectoryFindClicked();
    void onModeIconsDirectoryFindClicked();
    void onSplatfestColorsDirectoryFindClicked();
    void onTurfWarColorsDirectoryFindClicked();
    void onRankedColorsDirectoryFindClicked();
    void onImportingFilesDirectoryFindClicked();
    void onDefaultDirectoryFindClicked();
    void onWinPointsDirectoryFindClicked();
    void onWeaponsDirectoryFindClicked();
    void onDirectoriesDialogButtonBox_accepted();

  private:
    Ui::FilesDialog*        ui;
    QMap<QString, QString>* directoryFor;
    QLineEdit*              fields[dirAmount];
    QString                 directories[dirAmount];
    int                     saveConfigDirectory(QString, QLineEdit*);
    void                    directoriesInit(QString*);
    void                    makeDefaultDir(QLineEdit* field, QString configFile, QString configDir);
};

#endif // FILESDIALOG_H
