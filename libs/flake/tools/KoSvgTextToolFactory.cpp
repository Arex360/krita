/* This file is part of the KDE project

   Copyright 2017 Boudewijn Rempt <boud@valdyas.org>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#include "KoSvgTextToolFactory.h"

#include "KoSvgTextShape.h"
#include "KoSvgTextTool.h"

#include <KoIcon.h>
#include <klocalizedstring.h>

KoSvgTextToolFactory::KoSvgTextToolFactory()
    : KoToolFactoryBase("SvgTextTool")
{
    setToolTip(i18n("SVG Text Tool"));
    setIconName(koIconNameCStrNeededWithSubs("a generic SvgText image icon", "x-shape-svgtextimage", "application-x-wmf"));
    setSection(dynamicToolType());
    setPriority(2);
    setActivationShapeId(KoSvgTextShape_SHAPEID);
}

KoSvgTextToolFactory::~KoSvgTextToolFactory()
{
}

KoToolBase *KoSvgTextToolFactory::createTool(KoCanvasBase *canvas)
{
    return new KoSvgTextTool(canvas);
}

