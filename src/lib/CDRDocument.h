/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* libcdr
 * Copyright (C) 2006 Ariya Hidayat (ariya@kde.org)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02111-1301 USA
 *
 * For further information visit http://libcdr.sourceforge.net
 */

/* "This product is not manufactured, approved, or supported by
 * Corel Corporation or Corel Corporation Limited."
 */

#ifndef __CDRRAPHICS_H__
#define __CDRRAPHICS_H__

#include <libwpd/libwpd.h>
#include <libwpg/libwpg.h>

class WPXInputStream;

namespace libcdr
{
class CDRDocument
{
public:

	static bool isSupported(WPXInputStream *input);

	static bool parse(WPXInputStream *input, libwpg::WPGPaintInterface *painter);
	static bool parse(const unsigned char *data, unsigned long size, libwpg::WPGPaintInterface *painter);

	static bool generateSVG(WPXInputStream *input, WPXString &output);
	static bool generateSVG(const unsigned char *data, unsigned long size, WPXString &output);
};

} // namespace libcdr

#endif //  __CDRRAPHICS_H__
/* vim:set shiftwidth=4 softtabstop=4 noexpandtab: */
