#ifndef CELLSPREAD_H
#define CELLSPREAD_H

#include <GeneralStructures.h>

class CellSpread
{
public:
	static size_t NumCells(unsigned int nSpread) {
		return reinterpret_cast<size_t*>(0x7ED3D0)[nSpread];
	}

	static const CellStruct& GetCell(size_t n) {
		return reinterpret_cast<const CellStruct*>(0xABD490)[n];
	}

	static const CellStruct& GetNeighbourOffset(size_t direction) {
		if(direction > 7) {
			return CellStruct::Empty;
		}
		return reinterpret_cast<const CellStruct*>(0x89F688)[direction];
	}
};

#endif
