#ifndef __S6E8AB0_PARAM_H__
#define __S6E8AB0_PARAM_H__


extern unsigned int system_rev;

#define GAMMA_PARAM_SIZE	25
#define ACL_PARAM_SIZE	ARRAY_SIZE(SEQ_ACL_CUTOFF_40)
#define ELVSS_PARAM_SIZE	ARRAY_SIZE(SEQ_ELVSS_44)

static const unsigned char SEQ_APPLY_LEVEL_2_KEY[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_APPLY_MTP_KEY[] = {
	0xF1,
	0x5A, 0x5A
};

static const unsigned char SEQ_PANEL_CONDITION_SET[] = {
	0xF8,
	0x01, 0x8E, 0x00, 0x00, 0x00, 0xAC, 0x00, 0x9E, 0x8D, 0x1F,
	0x4E, 0x9C, 0x7D, 0x3F, 0x10, 0x00, 0x20, 0x02, 0x10, 0x7D,
	0x10, 0x00, 0x00, 0x02, 0x08, 0x10, 0x34, 0x34, 0x34, 0xC0,
	0xC1, 0x01, 0x00, 0xC1, 0x82, 0x00, 0xC8, 0xC1, 0xE3, 0x01
};

static const unsigned char SEQ_DISPLAY_CONDITION_SET[] = {
	0xF2,
	0xC8, 0x05, 0x0D
};

static const unsigned char SEQ_GAMMA_SELECT[] = {
	0x26, 0x01
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7, 0x01
};

static const unsigned char SEQ_ETC_PWRCTL[] = {
	0xF4,
	0x0B, 0x0A, 0x06, 0x0B, 0x33, 0x02
};

static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x04, 0x00, 0x02
};

static const unsigned char SEQ_ELVSS_DEFAULT[] = {
	0xB1,
	0x04, 0x00
};

static const unsigned char SEQ_ETC_NVM_SETTING[] = {
	0xD9,
	0x14, 0x5C, 0x20, 0x0C, 0x0F, 0x41, 0x00, 0x10, 0x11, 0x12,
	0xA8, 0x55, 0x00, 0x00, 0x00, 0x00, 0x80, 0xCB, 0xED, 0x7F,
	0xEF
};

static const unsigned char SEQ_GLOBAL_PARAM[] = {
	0xB0,
	0x03
};

static unsigned char SEQ_VREGOUT_SET[] = {
	0xD1,
	0xA2, 0x25, 0x44, 0x01, 0x0B, 0x00, 0x00, 0x40, 0x0D, 0x00,
	0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28
};

static const unsigned char SEQ_STANDBY_ON[] = {
	0x10
};

enum {
	GAMMA_2_2_30CD = 0,
	GAMMA_2_2_40CD,
	GAMMA_2_2_50CD,
	GAMMA_2_2_60CD,
	GAMMA_2_2_70CD,
	GAMMA_2_2_80cD,
	GAMMA_2_2_90CD,
	GAMMA_2_2_100CD,
	GAMMA_2_2_105CD,
	GAMMA_2_2_110CD,
	GAMMA_2_2_120CD,
	GAMMA_2_2_130CD,
	GAMMA_2_2_140CD,
	GAMMA_2_2_150CD,
	GAMMA_2_2_160CD,
	GAMMA_2_2_170CD,
	GAMMA_2_2_180CD,
	GAMMA_2_2_190CD,
	GAMMA_2_2_200CD,
	GAMMA_2_2_205CD,
	GAMMA_2_2_210CD,
	GAMMA_2_2_220CD,
	GAMMA_2_2_230CD,
	GAMMA_2_2_240CD,
	GAMMA_2_2_250CD = 24,
	GAMMA_2_2_MAX
};

enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_40P,
	ACL_STATUS_MAX
};

enum {
	ELVSS_28 = 0,
	ELVSS_34,
	ELVSS_40,
	ELVSS_44,
	ELVSS_STATUS_MAX,
};

const unsigned char SEQ_ACL_ON[] = {
	0xC0, 0x01,
};

const unsigned char SEQ_ACL_OFF[] = {
	0xC0, 0x00,
};

const unsigned char SEQ_ACL_CUTOFF_40[] = {
	0xC1,
	0x4D, 0x96, 0x1D, 0x00, 0x00,
	0x04, 0xFF, 0x00, 0x00, 0x03,
	0x1F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x21, 0x37,
	0x37, 0x37, 0x37, 0x37, 0x37,
	0x37, 0x37, 0x1D, 0x4D, 0x96
};

const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	SEQ_ACL_CUTOFF_40,
};

const unsigned char SEQ_ELVSS_ON[] = {
	0xB1,
	0x84, 0x15
};

const unsigned char SEQ_ELVSS_32[] = {
	0xB2,
	0x0B, 0x0B, 0x0B, 0x0B, 0x0B
};

const unsigned char SEQ_ELVSS_38[] = {
	0xB2,
	0x08, 0x08, 0x08, 0x08, 0x08
};

const unsigned char SEQ_ELVSS_40[] = {
	0xB2,
	0x04, 0x04, 0x04, 0x04, 0x04
};

const unsigned char SEQ_ELVSS_44[] = {
	0xB2,
	0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char *ELVSS_TABLE[ELVSS_STATUS_MAX] = {
	SEQ_ELVSS_32,
	SEQ_ELVSS_38,
	SEQ_ELVSS_40,
	SEQ_ELVSS_44,
};

#endif /* __S6E8AB0_PARAM_H__ */