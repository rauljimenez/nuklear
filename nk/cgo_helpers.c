// THE AUTOGENERATED LICENSE. ALL THE RIGHTS ARE RESERVED BY ROBOTS.

// WARNING: This file has automatically been generated on Fri, 23 Sep 2016 00:04:46 MSK.
// By https://git.io/cgogen. DO NOT EDIT.

#include "_cgo_export.h"
#include "cgo_helpers.h"

void* nk_plugin_alloc_88237ac9(nk_handle arg0, void* old, unsigned long int arg2) {
	return pluginAlloc88237AC9(arg0, old, arg2);
}

void nk_plugin_free_9e32bb09(nk_handle arg0, void* old) {
	pluginFree9E32BB09(arg0, old);
}

int nk_plugin_filter_1df5f22c(struct nk_text_edit* arg0, unsigned int unicode) {
	return pluginFilter1DF5F22C(arg0, unicode);
}

void nk_plugin_paste_70e696c4(nk_handle arg0, struct nk_text_edit* arg1) {
	pluginPaste70E696C4(arg0, arg1);
}

void nk_plugin_copy_9ea6c143(nk_handle arg0, char* arg1, int len) {
	pluginCopy9EA6C143(arg0, arg1, len);
}

float nk_text_width_f_67477c0(nk_handle arg0, float h, char* arg2, int len) {
	return textWidthF67477C0(arg0, h, arg2, len);
}

void nk_query_font_glyph_f_5ba87240(nk_handle handle, float font_height, struct nk_user_font_glyph* glyph, unsigned int codepoint, unsigned int next_codepoint) {
	queryFontGlyphF5BA87240(handle, font_height, glyph, codepoint, next_codepoint);
}
