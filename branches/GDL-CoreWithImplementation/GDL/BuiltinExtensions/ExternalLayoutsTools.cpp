#include "ExternalLayoutsTools.h"
#include "GDL/RuntimeScene.h"
#include "GDL/Project.h"
#include "GDL/ExternalLayout.h"

namespace ExternalLayoutsTools
{

void GD_API CreateObjectsFromExternalLayout(RuntimeScene & scene, const std::string & externalLayoutName, float xOffset, float yOffset)
{
    for (unsigned int i = 0;i<scene.game->GetExternalLayoutsCount();++i)
    {
        if ( scene.game->GetExternalLayout(i).GetName() == externalLayoutName )
            scene.CreateObjectsFrom(scene.game->GetExternalLayout(i).GetInitialInstances(), xOffset, yOffset);
    }
}

}

