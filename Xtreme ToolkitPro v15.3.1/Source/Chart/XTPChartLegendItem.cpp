// XTPChartLegendItem.cpp
//
// This file is a part of the XTREME TOOLKIT PRO MFC class library.
// (c)1998-2012 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include <Chart/Types/XTPChartTypes.h>
#include <Chart/XTPChartDefines.h>
#include <Chart/XTPChartElement.h>
#include <Chart/XTPChartLegendItem.h>

CXTPChartLegendItem::CXTPChartLegendItem()
	: m_nLineThickness(UseDefaultLineThickness)
{
}

void CXTPChartLegendItem::SetLineThickness(int nLineThickness)
{
	m_nLineThickness = nLineThickness;
}

int CXTPChartLegendItem::GetActualLineThickness() const
{
	int nActualLineThickness = 1;

	if (UseDefaultLineThickness != m_nLineThickness)
	{
		nActualLineThickness = m_nLineThickness;
	}

	return nActualLineThickness;
}

