/*****************************************************************************
*                                                                            *
*  PrimeSense Sensor 5.x Alpha                                               *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of PrimeSense Sensor                                    *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
#ifndef _XNV_3DGEOMETRY_H_
#define _XNV_3DGEOMETRY_H_

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include "XnVVirtualObject.h"
#include "XnV3DVector.h"

//---------------------------------------------------------------------------
// Types
//---------------------------------------------------------------------------

class XN_EE_FW_API XnV3DGeometry : public XnVVirtualObject
{
public:
	virtual ~XnV3DGeometry() {}
	virtual XnBool IsIntersect(const XnV3DVector& pt) const = 0;
};


#endif //_XNV_3DGEOMETRY_H_

