/*
 * Copyright (c) 2014, 2016, 2018-2019 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __HIF_DEBUG_H__
#define __HIF_DEBUG_H__
#include "qdf_trace.h"

#define hif_alert_rl(params...)
#define hif_err_rl(params...)
#define hif_warn_rl(params...)
#define hif_info_rl(params...)
#define hif_debug_rl(params...)
#define HIF_ERROR(args ...)
#define HIF_WARN(args ...)
#define HIF_INFO(args ...)
#define HIF_INFO_HI(args ...)
#define HIF_INFO_MED(args ...)
#define HIF_INFO_LO(args ...)
#define HIF_TRACE(args ...)
#define HIF_DBG(args ...)
#define hif_alert(args ...)
#define hif_err(args ...)
#define hif_warn(args ...)
#define hif_info(args ...)
#define hif_debug(args ...)
#define hif_info_high(args ...)
#define hif_nofl_alert(args ...)
#define hif_nofl_err(args ...)
#define hif_nofl_warn(args ...)
#define hif_nofl_info(args ...)
#define hif_nofl_debug(args ...)
#define HIF_ENTER()
#define HIF_EXIT()

#endif /* __HIF_DEBUG_H__ */
