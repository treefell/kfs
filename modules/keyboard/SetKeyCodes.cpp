#include "keyboard.h"

struct kb_key_info	sc_to_kc[256] = {
	[0x00] = KEY_UNKNOWN,

	[0x01] = KEY_SPECIAL("<Esc>"),

	[0x02] = KEY(1, '1'), [0x03] = KEY(2, '2'),
	[0x04] = KEY(3, '3'), [0x05] = KEY(4, '4'),
	[0x06] = KEY(5, '5'), [0x07] = KEY(6, '6'),
	[0x08] = KEY(7, '7'), [0x09] = KEY(8, '8'),
	[0x0a] = KEY(9, '9'), [0x0b] = KEY(0, '0'),
	[0x0c] = KEY(-, '-'), [0x0d] = KEY(=, '='),

	[0x0e] = KEY_SPECIAL("<Backspace>"), [0x0f] = KEY(<Tab>, '\t'),

	[0x10] = KEY(q, 'q'), [0x11] = KEY(w, 'w'),
	[0x12] = KEY(e, 'e'), [0x13] = KEY(r, 'r'),
	[0x14] = KEY(t, 't'), [0x15] = KEY(y, 'y'),
	[0x16] = KEY(u, 'u'), [0x17] = KEY(i, 'i'),
	[0x18] = KEY(o, 'o'), [0x19] = KEY(p, 'p'),
	[0x1a] = {("[", '[')}, [0x1b] = KEY(], ']'),

	[0x1c] = KEY_SPECIAL("<Enter>"), [0x1d] = KEY_SPECIAL("<Control Left>"),

	[0x1e] = KEY(a, 'a'), [0x1f] = KEY(s, 's'),
	[0x20] = KEY(d, 'd'), [0x21] = KEY(f, 'f'),
	[0x22] = KEY(g, 'g'), [0x23] = KEY(h, 'h'),
	[0x24] = KEY(j, 'j'), [0x25] = KEY(k, 'k'),
	[0x26] = KEY(l, 'l'), [0x27] = KEY(;, ';'),
	[0x28] = { "'", '\''}, [0x29] = KEY(`, '`'),

	[0x2a] = KEY_SPECIAL("<Shift Left>"), [0x2b] = KEY(\\, '\\'),

	[0x2c] = KEY(z, 'z'), [0x2d] = KEY(x, 'x'),
	[0x2e] = KEY(c, 'c'), [0x2f] = KEY(v, 'v'),
	[0x30] = KEY(b, 'b'), [0x31] = KEY(n, 'n'),
	[0x32] = KEY(m, 'm'), [0x33] = { ",", ',' },
	[0x34] = KEY(., '.'), [0x35] = KEY(/, '/'),

	[0x36] = KEY_SPECIAL("<Shift Right>"), [0x37] = KEY(Keypad *, '*'),
	[0x38] = KEY_SPECIAL("<Alt Left>"), [0x39] = KEY(<Space>, ' '),
	[0x3a] = KEY_SPECIAL("<CapsLock>"),

	[0x3b] = KEY_SPECIAL("F1"), [0x3c] = KEY_SPECIAL("F2"),
	[0x3d] = KEY_SPECIAL("F3"), [0x3e] = KEY_SPECIAL("F4"),
	[0x3f] = KEY_SPECIAL("F5"), [0x40] = KEY_SPECIAL("F6"),
	[0x41] = KEY_SPECIAL("F7"), [0x42] = KEY_SPECIAL("F8"),
	[0x43] = KEY_SPECIAL("F9"), [0x44] = KEY_SPECIAL("F10"),

	[0x45] = KEY_SPECIAL("<NumberLock>"), [0x46] = KEY_SPECIAL("<ScrollLock>"),

	[0x47] = KEY(Keypad 7, '7'), [0x48] = KEY(Keypad 8, '8'),
	[0x49] = KEY(Keypad 9, '9'), [0x4a] = KEY(Keypad -, '-'),
	[0x4b] = KEY(Keypad 4, '4'), [0x4c] = KEY(Keypad 5, '5'),
	[0x4d] = KEY(Keypad 6, '6'), [0x4e] = KEY(Keypad +, '+'),
	[0x4f] = KEY(Keypad 1, '1'), [0x50] = KEY(Keypad 2, '2'),
	[0x51] = KEY(Keypad 3, '3'), [0x52] = KEY(Keypad 0, '0'),
	[0x53] = KEY(Keypad ., '.'), [0x54] = KEY_UNKNOWN,
	
	[0x55] = KEY_UNKNOWN, [0x56] = KEY_UNKNOWN,

	[0x57] = KEY_SPECIAL("F11"), [0x58] = KEY_SPECIAL("F12"),
	
	[0x59] = KEY_UNKNOWN, [0x5a] = KEY_UNKNOWN,
	[0x5b] = KEY_UNKNOWN, [0x5c] = KEY_SPECIAL("<Command Right>"),
	[0x5d] = KEY_UNKNOWN, [0x5e] = KEY_UNKNOWN,
	[0x5f] = KEY_UNKNOWN,

	[0x60] = KEY_UNKNOWN, [0x61] = KEY_UNKNOWN,
	[0x62] = KEY_UNKNOWN, [0x63] = KEY_UNKNOWN,
	[0x64] = KEY_UNKNOWN, [0x65] = KEY_UNKNOWN,
	[0x66] = KEY_UNKNOWN, [0x67] = KEY_UNKNOWN,
	[0x68] = KEY_UNKNOWN, [0x69] = KEY_UNKNOWN,
	[0x6a] = KEY_UNKNOWN, [0x6b] = KEY_UNKNOWN,
	[0x6c] = KEY_UNKNOWN, [0x6d] = KEY_UNKNOWN,
	[0x6e] = KEY_UNKNOWN, [0x6f] = KEY_UNKNOWN,

	[0x70] = KEY_UNKNOWN, [0x71] = KEY_UNKNOWN,
	[0x72] = KEY_UNKNOWN, [0x73] = KEY_UNKNOWN,
	[0x74] = KEY_UNKNOWN, [0x75] = KEY_UNKNOWN,
	[0x76] = KEY_UNKNOWN, [0x77] = KEY_UNKNOWN,
	[0x78] = KEY_UNKNOWN, [0x79] = KEY_UNKNOWN,
	[0x7a] = KEY_UNKNOWN, [0x7b] = KEY_UNKNOWN,
	[0x7c] = KEY_UNKNOWN, [0x7d] = KEY_UNKNOWN,
	[0x7e] = KEY_UNKNOWN, [0x7f] = KEY_UNKNOWN,

	[0x80] = KEY_UNKNOWN, [0x81] = KEY_UNKNOWN,
	[0x82] = KEY_UNKNOWN, [0x83] = KEY_UNKNOWN,
	[0x84] = KEY_UNKNOWN, [0x85] = KEY_UNKNOWN,
	[0x86] = KEY_UNKNOWN, [0x87] = KEY_UNKNOWN,
	[0x88] = KEY_UNKNOWN, [0x89] = KEY_UNKNOWN,
	[0x8a] = KEY_UNKNOWN, [0x8b] = KEY_UNKNOWN,
	[0x8c] = KEY_UNKNOWN, [0x8d] = KEY_UNKNOWN,
	[0x8e] = KEY_UNKNOWN, [0x8f] = KEY_UNKNOWN,

	[0x90] = KEY_UNKNOWN, [0x91] = KEY_UNKNOWN,
	[0x92] = KEY_UNKNOWN, [0x93] = KEY_UNKNOWN,
	[0x94] = KEY_UNKNOWN, [0x95] = KEY_UNKNOWN,
	[0x96] = KEY_UNKNOWN, [0x97] = KEY_UNKNOWN,
	[0x98] = KEY_UNKNOWN, [0x99] = KEY_UNKNOWN,
	[0x9a] = KEY_UNKNOWN, [0x9b] = KEY_UNKNOWN,
	[0x9c] = KEY_UNKNOWN, [0x9d] = KEY_UNKNOWN,
	[0x9e] = KEY_UNKNOWN, [0x9f] = KEY_UNKNOWN,

	[0xa0] = KEY_UNKNOWN, [0xa1] = KEY_UNKNOWN,
	[0xa2] = KEY_UNKNOWN, [0xa3] = KEY_UNKNOWN,
	[0xa4] = KEY_UNKNOWN, [0xa5] = KEY_UNKNOWN,
	[0xa6] = KEY_UNKNOWN, [0xa7] = KEY_UNKNOWN,
	[0xa8] = KEY_UNKNOWN, [0xa9] = KEY_UNKNOWN,
	[0xaa] = KEY_UNKNOWN, [0xab] = KEY_UNKNOWN,
	[0xac] = KEY_UNKNOWN, [0xad] = KEY_UNKNOWN,
	[0xae] = KEY_UNKNOWN, [0xaf] = KEY_UNKNOWN,

	[0xb0] = KEY_UNKNOWN, [0xb1] = KEY_UNKNOWN,
	[0xb2] = KEY_UNKNOWN, [0xb3] = KEY_UNKNOWN,
	[0xb4] = KEY_UNKNOWN, [0xb5] = KEY_UNKNOWN,
	[0xb6] = KEY_UNKNOWN, [0xb7] = KEY_UNKNOWN,
	[0xb8] = KEY_UNKNOWN, [0xb9] = KEY_UNKNOWN,
	[0xba] = KEY_UNKNOWN, [0xbb] = KEY_UNKNOWN,
	[0xbc] = KEY_UNKNOWN, [0xbd] = KEY_UNKNOWN,
	[0xbe] = KEY_UNKNOWN, [0xbf] = KEY_UNKNOWN,

	[0xc0] = KEY_UNKNOWN, [0xc1] = KEY_UNKNOWN,
	[0xc2] = KEY_UNKNOWN, [0xc3] = KEY_UNKNOWN,
	[0xc4] = KEY_UNKNOWN, [0xc5] = KEY_UNKNOWN,
	[0xc6] = KEY_UNKNOWN, [0xc7] = KEY_UNKNOWN,
	[0xc8] = KEY_UNKNOWN, [0xc9] = KEY_UNKNOWN,
	[0xca] = KEY_UNKNOWN, [0xcb] = KEY_UNKNOWN,
	[0xcc] = KEY_UNKNOWN, [0xcd] = KEY_UNKNOWN,
	[0xce] = KEY_UNKNOWN, [0xcf] = KEY_UNKNOWN,

	[0xd0] = KEY_UNKNOWN, [0xd1] = KEY_UNKNOWN,
	[0xd2] = KEY_UNKNOWN, [0xd3] = KEY_UNKNOWN,
	[0xd4] = KEY_UNKNOWN, [0xd5] = KEY_UNKNOWN,
	[0xd6] = KEY_UNKNOWN, [0xd7] = KEY_UNKNOWN,
	[0xd8] = KEY_UNKNOWN, [0xd9] = KEY_UNKNOWN,
	[0xda] = KEY_UNKNOWN, [0xdb] = KEY_UNKNOWN,
	[0xdc] = KEY_UNKNOWN, [0xdd] = KEY_UNKNOWN,
	[0xde] = KEY_UNKNOWN, [0xdf] = KEY_UNKNOWN,

	[0xe0] = KEY_UNKNOWN, [0xe1] = KEY_UNKNOWN,
	[0xe2] = KEY_UNKNOWN, [0xe3] = KEY_UNKNOWN,
	[0xe4] = KEY_UNKNOWN, [0xe5] = KEY_UNKNOWN,
	[0xe6] = KEY_UNKNOWN, [0xe7] = KEY_UNKNOWN,
	[0xe8] = KEY_UNKNOWN, [0xe9] = KEY_UNKNOWN,
	[0xea] = KEY_UNKNOWN, [0xeb] = KEY_UNKNOWN,
	[0xec] = KEY_UNKNOWN, [0xed] = KEY_UNKNOWN,
	[0xee] = KEY_UNKNOWN, [0xef] = KEY_UNKNOWN,

	[0xf0] = KEY_UNKNOWN, [0xf1] = KEY_UNKNOWN,
	[0xf2] = KEY_UNKNOWN, [0xf3] = KEY_UNKNOWN,
	[0xf4] = KEY_UNKNOWN, [0xf5] = KEY_UNKNOWN,
	[0xf6] = KEY_UNKNOWN, [0xf7] = KEY_UNKNOWN,
	[0xf8] = KEY_UNKNOWN, [0xf9] = KEY_UNKNOWN,
	[0xfa] = KEY_UNKNOWN, [0xfb] = KEY_UNKNOWN,
	[0xfc] = KEY_UNKNOWN, [0xfd] = KEY_UNKNOWN,
	[0xfe] = KEY_UNKNOWN, [0xff] = KEY_UNKNOWN,

};

void	SetKeyCodes(void)
{
	return;
}


