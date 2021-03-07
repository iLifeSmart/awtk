﻿/**
 * File:   fill_image_argb8888.c
 * Author: AWTK Develop Team
 * Brief:  fill on argb8888
 *
 * Copyright (c) 2018 - 2021  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-10-10 Generated by gen.sh(DONT MODIFY IT)
 *
 */
#include "tkc/rect.h"
#include "base/pixel.h"
#include "base/bitmap.h"
#include "base/pixel_pack_unpack.h"

#define pixel_dst_t pixel_argb8888_t
#define pixel_dst_format pixel_argb8888_format
#define pixel_dst_to_rgba pixel_argb8888_to_rgba
#define pixel_dst_from_rgb pixel_argb8888_from_rgb
#define pixel_dst_from_rgba pixel_argb8888_from_rgba

#define pixel_t pixel_dst_t
#define pixel_from_rgb pixel_dst_from_rgb
#define pixel_from_rgba pixel_dst_from_rgba
#define pixel_to_rgba pixel_dst_to_rgba

#define pixel_blend_rgba_dark pixel_argb8888_blend_rgba_dark
#define pixel_blend_rgba_premulti pixel_argb8888_blend_rgba_premulti

#include "pixel_ops.inc"
#include "fill_image.inc"

ret_t fill_argb8888_rect(bitmap_t* fb, const rect_t* dst, color_t c) {
  return fill_image(fb, dst, c);
}

ret_t clear_argb8888_rect(bitmap_t* fb, const rect_t* dst, color_t c) {
  return clear_image(fb, dst, c);
}
