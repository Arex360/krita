/*
 *  Copyright (c) 2003 Boudewijn Rempt (boud@valdyas.org)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef RGB_PLUGIN_H_
#define RGB_PLUGIN_H_

#include <kparts/plugin.h>

#include "kis_types.h"


/**
 * A plugin wrapper around the RGB colour space strategy.
 */
class RGBPlugin : public KParts::Plugin
{
	Q_OBJECT
public:
	RGBPlugin(QObject *parent, const char *name, const QStringList &);
	virtual ~RGBPlugin();
	
private:

	KisStrategyColorSpaceSP m_StrategyColorSpaceRGB;
};

#endif // RGB_PLUGIN_H_
