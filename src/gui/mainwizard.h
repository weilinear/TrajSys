#ifndef MAINWIZARD_H
#define MAINWIZARD_H

#include <QtGui>

#include "modespage.h"
#include "sourcespage.h"
#include "trackerspage.h"
#include "appspage.h"

class MainWizard : public QWizard
{
    Q_OBJECT

public:
    explicit MainWizard(QWidget *parent = 0);

    void accept();

    inline void getMode(QString &mode) {
        modesPage->getMode(mode);
    }
    inline void getSources(QStringList &sources) {
        sourcesPage->getSources(sources);
    }
    inline void getTrackers(QStringList &trackersTypes, QStringList &trackersParams) {
        trackersPage->getTrackers(trackersTypes, trackersParams);
    }
    inline void getApps(QStringList &appsTypes, QStringList &appsParams) {
        appsPage->getApps(appsTypes, appsParams);
    }

private:
    ModesPage *modesPage;
    SourcesPage *sourcesPage;
    TrackersPage *trackersPage;
    AppsPage *appsPage;
};

#endif // MAINWIZARD_H