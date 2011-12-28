/** \file
 *  Game Develop
 *  2008-2011 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef WINDOWEXTENSION_H
#define WINDOWEXTENSION_H

#include "GDL/ExtensionBase.h"
class ArbitraryResourceWorker;

/**
 * \brief Internal built-in extension providing windows features.
 */
class WindowExtension : public ExtensionBase
{
    public:
        WindowExtension();
        virtual ~WindowExtension() {};

        #if defined(GD_IDE_ONLY)
        virtual void ExposeActionsResources(Instruction & action, ArbitraryResourceWorker & worker);
        #endif
};

#endif // WINDOWEXTENSION_H
