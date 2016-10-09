#define PAYLOAD_PCMU 0
#define PAYLOAD_GSM 3
#define PAYLOAD_G723 4
#define PAYLOAD_PCMA 8
#define PAYLOAD_G722 9
#define PAYLOAD_G729 18
#define PAYLOAD_ILBC 97
#define PAYLOAD_SPEEX 98
#define PAYLOAD_CLEARMODE 100
#define PAYLOAD_SILK 301
#define PAYLOAD_SILK8 302
#define PAYLOAD_SILK12 303
#define PAYLOAD_SILK16 304
#define PAYLOAD_SILK24 305
#define PAYLOAD_ISAC 306
#define PAYLOAD_ISAC16 307
#define PAYLOAD_ISAC32 308
#define PAYLOAD_OPUS 311
#define PAYLOAD_OPUS8 312
#define PAYLOAD_OPUS12 313
#define PAYLOAD_OPUS16 314
#define PAYLOAD_OPUS24 315
#define PAYLOAD_OPUS48 316
#define PAYLOAD_AMR 320
#define PAYLOAD_AMRWB 321
#define PAYLOAD_G7221 331
#define PAYLOAD_G72218 331
#define PAYLOAD_G722112 332
#define PAYLOAD_G722116 333
#define PAYLOAD_G722124 334
#define PAYLOAD_G722132 335
#define PAYLOAD_G722148 336
#define PAYLOAD_XOPUS 337
#define PAYLOAD_XOPUS8 338
#define PAYLOAD_XOPUS12 339
#define PAYLOAD_XOPUS16 340
#define PAYLOAD_XOPUS24 341
#define PAYLOAD_XOPUS48 342
#define PAYLOAD_TELEVENT 400

inline const char *codec2text(int codec) {
	switch(codec) {
	case PAYLOAD_PCMU:
		return "G.711 ulaw";
	case PAYLOAD_GSM:
		return "GSM";
	case PAYLOAD_G723:
		return "G.723";
	case PAYLOAD_PCMA:
		return "G.711 alaw";
	case PAYLOAD_G722:
		return "G.722";
	case PAYLOAD_G729:
		return "G.729";
	case PAYLOAD_ILBC:
		return "iLBC";
	case PAYLOAD_SPEEX:
		return "speex";
	case PAYLOAD_CLEARMODE:
		return "clearmode";
	case PAYLOAD_SILK:
	case PAYLOAD_SILK8:
	case PAYLOAD_SILK12:
	case PAYLOAD_SILK16:
	case PAYLOAD_SILK24:
		return "SILK";
	case PAYLOAD_ISAC:
	case PAYLOAD_ISAC16:
	case PAYLOAD_ISAC32:
		return "iSAC";
	case PAYLOAD_OPUS:
	case PAYLOAD_OPUS8:
	case PAYLOAD_OPUS12:
	case PAYLOAD_OPUS16:
	case PAYLOAD_OPUS24:
	case PAYLOAD_OPUS48:
		return "OPUS";
	case PAYLOAD_AMR:
		return "amr";
	case PAYLOAD_AMRWB:
		return "amr-wb";
	case PAYLOAD_G72218:
	case PAYLOAD_G722112:
	case PAYLOAD_G722116:
	case PAYLOAD_G722124:
	case PAYLOAD_G722132:
	case PAYLOAD_G722148:
		return "G.722.1";
	case PAYLOAD_XOPUS:
	case PAYLOAD_XOPUS8:
	case PAYLOAD_XOPUS12:
	case PAYLOAD_XOPUS16:
	case PAYLOAD_XOPUS24:
	case PAYLOAD_XOPUS48:
		return "XOPUS";
	case PAYLOAD_TELEVENT:
		return "TELEPHONE EVENT";
	default:
		return "UNKNOWN CODEC NUMBER";
	}
}

#define USE_ILBC_ENHANCER	0
#define ILBC_MS			30
/* #define ILBC_MS                      20 */

#define ILBC_FRAME_LEN	50      /* apparently... */
#define ILBC_SAMPLES	240     /* 30ms at 8000 hz */

#define GSM_SAMPLES     160
#define GSM_FRAME_LEN   33
#define MSGSM_FRAME_LEN 65

#define BUFFER_SAMPLES	8000

#define CODEC_LEN 1

#define UNLINK_RAW 1

