/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* libmspub
 * Version: MPL 1.1 / GPLv2+ / LGPLv2+
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License or as specified alternatively below. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * Major Contributor(s):
 * Copyright (C) 2012 Brennan Vincent <brennanv@email.arizona.edu>
 *
 * All Rights Reserved.
 *
 * For minor contributions see the git repository.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPLv2+"), or
 * the GNU Lesser General Public License Version 2 or later (the "LGPLv2+"),
 * in which case the provisions of the GPLv2+ or the LGPLv2+ are applicable
 * instead of those above.
 */

#ifndef __FILLTYPE_H__
#define __FILLTYPE_H__

namespace libmspub
{
enum FillType
{
  SOLID,
  GRADIENT = 0x07,       // msofillShadeScale Similar to msofillShade, but the fillAngle
                         // is additionally scaled by the aspect ratio of
                         // the shape. If shape is square, it is the
                         // same as msofillShade
  GRADIENTCENTER = 0x06, // msofillShadeShape  Shade from shape outline to end point
  GRADIENTSHAPE = 0x05,  // msofillShadeCenter Shade from bounding rectangle to end point
  GRADIENTNORMAL = 0x04, // msofillShade       Shade from start to end points
  BITMAP = 0x03,
  TEXTURE = 0x02,
  PATTERN = 0x01
};
} // libmspub
#endif /* __FILLTYPE_H__ */
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
