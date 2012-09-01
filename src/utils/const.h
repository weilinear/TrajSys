#ifndef CONST_H
#define CONST_H

#include <QString>

/**
  * Define trackers.
  **/

const int NR_TRACKERS = 1;
const QString TRACKERS_TYPES[NR_TRACKERS] =
{
    "KLT"
};
const QString TRACKERS_DEFAULT_PARAMS[NR_TRACKERS] =
{
    "700,26"
};

/**
 * Define apps.
 **/

const int NR_APPS = 1;
const QString APPS_TYPES[NR_APPS] =
{
    "Coherent Filter"
};
const QString APPS_DEFAULT_PARAMS[NR_APPS] =
{
    "10,15,0.6"
};

#endif // CONST_H
