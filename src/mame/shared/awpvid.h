// license:BSD-3-Clause
// copyright-holders:James Wallace
/*************************************************************************************

    AWP Hardware video simulation system

*************************************************************************************/
#ifndef MAME_SHARED_AWPVID_H
#define MAME_SHARED_AWPVID_H

#pragma once

#include "machine/steppers.h"

void awp_draw_reel(running_machine &machine, const char *reeltag, stepper_device &reel);

#endif
