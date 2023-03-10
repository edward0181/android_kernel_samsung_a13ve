/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __NT36525B_DTC_PARAM_H__
#define __NT36525B_DTC_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define LCD_TYPE_VENDOR		"DTC"

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xDA
#define LDI_LEN_BRIGHTNESS	((u16)ARRAY_SIZE(SEQ_NT36525B_DTC_BRIGHTNESS))

/* len is read length */
#define LDI_LEN_ID		3

#define TYPE_WRITE		I2C_SMBUS_WRITE
#define TYPE_DELAY		U8_MAX

static u8 LM36274_INIT[] = {
	TYPE_WRITE, 0x0C, 0x2C,
	TYPE_WRITE, 0x0D, 0x26,
	TYPE_WRITE, 0x0E, 0x26,
	TYPE_WRITE, 0x09, 0xBE,
	TYPE_WRITE, 0x02, 0x6B,
	TYPE_WRITE, 0x03, 0x27,
	TYPE_WRITE, 0x11, 0x74,
	TYPE_WRITE, 0x04, 0x05,
	TYPE_WRITE, 0x05, 0xCC,
	TYPE_WRITE, 0x10, 0x67,
	TYPE_WRITE, 0x08, 0x13,
};

static u8 LM36274_EXIT[] = {
	TYPE_WRITE, 0x09, 0x18,
	TYPE_DELAY, 1, 0,
	TYPE_WRITE, 0x08, 0x00,
};

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_NT36525B_DTC_SLEEP_OUT[] = { 0x11 };
static unsigned char SEQ_NT36525B_DTC_SLEEP_IN[] = { 0x10 };
static unsigned char SEQ_NT36525B_DTC_DISPLAY_OFF[] = { 0x28 };
static unsigned char SEQ_NT36525B_DTC_DISPLAY_ON[] = { 0x29 };

static unsigned char SEQ_NT36525B_DTC_BRIGHTNESS[] = {
	0x51,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_001[] = {
	0xFF,
	0x20,
};

static unsigned char SEQ_NT36525B_DTC_002[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_003[] = {
	0x03,
	0x54,
};

static unsigned char SEQ_NT36525B_DTC_004[] = {
	0x05,
	0xA9,
};

static unsigned char SEQ_NT36525B_DTC_005[] = {
	0x07,
	0x69,
};

static unsigned char SEQ_NT36525B_DTC_006[] = {
	0x08,
	0xB7,
};

static unsigned char SEQ_NT36525B_DTC_007[] = {
	0x0E,
	0x87,
};

static unsigned char SEQ_NT36525B_DTC_008[] = {
	0x0F,
	0x55,
};

static unsigned char SEQ_NT36525B_DTC_009[] = {
	0x1F,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_010[] = {
	0x6D,
	0x33,
};

static unsigned char SEQ_NT36525B_DTC_011[] = {
	0x69,
	0xA9,
};

static unsigned char SEQ_NT36525B_DTC_012[] = {
	0x94,
	0xC0,
};

static unsigned char SEQ_NT36525B_DTC_013[] = {
	0x95,
	0x09,
};

static unsigned char SEQ_NT36525B_DTC_014[] = {
	0x96,
	0x09,
};

static unsigned char SEQ_NT36525B_DTC_015[] = {
	0x2F,
	0x82,
};

static unsigned char SEQ_NT36525B_DTC_016[] = {
	0xFF,
	0x23,
};

static unsigned char SEQ_NT36525B_DTC_017[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_018[] = {
	0x00,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_019[] = {
	0x04,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_020[] = {
	0x07,
	0x20,
};

static unsigned char SEQ_NT36525B_DTC_021[] = {
	0x08,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_022[] = {
	0x09,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_023[] = {
	0x12,
	0xB4,
};

static unsigned char SEQ_NT36525B_DTC_024[] = {
	0x15,
	0xE9,
};

static unsigned char SEQ_NT36525B_DTC_025[] = {
	0x16,
	0x0B,
};

static unsigned char SEQ_NT36525B_DTC_026[] = {
	0x19,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_027[] = {
	0x1A,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_028[] = {
	0x1B,
	0x08,
};

static unsigned char SEQ_NT36525B_DTC_029[] = {
	0x1C,
	0x0A,
};

static unsigned char SEQ_NT36525B_DTC_030[] = {
	0x1D,
	0x0C,
};

static unsigned char SEQ_NT36525B_DTC_031[] = {
	0x1E,
	0x12,
};

static unsigned char SEQ_NT36525B_DTC_032[] = {
	0x1F,
	0x16,
};

static unsigned char SEQ_NT36525B_DTC_033[] = {
	0x20,
	0x1A,
};

static unsigned char SEQ_NT36525B_DTC_034[] = {
	0x21,
	0x1C,
};

static unsigned char SEQ_NT36525B_DTC_035[] = {
	0x22,
	0x20,
};

static unsigned char SEQ_NT36525B_DTC_036[] = {
	0x23,
	0x24,
};

static unsigned char SEQ_NT36525B_DTC_037[] = {
	0x24,
	0x28,
};

static unsigned char SEQ_NT36525B_DTC_038[] = {
	0x25,
	0x2C,
};

static unsigned char SEQ_NT36525B_DTC_039[] = {
	0x26,
	0x30,
};

static unsigned char SEQ_NT36525B_DTC_040[] = {
	0x27,
	0x38,
};

static unsigned char SEQ_NT36525B_DTC_041[] = {
	0x28,
	0x3C,
};

static unsigned char SEQ_NT36525B_DTC_042[] = {
	0x29,
	0x10,
};

static unsigned char SEQ_NT36525B_DTC_043[] = {
	0x30,
	0xFF,
};

static unsigned char SEQ_NT36525B_DTC_044[] = {
	0x31,
	0xFF,
};

static unsigned char SEQ_NT36525B_DTC_045[] = {
	0x32,
	0xFE,
};

static unsigned char SEQ_NT36525B_DTC_046[] = {
	0x33,
	0xFD,
};

static unsigned char SEQ_NT36525B_DTC_047[] = {
	0x34,
	0xFD,
};

static unsigned char SEQ_NT36525B_DTC_048[] = {
	0x35,
	0xFC,
};

static unsigned char SEQ_NT36525B_DTC_049[] = {
	0x36,
	0xFB,
};

static unsigned char SEQ_NT36525B_DTC_050[] = {
	0x37,
	0xF9,
};

static unsigned char SEQ_NT36525B_DTC_051[] = {
	0x38,
	0xF7,
};

static unsigned char SEQ_NT36525B_DTC_052[] = {
	0x39,
	0xF3,
};

static unsigned char SEQ_NT36525B_DTC_053[] = {
	0x3A,
	0xEA,
};

static unsigned char SEQ_NT36525B_DTC_054[] = {
	0x3B,
	0xE6,
};

static unsigned char SEQ_NT36525B_DTC_055[] = {
	0x3D,
	0xE0,
};

static unsigned char SEQ_NT36525B_DTC_056[] = {
	0x3F,
	0xDD,
};

static unsigned char SEQ_NT36525B_DTC_057[] = {
	0x40,
	0xDB,
};

static unsigned char SEQ_NT36525B_DTC_058[] = {
	0x41,
	0xD9,
};

static unsigned char SEQ_NT36525B_DTC_059[] = {
	0xFF,
	0x24,
};

static unsigned char SEQ_NT36525B_DTC_060[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_061[] = {
	0x00,
	0x05,
};

static unsigned char SEQ_NT36525B_DTC_062[] = {
	0x01,
	0x1F,
};

static unsigned char SEQ_NT36525B_DTC_063[] = {
	0x02,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_064[] = {
	0x03,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_065[] = {
	0x04,
	0x1E,
};

static unsigned char SEQ_NT36525B_DTC_066[] = {
	0x05,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_067[] = {
	0x06,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_068[] = {
	0x07,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_069[] = {
	0x08,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_070[] = {
	0x09,
	0x0E,
};

static unsigned char SEQ_NT36525B_DTC_071[] = {
	0x0A,
	0x0E,
};

static unsigned char SEQ_NT36525B_DTC_072[] = {
	0x0B,
	0x0D,
};

static unsigned char SEQ_NT36525B_DTC_073[] = {
	0x0C,
	0x0D,
};

static unsigned char SEQ_NT36525B_DTC_074[] = {
	0x0D,
	0x0C,
};

static unsigned char SEQ_NT36525B_DTC_075[] = {
	0x0E,
	0x0C,
};

static unsigned char SEQ_NT36525B_DTC_076[] = {
	0x0F,
	0x04,
};

static unsigned char SEQ_NT36525B_DTC_077[] = {
	0x10,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_078[] = {
	0x11,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_079[] = {
	0x12,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_080[] = {
	0x13,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_081[] = {
	0x14,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_082[] = {
	0x15,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_083[] = {
	0x16,
	0x05,
};

static unsigned char SEQ_NT36525B_DTC_084[] = {
	0x17,
	0x1F,
};

static unsigned char SEQ_NT36525B_DTC_085[] = {
	0x18,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_086[] = {
	0x19,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_087[] = {
	0x1A,
	0x1E,
};

static unsigned char SEQ_NT36525B_DTC_088[] = {
	0x1B,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_089[] = {
	0x1C,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_090[] = {
	0x1D,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_091[] = {
	0x1E,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_092[] = {
	0x1F,
	0x0E,
};

static unsigned char SEQ_NT36525B_DTC_093[] = {
	0x20,
	0x0E,
};

static unsigned char SEQ_NT36525B_DTC_094[] = {
	0x21,
	0x0D,
};

static unsigned char SEQ_NT36525B_DTC_095[] = {
	0x22,
	0x0D,
};

static unsigned char SEQ_NT36525B_DTC_096[] = {
	0x23,
	0x0C,
};

static unsigned char SEQ_NT36525B_DTC_097[] = {
	0x24,
	0x0C,
};

static unsigned char SEQ_NT36525B_DTC_098[] = {
	0x25,
	0x04,
};

static unsigned char SEQ_NT36525B_DTC_099[] = {
	0x26,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_100[] = {
	0x27,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_101[] = {
	0x28,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_102[] = {
	0x29,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_103[] = {
	0x2A,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_104[] = {
	0x2B,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_105[] = {
	0x2F,
	0x06,
};

static unsigned char SEQ_NT36525B_DTC_106[] = {
	0x30,
	0x40,
};

static unsigned char SEQ_NT36525B_DTC_107[] = {
	0x33,
	0x40,
};

static unsigned char SEQ_NT36525B_DTC_108[] = {
	0x34,
	0x06,
};

static unsigned char SEQ_NT36525B_DTC_109[] = {
	0x37,
	0x44,
};

static unsigned char SEQ_NT36525B_DTC_110[] = {
	0x3A,
	0x08,
};

static unsigned char SEQ_NT36525B_DTC_111[] = {
	0x3B,
	0xA6,
};

static unsigned char SEQ_NT36525B_DTC_112[] = {
	0x3D,
	0x92,
};

static unsigned char SEQ_NT36525B_DTC_113[] = {
	0x4D,
	0x12,
};

static unsigned char SEQ_NT36525B_DTC_114[] = {
	0x4E,
	0x34,
};

static unsigned char SEQ_NT36525B_DTC_115[] = {
	0x51,
	0x43,
};

static unsigned char SEQ_NT36525B_DTC_116[] = {
	0x52,
	0x21,
};

static unsigned char SEQ_NT36525B_DTC_117[] = {
	0x55,
	0x83,
};

static unsigned char SEQ_NT36525B_DTC_118[] = {
	0x56,
	0x44,
};

static unsigned char SEQ_NT36525B_DTC_119[] = {
	0x5A,
	0x92,
};

static unsigned char SEQ_NT36525B_DTC_120[] = {
	0x5B,
	0x90,
};

static unsigned char SEQ_NT36525B_DTC_121[] = {
	0x5C,
	0x9F,
};

static unsigned char SEQ_NT36525B_DTC_122[] = {
	0x5D,
	0x08,
};

static unsigned char SEQ_NT36525B_DTC_123[] = {
	0x5E,
	0x08,
};

static unsigned char SEQ_NT36525B_DTC_124[] = {
	0x60,
	0x80,
};

static unsigned char SEQ_NT36525B_DTC_125[] = {
	0x61,
	0x90,
};

static unsigned char SEQ_NT36525B_DTC_126[] = {
	0x64,
	0x11,
};

static unsigned char SEQ_NT36525B_DTC_127[] = {
	0x92,
	0xB4,
};

static unsigned char SEQ_NT36525B_DTC_128[] = {
	0x93,
	0x08,
};

static unsigned char SEQ_NT36525B_DTC_129[] = {
	0x94,
	0x0E,
};

static unsigned char SEQ_NT36525B_DTC_130[] = {
	0xAB,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_131[] = {
	0xAD,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_132[] = {
	0xB0,
	0x05,
};

static unsigned char SEQ_NT36525B_DTC_133[] = {
	0xB1,
	0xB0,
};

static unsigned char SEQ_NT36525B_DTC_134[] = {
	0xFF,
	0x25,
};

static unsigned char SEQ_NT36525B_DTC_135[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_136[] = {
	0x0A,
	0x82,
};

static unsigned char SEQ_NT36525B_DTC_137[] = {
	0x0B,
	0x26,
};

static unsigned char SEQ_NT36525B_DTC_138[] = {
	0x0C,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_139[] = {
	0x17,
	0x82,
};

static unsigned char SEQ_NT36525B_DTC_140[] = {
	0x18,
	0x06,
};

static unsigned char SEQ_NT36525B_DTC_141[] = {
	0x19,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_142[] = {
	0xFF,
	0x26,
};

static unsigned char SEQ_NT36525B_DTC_143[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_144[] = {
	0x00,
	0xA0,
};

static unsigned char SEQ_NT36525B_DTC_145[] = {
	0xFF,
	0x27,
};

static unsigned char SEQ_NT36525B_DTC_146[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_147[] = {
	0x13,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_148[] = {
	0x15,
	0xB4,
};

static unsigned char SEQ_NT36525B_DTC_149[] = {
	0x1F,
	0x55,
};

static unsigned char SEQ_NT36525B_DTC_150[] = {
	0x26,
	0x0F,
};

static unsigned char SEQ_NT36525B_DTC_151[] = {
	0xC0,
	0x18,
};

static unsigned char SEQ_NT36525B_DTC_152[] = {
	0xC1,
	0xF0,
};

static unsigned char SEQ_NT36525B_DTC_153[] = {
	0xC2,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_154[] = {
	0xC3,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_155[] = {
	0xC4,
	0xF0,
};

static unsigned char SEQ_NT36525B_DTC_156[] = {
	0xC5,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_157[] = {
	0xC6,
	0x00,
};

static unsigned char SEQ_NT36525B_DTC_158[] = {
	0xFF,
	0x24,
};

static unsigned char SEQ_NT36525B_DTC_159[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_160[] = {
	0x92,
	0xAF,
};

static unsigned char SEQ_NT36525B_DTC_161[] = {
	0xB1,
	0xAB,
};

static unsigned char SEQ_NT36525B_DTC_162[] = {
	0xFF,
	0x25,
};

static unsigned char SEQ_NT36525B_DTC_163[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_164[] = {
	0x0B,
	0x19,
};

static unsigned char SEQ_NT36525B_DTC_165[] = {
	0xFF,
	0xD0,
};

static unsigned char SEQ_NT36525B_DTC_166[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_167[] = {
	0x25,
	0xA9,
};

static unsigned char SEQ_NT36525B_DTC_168[] = {
	0xFF,
	0xE0,
};

static unsigned char SEQ_NT36525B_DTC_169[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_170[] = {
	0x25,
	0x11,
};

static unsigned char SEQ_NT36525B_DTC_171[] = {
	0x4E,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_172[] = {
	0xFF,
	0x10,
};

static unsigned char SEQ_NT36525B_DTC_173[] = {
	0xFB,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_174[] = {
	0xBA,
	0x02,
};

static unsigned char SEQ_NT36525B_DTC_175[] = {
	0x53,
	0x2C,
};

static unsigned char SEQ_NT36525B_DTC_176[] = {
	0x55,
	0x01,
};

static unsigned char SEQ_NT36525B_DTC_177[] = {
	0x68,
	0x00, 0x01,
};

static unsigned char SEQ_NT36525B_DTC_178[] = {
	0x51,
	0x00,
};

/* DO NOT REMOVE: back to page 1 for setting DCS commands */
static unsigned char SEQ_NT36525B_DTC_BACK_TO_PAGE_1_A[] = {
	0xFF,
	0x10,
};

static unsigned char SEQ_NT36525B_DTC_BACK_TO_PAGE_1_B[] = {
	0xFB,
	0x01,
};

static struct lcd_seq_info LCD_SEQ_INIT_1[] = {
	{SEQ_NT36525B_DTC_001, ARRAY_SIZE(SEQ_NT36525B_DTC_001), 0, },
	{SEQ_NT36525B_DTC_002, ARRAY_SIZE(SEQ_NT36525B_DTC_002), 0, },
	{SEQ_NT36525B_DTC_003, ARRAY_SIZE(SEQ_NT36525B_DTC_003), 0, },
	{SEQ_NT36525B_DTC_004, ARRAY_SIZE(SEQ_NT36525B_DTC_004), 0, },
	{SEQ_NT36525B_DTC_005, ARRAY_SIZE(SEQ_NT36525B_DTC_005), 0, },
	{SEQ_NT36525B_DTC_006, ARRAY_SIZE(SEQ_NT36525B_DTC_006), 0, },
	{SEQ_NT36525B_DTC_007, ARRAY_SIZE(SEQ_NT36525B_DTC_007), 0, },
	{SEQ_NT36525B_DTC_008, ARRAY_SIZE(SEQ_NT36525B_DTC_008), 0, },
	{SEQ_NT36525B_DTC_009, ARRAY_SIZE(SEQ_NT36525B_DTC_009), 0, },
	{SEQ_NT36525B_DTC_010, ARRAY_SIZE(SEQ_NT36525B_DTC_010), 0, },
	{SEQ_NT36525B_DTC_011, ARRAY_SIZE(SEQ_NT36525B_DTC_011), 0, },
	{SEQ_NT36525B_DTC_012, ARRAY_SIZE(SEQ_NT36525B_DTC_012), 0, },
	{SEQ_NT36525B_DTC_013, ARRAY_SIZE(SEQ_NT36525B_DTC_013), 0, },
	{SEQ_NT36525B_DTC_014, ARRAY_SIZE(SEQ_NT36525B_DTC_014), 0, },
	{SEQ_NT36525B_DTC_015, ARRAY_SIZE(SEQ_NT36525B_DTC_015), 0, },
	{SEQ_NT36525B_DTC_016, ARRAY_SIZE(SEQ_NT36525B_DTC_016), 0, },
	{SEQ_NT36525B_DTC_017, ARRAY_SIZE(SEQ_NT36525B_DTC_017), 0, },
	{SEQ_NT36525B_DTC_018, ARRAY_SIZE(SEQ_NT36525B_DTC_018), 0, },
	{SEQ_NT36525B_DTC_019, ARRAY_SIZE(SEQ_NT36525B_DTC_019), 0, },
	{SEQ_NT36525B_DTC_020, ARRAY_SIZE(SEQ_NT36525B_DTC_020), 0, },
	{SEQ_NT36525B_DTC_021, ARRAY_SIZE(SEQ_NT36525B_DTC_021), 0, },
	{SEQ_NT36525B_DTC_022, ARRAY_SIZE(SEQ_NT36525B_DTC_022), 0, },
	{SEQ_NT36525B_DTC_023, ARRAY_SIZE(SEQ_NT36525B_DTC_023), 0, },
	{SEQ_NT36525B_DTC_024, ARRAY_SIZE(SEQ_NT36525B_DTC_024), 0, },
	{SEQ_NT36525B_DTC_025, ARRAY_SIZE(SEQ_NT36525B_DTC_025), 0, },
	{SEQ_NT36525B_DTC_026, ARRAY_SIZE(SEQ_NT36525B_DTC_026), 0, },
	{SEQ_NT36525B_DTC_027, ARRAY_SIZE(SEQ_NT36525B_DTC_027), 0, },
	{SEQ_NT36525B_DTC_028, ARRAY_SIZE(SEQ_NT36525B_DTC_028), 0, },
	{SEQ_NT36525B_DTC_029, ARRAY_SIZE(SEQ_NT36525B_DTC_029), 0, },
	{SEQ_NT36525B_DTC_030, ARRAY_SIZE(SEQ_NT36525B_DTC_030), 0, },
	{SEQ_NT36525B_DTC_031, ARRAY_SIZE(SEQ_NT36525B_DTC_031), 0, },
	{SEQ_NT36525B_DTC_032, ARRAY_SIZE(SEQ_NT36525B_DTC_032), 0, },
	{SEQ_NT36525B_DTC_033, ARRAY_SIZE(SEQ_NT36525B_DTC_033), 0, },
	{SEQ_NT36525B_DTC_034, ARRAY_SIZE(SEQ_NT36525B_DTC_034), 0, },
	{SEQ_NT36525B_DTC_035, ARRAY_SIZE(SEQ_NT36525B_DTC_035), 0, },
	{SEQ_NT36525B_DTC_036, ARRAY_SIZE(SEQ_NT36525B_DTC_036), 0, },
	{SEQ_NT36525B_DTC_037, ARRAY_SIZE(SEQ_NT36525B_DTC_037), 0, },
	{SEQ_NT36525B_DTC_038, ARRAY_SIZE(SEQ_NT36525B_DTC_038), 0, },
	{SEQ_NT36525B_DTC_039, ARRAY_SIZE(SEQ_NT36525B_DTC_039), 0, },
	{SEQ_NT36525B_DTC_040, ARRAY_SIZE(SEQ_NT36525B_DTC_040), 0, },
	{SEQ_NT36525B_DTC_041, ARRAY_SIZE(SEQ_NT36525B_DTC_041), 0, },
	{SEQ_NT36525B_DTC_042, ARRAY_SIZE(SEQ_NT36525B_DTC_042), 0, },
	{SEQ_NT36525B_DTC_043, ARRAY_SIZE(SEQ_NT36525B_DTC_043), 0, },
	{SEQ_NT36525B_DTC_044, ARRAY_SIZE(SEQ_NT36525B_DTC_044), 0, },
	{SEQ_NT36525B_DTC_045, ARRAY_SIZE(SEQ_NT36525B_DTC_045), 0, },
	{SEQ_NT36525B_DTC_046, ARRAY_SIZE(SEQ_NT36525B_DTC_046), 0, },
	{SEQ_NT36525B_DTC_047, ARRAY_SIZE(SEQ_NT36525B_DTC_047), 0, },
	{SEQ_NT36525B_DTC_048, ARRAY_SIZE(SEQ_NT36525B_DTC_048), 0, },
	{SEQ_NT36525B_DTC_049, ARRAY_SIZE(SEQ_NT36525B_DTC_049), 0, },
	{SEQ_NT36525B_DTC_050, ARRAY_SIZE(SEQ_NT36525B_DTC_050), 0, },
	{SEQ_NT36525B_DTC_051, ARRAY_SIZE(SEQ_NT36525B_DTC_051), 0, },
	{SEQ_NT36525B_DTC_052, ARRAY_SIZE(SEQ_NT36525B_DTC_052), 0, },
	{SEQ_NT36525B_DTC_053, ARRAY_SIZE(SEQ_NT36525B_DTC_053), 0, },
	{SEQ_NT36525B_DTC_054, ARRAY_SIZE(SEQ_NT36525B_DTC_054), 0, },
	{SEQ_NT36525B_DTC_055, ARRAY_SIZE(SEQ_NT36525B_DTC_055), 0, },
	{SEQ_NT36525B_DTC_056, ARRAY_SIZE(SEQ_NT36525B_DTC_056), 0, },
	{SEQ_NT36525B_DTC_057, ARRAY_SIZE(SEQ_NT36525B_DTC_057), 0, },
	{SEQ_NT36525B_DTC_058, ARRAY_SIZE(SEQ_NT36525B_DTC_058), 0, },
	{SEQ_NT36525B_DTC_059, ARRAY_SIZE(SEQ_NT36525B_DTC_059), 0, },
	{SEQ_NT36525B_DTC_060, ARRAY_SIZE(SEQ_NT36525B_DTC_060), 0, },
	{SEQ_NT36525B_DTC_061, ARRAY_SIZE(SEQ_NT36525B_DTC_061), 0, },
	{SEQ_NT36525B_DTC_062, ARRAY_SIZE(SEQ_NT36525B_DTC_062), 0, },
	{SEQ_NT36525B_DTC_063, ARRAY_SIZE(SEQ_NT36525B_DTC_063), 0, },
	{SEQ_NT36525B_DTC_064, ARRAY_SIZE(SEQ_NT36525B_DTC_064), 0, },
	{SEQ_NT36525B_DTC_065, ARRAY_SIZE(SEQ_NT36525B_DTC_065), 0, },
	{SEQ_NT36525B_DTC_066, ARRAY_SIZE(SEQ_NT36525B_DTC_066), 0, },
	{SEQ_NT36525B_DTC_067, ARRAY_SIZE(SEQ_NT36525B_DTC_067), 0, },
	{SEQ_NT36525B_DTC_068, ARRAY_SIZE(SEQ_NT36525B_DTC_068), 0, },
	{SEQ_NT36525B_DTC_069, ARRAY_SIZE(SEQ_NT36525B_DTC_069), 0, },
	{SEQ_NT36525B_DTC_070, ARRAY_SIZE(SEQ_NT36525B_DTC_070), 0, },
	{SEQ_NT36525B_DTC_071, ARRAY_SIZE(SEQ_NT36525B_DTC_071), 0, },
	{SEQ_NT36525B_DTC_072, ARRAY_SIZE(SEQ_NT36525B_DTC_072), 0, },
	{SEQ_NT36525B_DTC_073, ARRAY_SIZE(SEQ_NT36525B_DTC_073), 0, },
	{SEQ_NT36525B_DTC_074, ARRAY_SIZE(SEQ_NT36525B_DTC_074), 0, },
	{SEQ_NT36525B_DTC_075, ARRAY_SIZE(SEQ_NT36525B_DTC_075), 0, },
	{SEQ_NT36525B_DTC_076, ARRAY_SIZE(SEQ_NT36525B_DTC_076), 0, },
	{SEQ_NT36525B_DTC_077, ARRAY_SIZE(SEQ_NT36525B_DTC_077), 0, },
	{SEQ_NT36525B_DTC_078, ARRAY_SIZE(SEQ_NT36525B_DTC_078), 0, },
	{SEQ_NT36525B_DTC_079, ARRAY_SIZE(SEQ_NT36525B_DTC_079), 0, },
	{SEQ_NT36525B_DTC_080, ARRAY_SIZE(SEQ_NT36525B_DTC_080), 0, },
	{SEQ_NT36525B_DTC_081, ARRAY_SIZE(SEQ_NT36525B_DTC_081), 0, },
	{SEQ_NT36525B_DTC_082, ARRAY_SIZE(SEQ_NT36525B_DTC_082), 0, },
	{SEQ_NT36525B_DTC_083, ARRAY_SIZE(SEQ_NT36525B_DTC_083), 0, },
	{SEQ_NT36525B_DTC_084, ARRAY_SIZE(SEQ_NT36525B_DTC_084), 0, },
	{SEQ_NT36525B_DTC_085, ARRAY_SIZE(SEQ_NT36525B_DTC_085), 0, },
	{SEQ_NT36525B_DTC_086, ARRAY_SIZE(SEQ_NT36525B_DTC_086), 0, },
	{SEQ_NT36525B_DTC_087, ARRAY_SIZE(SEQ_NT36525B_DTC_087), 0, },
	{SEQ_NT36525B_DTC_088, ARRAY_SIZE(SEQ_NT36525B_DTC_088), 0, },
	{SEQ_NT36525B_DTC_089, ARRAY_SIZE(SEQ_NT36525B_DTC_089), 0, },
	{SEQ_NT36525B_DTC_090, ARRAY_SIZE(SEQ_NT36525B_DTC_090), 0, },
	{SEQ_NT36525B_DTC_091, ARRAY_SIZE(SEQ_NT36525B_DTC_091), 0, },
	{SEQ_NT36525B_DTC_092, ARRAY_SIZE(SEQ_NT36525B_DTC_092), 0, },
	{SEQ_NT36525B_DTC_093, ARRAY_SIZE(SEQ_NT36525B_DTC_093), 0, },
	{SEQ_NT36525B_DTC_094, ARRAY_SIZE(SEQ_NT36525B_DTC_094), 0, },
	{SEQ_NT36525B_DTC_095, ARRAY_SIZE(SEQ_NT36525B_DTC_095), 0, },
	{SEQ_NT36525B_DTC_096, ARRAY_SIZE(SEQ_NT36525B_DTC_096), 0, },
	{SEQ_NT36525B_DTC_097, ARRAY_SIZE(SEQ_NT36525B_DTC_097), 0, },
	{SEQ_NT36525B_DTC_098, ARRAY_SIZE(SEQ_NT36525B_DTC_098), 0, },
	{SEQ_NT36525B_DTC_099, ARRAY_SIZE(SEQ_NT36525B_DTC_099), 0, },
	{SEQ_NT36525B_DTC_100, ARRAY_SIZE(SEQ_NT36525B_DTC_100), 0, },
	{SEQ_NT36525B_DTC_101, ARRAY_SIZE(SEQ_NT36525B_DTC_101), 0, },
	{SEQ_NT36525B_DTC_102, ARRAY_SIZE(SEQ_NT36525B_DTC_102), 0, },
	{SEQ_NT36525B_DTC_103, ARRAY_SIZE(SEQ_NT36525B_DTC_103), 0, },
	{SEQ_NT36525B_DTC_104, ARRAY_SIZE(SEQ_NT36525B_DTC_104), 0, },
	{SEQ_NT36525B_DTC_105, ARRAY_SIZE(SEQ_NT36525B_DTC_105), 0, },
	{SEQ_NT36525B_DTC_106, ARRAY_SIZE(SEQ_NT36525B_DTC_106), 0, },
	{SEQ_NT36525B_DTC_107, ARRAY_SIZE(SEQ_NT36525B_DTC_107), 0, },
	{SEQ_NT36525B_DTC_108, ARRAY_SIZE(SEQ_NT36525B_DTC_108), 0, },
	{SEQ_NT36525B_DTC_109, ARRAY_SIZE(SEQ_NT36525B_DTC_109), 0, },
	{SEQ_NT36525B_DTC_110, ARRAY_SIZE(SEQ_NT36525B_DTC_110), 0, },
	{SEQ_NT36525B_DTC_111, ARRAY_SIZE(SEQ_NT36525B_DTC_111), 0, },
	{SEQ_NT36525B_DTC_112, ARRAY_SIZE(SEQ_NT36525B_DTC_112), 0, },
	{SEQ_NT36525B_DTC_113, ARRAY_SIZE(SEQ_NT36525B_DTC_113), 0, },
	{SEQ_NT36525B_DTC_114, ARRAY_SIZE(SEQ_NT36525B_DTC_114), 0, },
	{SEQ_NT36525B_DTC_115, ARRAY_SIZE(SEQ_NT36525B_DTC_115), 0, },
	{SEQ_NT36525B_DTC_116, ARRAY_SIZE(SEQ_NT36525B_DTC_116), 0, },
	{SEQ_NT36525B_DTC_117, ARRAY_SIZE(SEQ_NT36525B_DTC_117), 0, },
	{SEQ_NT36525B_DTC_118, ARRAY_SIZE(SEQ_NT36525B_DTC_118), 0, },
	{SEQ_NT36525B_DTC_119, ARRAY_SIZE(SEQ_NT36525B_DTC_119), 0, },
	{SEQ_NT36525B_DTC_120, ARRAY_SIZE(SEQ_NT36525B_DTC_120), 0, },
	{SEQ_NT36525B_DTC_121, ARRAY_SIZE(SEQ_NT36525B_DTC_121), 0, },
	{SEQ_NT36525B_DTC_122, ARRAY_SIZE(SEQ_NT36525B_DTC_122), 0, },
	{SEQ_NT36525B_DTC_123, ARRAY_SIZE(SEQ_NT36525B_DTC_123), 0, },
	{SEQ_NT36525B_DTC_124, ARRAY_SIZE(SEQ_NT36525B_DTC_124), 0, },
	{SEQ_NT36525B_DTC_125, ARRAY_SIZE(SEQ_NT36525B_DTC_125), 0, },
	{SEQ_NT36525B_DTC_126, ARRAY_SIZE(SEQ_NT36525B_DTC_126), 0, },
	{SEQ_NT36525B_DTC_127, ARRAY_SIZE(SEQ_NT36525B_DTC_127), 0, },
	{SEQ_NT36525B_DTC_128, ARRAY_SIZE(SEQ_NT36525B_DTC_128), 0, },
	{SEQ_NT36525B_DTC_129, ARRAY_SIZE(SEQ_NT36525B_DTC_129), 0, },
	{SEQ_NT36525B_DTC_130, ARRAY_SIZE(SEQ_NT36525B_DTC_130), 0, },
	{SEQ_NT36525B_DTC_131, ARRAY_SIZE(SEQ_NT36525B_DTC_131), 0, },
	{SEQ_NT36525B_DTC_132, ARRAY_SIZE(SEQ_NT36525B_DTC_132), 0, },
	{SEQ_NT36525B_DTC_133, ARRAY_SIZE(SEQ_NT36525B_DTC_133), 0, },
	{SEQ_NT36525B_DTC_134, ARRAY_SIZE(SEQ_NT36525B_DTC_134), 0, },
	{SEQ_NT36525B_DTC_135, ARRAY_SIZE(SEQ_NT36525B_DTC_135), 0, },
	{SEQ_NT36525B_DTC_136, ARRAY_SIZE(SEQ_NT36525B_DTC_136), 0, },
	{SEQ_NT36525B_DTC_137, ARRAY_SIZE(SEQ_NT36525B_DTC_137), 0, },
	{SEQ_NT36525B_DTC_138, ARRAY_SIZE(SEQ_NT36525B_DTC_138), 0, },
	{SEQ_NT36525B_DTC_139, ARRAY_SIZE(SEQ_NT36525B_DTC_139), 0, },
	{SEQ_NT36525B_DTC_140, ARRAY_SIZE(SEQ_NT36525B_DTC_140), 0, },
	{SEQ_NT36525B_DTC_141, ARRAY_SIZE(SEQ_NT36525B_DTC_141), 0, },
	{SEQ_NT36525B_DTC_142, ARRAY_SIZE(SEQ_NT36525B_DTC_142), 0, },
	{SEQ_NT36525B_DTC_143, ARRAY_SIZE(SEQ_NT36525B_DTC_143), 0, },
	{SEQ_NT36525B_DTC_144, ARRAY_SIZE(SEQ_NT36525B_DTC_144), 0, },
	{SEQ_NT36525B_DTC_145, ARRAY_SIZE(SEQ_NT36525B_DTC_145), 0, },
	{SEQ_NT36525B_DTC_146, ARRAY_SIZE(SEQ_NT36525B_DTC_146), 0, },
	{SEQ_NT36525B_DTC_147, ARRAY_SIZE(SEQ_NT36525B_DTC_147), 0, },
	{SEQ_NT36525B_DTC_148, ARRAY_SIZE(SEQ_NT36525B_DTC_148), 0, },
	{SEQ_NT36525B_DTC_149, ARRAY_SIZE(SEQ_NT36525B_DTC_149), 0, },
	{SEQ_NT36525B_DTC_150, ARRAY_SIZE(SEQ_NT36525B_DTC_150), 0, },
	{SEQ_NT36525B_DTC_151, ARRAY_SIZE(SEQ_NT36525B_DTC_151), 0, },
	{SEQ_NT36525B_DTC_152, ARRAY_SIZE(SEQ_NT36525B_DTC_152), 0, },
	{SEQ_NT36525B_DTC_153, ARRAY_SIZE(SEQ_NT36525B_DTC_153), 0, },
	{SEQ_NT36525B_DTC_154, ARRAY_SIZE(SEQ_NT36525B_DTC_154), 0, },
	{SEQ_NT36525B_DTC_155, ARRAY_SIZE(SEQ_NT36525B_DTC_155), 0, },
	{SEQ_NT36525B_DTC_156, ARRAY_SIZE(SEQ_NT36525B_DTC_156), 0, },
	{SEQ_NT36525B_DTC_157, ARRAY_SIZE(SEQ_NT36525B_DTC_157), 0, },
	{SEQ_NT36525B_DTC_158, ARRAY_SIZE(SEQ_NT36525B_DTC_158), 0, },
	{SEQ_NT36525B_DTC_159, ARRAY_SIZE(SEQ_NT36525B_DTC_159), 0, },
	{SEQ_NT36525B_DTC_160, ARRAY_SIZE(SEQ_NT36525B_DTC_160), 0, },
	{SEQ_NT36525B_DTC_161, ARRAY_SIZE(SEQ_NT36525B_DTC_161), 0, },
	{SEQ_NT36525B_DTC_162, ARRAY_SIZE(SEQ_NT36525B_DTC_162), 0, },
	{SEQ_NT36525B_DTC_163, ARRAY_SIZE(SEQ_NT36525B_DTC_163), 0, },
	{SEQ_NT36525B_DTC_164, ARRAY_SIZE(SEQ_NT36525B_DTC_164), 0, },
	{SEQ_NT36525B_DTC_165, ARRAY_SIZE(SEQ_NT36525B_DTC_165), 0, },
	{SEQ_NT36525B_DTC_166, ARRAY_SIZE(SEQ_NT36525B_DTC_166), 0, },
	{SEQ_NT36525B_DTC_167, ARRAY_SIZE(SEQ_NT36525B_DTC_167), 0, },
	{SEQ_NT36525B_DTC_168, ARRAY_SIZE(SEQ_NT36525B_DTC_168), 0, },
	{SEQ_NT36525B_DTC_169, ARRAY_SIZE(SEQ_NT36525B_DTC_169), 0, },
	{SEQ_NT36525B_DTC_170, ARRAY_SIZE(SEQ_NT36525B_DTC_170), 0, },
	{SEQ_NT36525B_DTC_171, ARRAY_SIZE(SEQ_NT36525B_DTC_171), 0, },
	{SEQ_NT36525B_DTC_172, ARRAY_SIZE(SEQ_NT36525B_DTC_172), 0, },
	{SEQ_NT36525B_DTC_173, ARRAY_SIZE(SEQ_NT36525B_DTC_173), 0, },
	{SEQ_NT36525B_DTC_174, ARRAY_SIZE(SEQ_NT36525B_DTC_174), 0, },
	{SEQ_NT36525B_DTC_175, ARRAY_SIZE(SEQ_NT36525B_DTC_175), 0, },
	{SEQ_NT36525B_DTC_176, ARRAY_SIZE(SEQ_NT36525B_DTC_176), 0, },
	{SEQ_NT36525B_DTC_177, ARRAY_SIZE(SEQ_NT36525B_DTC_177), 0, },
	{SEQ_NT36525B_DTC_178, ARRAY_SIZE(SEQ_NT36525B_DTC_178), 0, },
	/* DO NOT REMOVE: back to page 1 for setting DCS commands */
	{SEQ_NT36525B_DTC_BACK_TO_PAGE_1_A, ARRAY_SIZE(SEQ_NT36525B_DTC_BACK_TO_PAGE_1_A), 0, },
	{SEQ_NT36525B_DTC_BACK_TO_PAGE_1_B, ARRAY_SIZE(SEQ_NT36525B_DTC_BACK_TO_PAGE_1_B), 0, },
	{SEQ_NT36525B_DTC_BRIGHTNESS, ARRAY_SIZE(SEQ_NT36525B_DTC_BRIGHTNESS), 0, },
	{SEQ_NT36525B_DTC_SLEEP_OUT, ARRAY_SIZE(SEQ_NT36525B_DTC_SLEEP_OUT), 100, },	/* Wait Min. 6 frame */
	{SEQ_NT36525B_DTC_DISPLAY_ON, ARRAY_SIZE(SEQ_NT36525B_DTC_DISPLAY_ON), 0, },
};

static struct lcd_seq_info LCD_SEQ_EXIT_1[] = {
	/* DO NOT REMOVE: back to page 1 for setting DCS commands */
	{SEQ_NT36525B_DTC_BACK_TO_PAGE_1_A, ARRAY_SIZE(SEQ_NT36525B_DTC_BACK_TO_PAGE_1_A), 0, },
	{SEQ_NT36525B_DTC_BACK_TO_PAGE_1_B, ARRAY_SIZE(SEQ_NT36525B_DTC_BACK_TO_PAGE_1_B), 0, },
	{SEQ_NT36525B_DTC_DISPLAY_OFF, ARRAY_SIZE(SEQ_NT36525B_DTC_DISPLAY_OFF), 20, },
	{SEQ_NT36525B_DTC_SLEEP_IN, ARRAY_SIZE(SEQ_NT36525B_DTC_SLEEP_IN), 0, },
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	1, 1, 2, 3, 3, 4, 5, 5, 6, 7, /* 1: 1 */
	7, 8, 9, 9, 10, 11, 11, 12, 13, 14,
	14, 15, 16, 16, 17, 18, 18, 19, 20, 20,
	21, 22, 22, 23, 24, 24, 25, 26, 27, 27,
	28, 29, 29, 30, 31, 31, 32, 33, 33, 34,
	35, 35, 36, 37, 37, 38, 39, 40, 40, 41,
	42, 42, 43, 44, 44, 45, 46, 46, 47, 48,
	48, 49, 50, 51, 51, 52, 53, 53, 54, 55,
	55, 56, 57, 57, 58, 59, 59, 60, 61, 61,
	62, 63, 64, 64, 65, 66, 66, 67, 68, 68,
	69, 70, 70, 71, 72, 72, 73, 74, 74, 75,
	76, 77, 77, 78, 79, 79, 80, 81, 81, 82,
	83, 83, 84, 85, 85, 86, 87, 88, 88, 89, /* 128: 88 */
	90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
	110, 111, 112, 113, 114, 115, 116, 117, 118, 118,
	119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
	129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
	139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
	149, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
	178, 179, 180, 180, 181, 182, 183, 184, 185, 186,
	187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
	197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
	207, 208, 209, 210, 211, 211, 211, 211, 211, 211, /* 255: 211 */
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 254,
};

#endif /* __NT36525B_DTC_PARAM_H__ */
