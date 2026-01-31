#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QCompleter>
#include "filesdialog.h"
#include "mywidget.h"
#include "qcheckbox.h"
#include "qradiobutton.h"
#include "qspinbox.h"

#define widAmount 67

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    typedef void (MainWindow::*clickedFunction)(void);

  private slots:
    // Team Alpha Section
    void onTeam1NameEditEditingFinished();
    // Round Section
    void onTeam1ScoreTextChanged(const QString& arg1);
    void onTeam2ScoreTextChanged(const QString& arg1);
    void onResetScoresButtonClicked();
    // Team Bravo Section
    // Info Section
    void onTitleEditEditingFinished();
    void onSubtitleEditeditingFinished();
    void onTwitterEditeditingFinished();
    void onMessageEdittextChanged();
    // Casters Section
    void onCaster1NameEditeditingFinished();
    void onCaster2NameEditeditingFinished();
    void onCaster3NameEditeditingFinished();
    void onCaster1TwitterEditeditingFinished();
    void onCaster2TwitterEditeditingFinished();
    void onCaster3TwitterEditeditingFinished();
    void onRoundEditeditingFinished();
    void onTeam2NameEditeditingFinished();
    void onLogoComboActivated(int index);
    void onColorGroupComboActivated(int index);
    void onModeComboGame1Activated(int index);
    void onModeComboGame2Activated(int index);
    void onModeComboGame3Activated(int index);
    void onModeComboGame4Activated(int index);
    void onModeComboGame5Activated(int index);
    void onModeComboGame6Activated(int index);
    void onModeComboGame7Activated(int index);
    void onModeComboGame8Activated(int index);
    void onModeComboGame9Activated(int index);
    void onMapComboGame1EditingFinished();
    void onMapComboGame2EditingFinished();
    void onMapComboGame3EditingFinished();
    void onMapComboGame4EditingFinished();
    void onMapComboGame5EditingFinished();
    void onMapComboGame6EditingFinished();
    void onMapComboGame7EditingFinished();
    void onMapComboGame8EditingFinished();
    void onMapComboGame9EditingFinished();
    void onRadioGame1Clicked();
    void onRadioGame2Clicked();
    void onRadioGame3Clicked();
    void onRadioGame4Clicked();
    void onRadioGame5Clicked();
    void onRadioGame6Clicked();
    void onRadioGame7Clicked();
    void onRadioGame8Clicked();
    void onRadioGame9Clicked();
    void handleWinner(QCheckBox* WinGame, QCheckBox* OpponentWinGame, QSpinBox* score, QSpinBox* opponentScore, QString teamDir, QRadioButton* round, QRadioButton* nextGame,
                      clickedFunction nextGameClicked);
    void onAlphaWinGame1Clicked();
    void onAlphaWinGame2Clicked();
    void onAlphaWinGame3Clicked();
    void onAlphaWinGame4Clicked();
    void onAlphaWinGame5Clicked();
    void onAlphaWinGame6Clicked();
    void onAlphaWinGame7Clicked();
    void onAlphaWinGame8Clicked();
    void onAlphaWinGame9Clicked();
    void onBravoWinGame1Clicked();
    void onBravoWinGame2Clicked();
    void onBravoWinGame3Clicked();
    void onBravoWinGame4Clicked();
    void onBravoWinGame5Clicked();
    void onBravoWinGame6Clicked();
    void onBravoWinGame7Clicked();
    void onBravoWinGame8Clicked();
    void onBravoWinGame9Clicked();
    void saveRound(int index);
    void onactionSetDirectoriesTriggered();
    void onactionUpdateOptionsTriggered();
    void onUpdateScoreCheckboxStateChanged(int arg1);
    void onUpdateRoundCheckboxStateChanged(int arg1);
    void onColorsComboActivated(int index);
    void onSwapColorsButtonclicked();
    void onSwapTeamsButtonclicked();
    void onFilesDialogAccepted();
    void updateAlphaWins();
    void updateBravoWins();
    void updateWeapon();
    void updatePlayer();
    void labelClicked();
    void roundLabelHovered();
    void resetFields();

  private:
    Ui::MainWindow*          ui;
    void                     configDirectoriesInit();
    void                     infoSectioninit();
    void                     teamsSectioninit();
    void                     roundSectioninit();
    void                     castersSectioninit();
    void                     setSectioninit();
    void                     colorsInit();
    void                     weaponsSectioninit();
    QMap<QString, MyWidget*> playersSectioninit();
    QMap<QString, MyWidget*> widgetsInit();
    QMap<QString, QLabel*>   weaponsInit();
    QStringList              getListOf(QString dirIndex, bool includeDirs = false);
    void                     writeInFile(QString, QString);
    void                     serialize(const char*, void*, int);
    void                     deserialize(const char*, void*, int);
    void                     scoreAutoUpdate(QSpinBox* teamScore, QCheckBox* teamCheckBox);
    void                     colorAutoUpdate();
    void                     roundAutoUpdate();
    void                     clearFields();
    QStringList              clearOptionalFiles(QStringList, QString);
    QStringList              saveOptionalFiles(QString, QString);
    void                     copyFile(QString, QString);
    void                     updateFileTimestamp(QString);
    QString                  getColorsLocal();
    void                     showSectionsInit();
    void                     updatePlayersFromAlpha();
    void                     updatePlayersFromBravo();
    void                     fillFirstPlayers(QString team);
    QCompleter*              Team1Completer;
    QCompleter*              Team2Completer;
    QCompleter*              MapCompleter;
    QCompleter*              WeaponsCompleter;
    QMap<QString, QString>   directoryFor;
    QMap<QString, MyWidget*> widgetFor;
    QMap<QString, QLabel*>   labelFor;
    QMap<QString, MyWidget*> playerWidgetFor;
    QString                  directories[dirAmount];
    bool                     mirrored;
    QStringList              teamAlphaOptionalFiles;
    QStringList              teamBravoOptionalFiles;
};

#endif // MAINWINDOW_H
