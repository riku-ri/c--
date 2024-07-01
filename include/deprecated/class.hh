#ifndef __CLASS_HH_INCLUDE_UNIQ__
#define __CLASS_HH_INCLUDE_UNIQ__

#include "class.hh"

class virtual_t {
	virtual_t() = delete;
	virtual ~virtual_t() = delete;
};

class prechk_t {
	virtual void prechk() = 0;
};

#endif
