
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/

#ifndef UIB_VIEW_MANAGER_H_
#define UIB_VIEW_MANAGER_H_

#include "g_inc_uib.h"

typedef struct {
	bool _is_init;
	int (*add_view_context)(uib_view_context*);
	uib_view_context* (*find_view_context)(char*);
	void (*free_all_view_context)();
} uib_view_manager_st;

uib_view_manager_st* uib_view_manager_get_instance();

#endif /* UIB_VIEW_MANAGER_H_ */

