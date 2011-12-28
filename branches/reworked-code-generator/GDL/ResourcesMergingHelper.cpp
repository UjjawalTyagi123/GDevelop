/** \file
 *  Game Develop
 *  2008-2011 Florian Rival (Florian.Rival@gmail.com)
 */

#if defined(GD_IDE_ONLY)

#include "ResourcesMergingHelper.h"
#include "Game.h"
#include "GDL/ExtensionBase.h"
#include "GDL/ExtensionsManager.h"
#include <wx/filename.h>
#include <string>

void ResourcesMergingHelper::ExposeResource(std::string & resourceFilename)
{
    //Currently, just strip the filename and add the resource, don't take care of resources with same filename.
    if ( resourcesNewFilename.find(resourceFilename) == resourcesNewFilename.end() )
        resourcesNewFilename[resourceFilename] = std::string( wxFileNameFromPath(resourceFilename).mb_str() );

    std::string newResourceFilename = resourcesNewFilename[resourceFilename];
    resourceFilename = newResourceFilename;
}

#endif
