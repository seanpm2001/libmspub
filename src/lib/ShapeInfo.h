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
#ifndef __SHAPEINFO_H__
#define __SHAPEINFO_H__
#include <boost/optional.hpp>
#include <boost/shared_ptr.hpp>
#include <map>
#include <vector>
#include "ShapeType.h"
#include "Coordinate.h"
#include "Line.h"
#include "Margins.h"
#include "MSPUBTypes.h"
#include "Fill.h"
namespace libmspub
{
struct ShapeInfo
{
  boost::optional<ShapeType> m_type;
  boost::optional<unsigned> m_imgIndex;
  boost::optional<Coordinate> m_coordinates;
  std::vector<Line> m_lines;
  boost::optional<unsigned> m_pageSeqNum;
  boost::optional<std::pair<unsigned, unsigned> > m_textInfo;
  std::map<unsigned, int> m_adjustValuesByIndex;
  std::vector<int> m_adjustValues;
  boost::optional<double> m_rotation;
  boost::optional<std::pair<bool, bool> > m_flips;
  boost::optional<Margins> m_margins;
  boost::optional<BorderPosition> m_borderPosition; // Irrelevant except for rectangular shapes
  boost::shared_ptr<const Fill> m_fill;
  ShapeInfo() : m_type(), m_imgIndex(), m_coordinates(), m_lines(), m_pageSeqNum(),
    m_textInfo(), m_adjustValuesByIndex(), m_adjustValues(),
    m_rotation(), m_flips(), m_margins(), m_borderPosition(),
    m_fill()
  {
  }
};
}
#endif
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */