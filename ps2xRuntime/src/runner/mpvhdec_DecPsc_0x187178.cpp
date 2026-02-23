#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_DecPsc
// Address: 0x187178 - 0x1877b4
void mpvhdec_DecPsc_0x187178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_DecPsc");


    ctx->pc = 0x187178u;

    // 0x187178: 0x27bdffa0
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18717c: 0x2403fffc
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x187180: 0xffb40040
    ctx->pc = 0x187180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x187184: 0x80c82d
    ctx->pc = 0x187184u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187188: 0xffb30030
    ctx->pc = 0x187188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18718c: 0x272a0188
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 25), 392));
    // 0x187190: 0xffb20020
    ctx->pc = 0x187190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x187194: 0xa0982d
    ctx->pc = 0x187194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187198: 0xffb00000
    ctx->pc = 0x187198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18719c: 0xe0902d
    ctx->pc = 0x18719cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871a0: 0xffbf0050
    ctx->pc = 0x1871a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1871a4: 0xc0802d
    ctx->pc = 0x1871a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871a8: 0xffb10010
    ctx->pc = 0x1871a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1871ac: 0x8e710000
    ctx->pc = 0x1871acu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1871b0: 0x26220004
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1871b4: 0x220a02d
    ctx->pc = 0x1871b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871b8: 0x437024
    ctx->pc = 0x1871b8u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1871bc: 0x25c2fffc
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x1871c0: 0x81cf0000
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1871c4: 0x25ce0001
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1871c8: 0x2221023
    ctx->pc = 0x1871c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1871cc: 0x91c30000
    ctx->pc = 0x1871ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1871d0: 0x2c0c0
    ctx->pc = 0x1871d0u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1871d4: 0x25ce0001
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1871d8: 0xf7a00
    ctx->pc = 0x1871d8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 8));
    // 0x1871dc: 0x91c40000
    ctx->pc = 0x1871dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1871e0: 0x1e37825
    ctx->pc = 0x1871e0u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1871e4: 0x25ce0001
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1871e8: 0xf7a00
    ctx->pc = 0x1871e8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 8));
    // 0x1871ec: 0x91c20000
    ctx->pc = 0x1871ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1871f0: 0x1e47825
    ctx->pc = 0x1871f0u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1871f4: 0x25ce0001
    ctx->pc = 0x1871f4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1871f8: 0xf7a00
    ctx->pc = 0x1871f8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 8));
    // 0x1871fc: 0x81cd0000
    ctx->pc = 0x1871fcu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187200: 0x1e27825
    ctx->pc = 0x187200u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x187204: 0x25ce0001
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187208: 0x30f7804
    ctx->pc = 0x187208u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 24) & 0x1F));
    // 0x18720c: 0x91c30000
    ctx->pc = 0x18720cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187210: 0xd6a00
    ctx->pc = 0x187210u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187214: 0x25ce0001
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187218: 0x2b040016
    ctx->pc = 0x187218u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), 22));
    // 0x18721c: 0x1a36825
    ctx->pc = 0x18721cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187220: 0x91c20000
    ctx->pc = 0x187220u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187224: 0x25ce0001
    ctx->pc = 0x187224u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187228: 0xd6a00
    ctx->pc = 0x187228u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18722c: 0x91c30000
    ctx->pc = 0x18722cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187230: 0x1a26825
    ctx->pc = 0x187230u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187234: 0xd6a00
    ctx->pc = 0x187234u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187238: 0x25ce0001
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18723c: 0x1480001d
    ctx->pc = 0x18723Cu;
    {
        const bool branch_taken_0x18723c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x187240u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        if (branch_taken_0x18723c) {
            ctx->pc = 0x1872B4u;
            goto label_1872b4;
        }
    }
    ctx->pc = 0x187244u;
    // 0x187244: 0x2718ffea
    ctx->pc = 0x187244u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967274));
    // 0x187248: 0x13000008
    ctx->pc = 0x187248u;
    {
        const bool branch_taken_0x187248 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x18724Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x187248) {
            ctx->pc = 0x18726Cu;
            goto label_18726c;
        }
    }
    ctx->pc = 0x187250u;
    // 0x187250: 0x581023
    ctx->pc = 0x187250u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x187254: 0x4d1006
    ctx->pc = 0x187254u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x187258: 0x1e27825
    ctx->pc = 0x187258u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x18725c: 0xf1d82
    ctx->pc = 0x18725cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 15), 22));
    // 0x187260: 0xad430014
    ctx->pc = 0x187260u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x187264: 0x10000004
    ctx->pc = 0x187264u;
    {
        const bool branch_taken_0x187264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187268u;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        if (branch_taken_0x187264) {
            ctx->pc = 0x187278u;
            goto label_187278;
        }
    }
    ctx->pc = 0x18726Cu;
label_18726c:
    // 0x18726c: 0xf1582
    ctx->pc = 0x18726cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 15), 22));
    // 0x187270: 0xad420014
    ctx->pc = 0x187270u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
    // 0x187274: 0x1a0782d
    ctx->pc = 0x187274u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_187278:
    // 0x187278: 0x81cd0000
    ctx->pc = 0x187278u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18727c: 0x25ce0001
    ctx->pc = 0x18727cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187280: 0x91c20000
    ctx->pc = 0x187280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187284: 0xd6a00
    ctx->pc = 0x187284u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187288: 0x25ce0001
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18728c: 0x1a26825
    ctx->pc = 0x18728cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187290: 0x91c30000
    ctx->pc = 0x187290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187294: 0x25ce0001
    ctx->pc = 0x187294u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187298: 0xd6a00
    ctx->pc = 0x187298u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18729c: 0x91c20000
    ctx->pc = 0x18729cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1872a0: 0x1a36825
    ctx->pc = 0x1872a0u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1872a4: 0xd6a00
    ctx->pc = 0x1872a4u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1872a8: 0x25ce0001
    ctx->pc = 0x1872a8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1872ac: 0x10000005
    ctx->pc = 0x1872ACu;
    {
        const bool branch_taken_0x1872ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1872B0u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x1872ac) {
            ctx->pc = 0x1872C4u;
            goto label_1872c4;
        }
    }
    ctx->pc = 0x1872B4u;
label_1872b4:
    // 0x1872b4: 0xf1582
    ctx->pc = 0x1872b4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 15), 22));
    // 0x1872b8: 0x2718000a
    ctx->pc = 0x1872b8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 10));
    // 0x1872bc: 0xad420014
    ctx->pc = 0x1872bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
    // 0x1872c0: 0xf7a80
    ctx->pc = 0x1872c0u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 10));
label_1872c4:
    // 0x1872c4: 0x2b02001d
    ctx->pc = 0x1872c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 29));
    // 0x1872c8: 0x1440001a
    ctx->pc = 0x1872C8u;
    {
        const bool branch_taken_0x1872c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1872CCu;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
        if (branch_taken_0x1872c8) {
            ctx->pc = 0x187334u;
            goto label_187334;
        }
    }
    ctx->pc = 0x1872D0u;
    // 0x1872d0: 0x2718ffe3
    ctx->pc = 0x1872d0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967267));
    // 0x1872d4: 0x13000007
    ctx->pc = 0x1872D4u;
    {
        const bool branch_taken_0x1872d4 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x1872D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1872d4) {
            ctx->pc = 0x1872F4u;
            goto label_1872f4;
        }
    }
    ctx->pc = 0x1872DCu;
    // 0x1872dc: 0x581023
    ctx->pc = 0x1872dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1872e0: 0x4d1006
    ctx->pc = 0x1872e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1872e4: 0x1e27825
    ctx->pc = 0x1872e4u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1872e8: 0xf2742
    ctx->pc = 0x1872e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
    // 0x1872ec: 0x10000002
    ctx->pc = 0x1872ECu;
    {
        const bool branch_taken_0x1872ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1872F0u;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        if (branch_taken_0x1872ec) {
            ctx->pc = 0x1872F8u;
            goto label_1872f8;
        }
    }
    ctx->pc = 0x1872F4u;
label_1872f4:
    // 0x1872f4: 0x1a0782d
    ctx->pc = 0x1872f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1872f8:
    // 0x1872f8: 0x81cd0000
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1872fc: 0x25ce0001
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187300: 0x91c20000
    ctx->pc = 0x187300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187304: 0xd6a00
    ctx->pc = 0x187304u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187308: 0x25ce0001
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18730c: 0x1a26825
    ctx->pc = 0x18730cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187310: 0x91c30000
    ctx->pc = 0x187310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187314: 0x25ce0001
    ctx->pc = 0x187314u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187318: 0xd6a00
    ctx->pc = 0x187318u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18731c: 0x91c20000
    ctx->pc = 0x18731cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187320: 0x1a36825
    ctx->pc = 0x187320u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187324: 0xd6a00
    ctx->pc = 0x187324u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187328: 0x25ce0001
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18732c: 0x10000003
    ctx->pc = 0x18732Cu;
    {
        const bool branch_taken_0x18732c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187330u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x18732c) {
            ctx->pc = 0x18733Cu;
            goto label_18733c;
        }
    }
    ctx->pc = 0x187334u;
label_187334:
    // 0x187334: 0x27180003
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 3));
    // 0x187338: 0xf78c0
    ctx->pc = 0x187338u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 3));
label_18733c:
    // 0x18733c: 0x2b020010
    ctx->pc = 0x18733cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 16));
    // 0x187340: 0x1440001d
    ctx->pc = 0x187340u;
    {
        const bool branch_taken_0x187340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187344u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
        if (branch_taken_0x187340) {
            ctx->pc = 0x1873B8u;
            goto label_1873b8;
        }
    }
    ctx->pc = 0x187348u;
    // 0x187348: 0x2718fff0
    ctx->pc = 0x187348u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967280));
    // 0x18734c: 0x13000008
    ctx->pc = 0x18734Cu;
    {
        const bool branch_taken_0x18734c = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x187350u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x18734c) {
            ctx->pc = 0x187370u;
            goto label_187370;
        }
    }
    ctx->pc = 0x187354u;
    // 0x187354: 0x581023
    ctx->pc = 0x187354u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x187358: 0x4d1006
    ctx->pc = 0x187358u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x18735c: 0x1e27825
    ctx->pc = 0x18735cu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x187360: 0xf1c02
    ctx->pc = 0x187360u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 15), 16));
    // 0x187364: 0xaf230228
    ctx->pc = 0x187364u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 552), GPR_U32(ctx, 3));
    // 0x187368: 0x10000004
    ctx->pc = 0x187368u;
    {
        const bool branch_taken_0x187368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18736Cu;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        if (branch_taken_0x187368) {
            ctx->pc = 0x18737Cu;
            goto label_18737c;
        }
    }
    ctx->pc = 0x187370u;
label_187370:
    // 0x187370: 0xf1402
    ctx->pc = 0x187370u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 15), 16));
    // 0x187374: 0xaf220228
    ctx->pc = 0x187374u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 552), GPR_U32(ctx, 2));
    // 0x187378: 0x1a0782d
    ctx->pc = 0x187378u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_18737c:
    // 0x18737c: 0x81cd0000
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187380: 0x25ce0001
    ctx->pc = 0x187380u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187384: 0x91c20000
    ctx->pc = 0x187384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187388: 0xd6a00
    ctx->pc = 0x187388u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18738c: 0x25ce0001
    ctx->pc = 0x18738cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187390: 0x1a26825
    ctx->pc = 0x187390u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187394: 0x91c30000
    ctx->pc = 0x187394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187398: 0x25ce0001
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18739c: 0xd6a00
    ctx->pc = 0x18739cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1873a0: 0x91c20000
    ctx->pc = 0x1873a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1873a4: 0x1a36825
    ctx->pc = 0x1873a4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1873a8: 0xd6a00
    ctx->pc = 0x1873a8u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1873ac: 0x25ce0001
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1873b0: 0x10000005
    ctx->pc = 0x1873B0u;
    {
        const bool branch_taken_0x1873b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1873B4u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x1873b0) {
            ctx->pc = 0x1873C8u;
            goto label_1873c8;
        }
    }
    ctx->pc = 0x1873B8u;
label_1873b8:
    // 0x1873b8: 0xf1402
    ctx->pc = 0x1873b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 15), 16));
    // 0x1873bc: 0x27180010
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 16));
    // 0x1873c0: 0xaf220228
    ctx->pc = 0x1873c0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 552), GPR_U32(ctx, 2));
    // 0x1873c4: 0xf7c00
    ctx->pc = 0x1873c4u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 16));
label_1873c8:
    // 0x1873c8: 0x8d4a0018
    ctx->pc = 0x1873c8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1873cc: 0x2542fffe
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x1873d0: 0x2c420002
    ctx->pc = 0x1873d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1873d4: 0x1040003e
    ctx->pc = 0x1873D4u;
    {
        const bool branch_taken_0x1873d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1873D8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 15), 31));
        if (branch_taken_0x1873d4) {
            ctx->pc = 0x1874D0u;
            goto label_1874d0;
        }
    }
    ctx->pc = 0x1873DCu;
    // 0x1873dc: 0x27250254
    ctx->pc = 0x1873dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 25), 596));
    // 0x1873e0: 0x2402001f
    ctx->pc = 0x1873e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1873e4: 0x17020012
    ctx->pc = 0x1873E4u;
    {
        const bool branch_taken_0x1873e4 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 2));
        ctx->pc = 0x1873E8u;
        WRITE32(ADD32(GPR_U32(ctx, 25), 596), GPR_U32(ctx, 3));
        if (branch_taken_0x1873e4) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x1873ECu;
    // 0x1873ec: 0x1a0782d
    ctx->pc = 0x1873ecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f0: 0xc02d
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f4: 0x81cd0000
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1873f8: 0x25ce0001
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1873fc: 0x91c20000
    ctx->pc = 0x1873fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187400: 0xd6a00
    ctx->pc = 0x187400u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187404: 0x25ce0001
    ctx->pc = 0x187404u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187408: 0x1a26825
    ctx->pc = 0x187408u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x18740c: 0x91c30000
    ctx->pc = 0x18740cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187410: 0x25ce0001
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187414: 0xd6a00
    ctx->pc = 0x187414u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187418: 0x91c20000
    ctx->pc = 0x187418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18741c: 0x1a36825
    ctx->pc = 0x18741cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187420: 0xd6a00
    ctx->pc = 0x187420u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187424: 0x25ce0001
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187428: 0x10000003
    ctx->pc = 0x187428u;
    {
        const bool branch_taken_0x187428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18742Cu;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x187428) {
            ctx->pc = 0x187438u;
            goto label_187438;
        }
    }
    ctx->pc = 0x187430u;
label_187430:
    // 0x187430: 0x27180001
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
    // 0x187434: 0xf7840
    ctx->pc = 0x187434u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 1));
label_187438:
    // 0x187438: 0x2b02001d
    ctx->pc = 0x187438u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 29));
    // 0x18743c: 0x1440001a
    ctx->pc = 0x18743Cu;
    {
        const bool branch_taken_0x18743c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187440u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
        if (branch_taken_0x18743c) {
            ctx->pc = 0x1874A8u;
            goto label_1874a8;
        }
    }
    ctx->pc = 0x187444u;
    // 0x187444: 0x2718ffe3
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967267));
    // 0x187448: 0x13000007
    ctx->pc = 0x187448u;
    {
        const bool branch_taken_0x187448 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x18744Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x187448) {
            ctx->pc = 0x187468u;
            goto label_187468;
        }
    }
    ctx->pc = 0x187450u;
    // 0x187450: 0x581023
    ctx->pc = 0x187450u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x187454: 0x4d1006
    ctx->pc = 0x187454u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x187458: 0x1e27825
    ctx->pc = 0x187458u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x18745c: 0xf2742
    ctx->pc = 0x18745cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
    // 0x187460: 0x10000002
    ctx->pc = 0x187460u;
    {
        const bool branch_taken_0x187460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187464u;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        if (branch_taken_0x187460) {
            ctx->pc = 0x18746Cu;
            goto label_18746c;
        }
    }
    ctx->pc = 0x187468u;
label_187468:
    // 0x187468: 0x1a0782d
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_18746c:
    // 0x18746c: 0x81cd0000
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187470: 0x25ce0001
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187474: 0x91c20000
    ctx->pc = 0x187474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187478: 0xd6a00
    ctx->pc = 0x187478u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18747c: 0x25ce0001
    ctx->pc = 0x18747cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187480: 0x1a26825
    ctx->pc = 0x187480u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187484: 0x91c30000
    ctx->pc = 0x187484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187488: 0x25ce0001
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18748c: 0xd6a00
    ctx->pc = 0x18748cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187490: 0x91c20000
    ctx->pc = 0x187490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187494: 0x1a36825
    ctx->pc = 0x187494u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187498: 0xd6a00
    ctx->pc = 0x187498u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18749c: 0x25ce0001
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1874a0: 0x10000003
    ctx->pc = 0x1874A0u;
    {
        const bool branch_taken_0x1874a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1874A4u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x1874a0) {
            ctx->pc = 0x1874B0u;
            goto label_1874b0;
        }
    }
    ctx->pc = 0x1874A8u;
label_1874a8:
    // 0x1874a8: 0x27180003
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 3));
    // 0x1874ac: 0xf78c0
    ctx->pc = 0x1874acu;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 3));
label_1874b0:
    // 0x1874b0: 0x2484ffff
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1874b4: 0x2402001b
    ctx->pc = 0x1874b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x1874b8: 0x24030001
    ctx->pc = 0x1874b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1874bc: 0x441023
    ctx->pc = 0x1874bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1874c0: 0x831804
    ctx->pc = 0x1874c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1874c4: 0xaca20008
    ctx->pc = 0x1874c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1874c8: 0xaca3000c
    ctx->pc = 0x1874c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1874cc: 0xaca40004
    ctx->pc = 0x1874ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1874d0:
    // 0x1874d0: 0x24020003
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1874d4: 0x5542004a
    ctx->pc = 0x1874D4u;
    {
        const bool branch_taken_0x1874d4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 2));
        if (branch_taken_0x1874d4) {
            ctx->pc = 0x1874D8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 384)));
            ctx->pc = 0x187600u;
            goto label_187600;
        }
    }
    ctx->pc = 0x1874DCu;
    // 0x1874dc: 0xf1fc2
    ctx->pc = 0x1874dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 15), 31));
    // 0x1874e0: 0x27250278
    ctx->pc = 0x1874e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 25), 632));
    // 0x1874e4: 0x2402001f
    ctx->pc = 0x1874e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1874e8: 0x17020012
    ctx->pc = 0x1874E8u;
    {
        const bool branch_taken_0x1874e8 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 2));
        ctx->pc = 0x1874ECu;
        WRITE32(ADD32(GPR_U32(ctx, 25), 632), GPR_U32(ctx, 3));
        if (branch_taken_0x1874e8) {
            ctx->pc = 0x187534u;
            goto label_187534;
        }
    }
    ctx->pc = 0x1874F0u;
    // 0x1874f0: 0x1a0782d
    ctx->pc = 0x1874f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874f4: 0xc02d
    ctx->pc = 0x1874f4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874f8: 0x81cd0000
    ctx->pc = 0x1874f8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1874fc: 0x25ce0001
    ctx->pc = 0x1874fcu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187500: 0x91c20000
    ctx->pc = 0x187500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187504: 0xd6a00
    ctx->pc = 0x187504u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187508: 0x25ce0001
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18750c: 0x1a26825
    ctx->pc = 0x18750cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187510: 0x91c30000
    ctx->pc = 0x187510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187514: 0x25ce0001
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187518: 0xd6a00
    ctx->pc = 0x187518u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18751c: 0x91c20000
    ctx->pc = 0x18751cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187520: 0x1a36825
    ctx->pc = 0x187520u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187524: 0xd6a00
    ctx->pc = 0x187524u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187528: 0x25ce0001
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x18752c: 0x10000003
    ctx->pc = 0x18752Cu;
    {
        const bool branch_taken_0x18752c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187530u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x18752c) {
            ctx->pc = 0x18753Cu;
            goto label_18753c;
        }
    }
    ctx->pc = 0x187534u;
label_187534:
    // 0x187534: 0x27180001
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
    // 0x187538: 0xf7840
    ctx->pc = 0x187538u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 1));
label_18753c:
    // 0x18753c: 0x2b02001d
    ctx->pc = 0x18753cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 29));
    // 0x187540: 0x14400024
    ctx->pc = 0x187540u;
    {
        const bool branch_taken_0x187540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187544u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
        if (branch_taken_0x187540) {
            ctx->pc = 0x1875D4u;
            goto label_1875d4;
        }
    }
    ctx->pc = 0x187548u;
    // 0x187548: 0x2718ffe3
    ctx->pc = 0x187548u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967267));
    // 0x18754c: 0x13000007
    ctx->pc = 0x18754Cu;
    {
        const bool branch_taken_0x18754c = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x187550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18754c) {
            ctx->pc = 0x18756Cu;
            goto label_18756c;
        }
    }
    ctx->pc = 0x187554u;
    // 0x187554: 0x581023
    ctx->pc = 0x187554u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x187558: 0x4d1006
    ctx->pc = 0x187558u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x18755c: 0x1e27825
    ctx->pc = 0x18755cu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x187560: 0xf2742
    ctx->pc = 0x187560u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 15), 29));
    // 0x187564: 0x10000002
    ctx->pc = 0x187564u;
    {
        const bool branch_taken_0x187564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187568u;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        if (branch_taken_0x187564) {
            ctx->pc = 0x187570u;
            goto label_187570;
        }
    }
    ctx->pc = 0x18756Cu;
label_18756c:
    // 0x18756c: 0x1a0782d
    ctx->pc = 0x18756cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_187570:
    // 0x187570: 0x81cd0000
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187574: 0x25ce0001
    ctx->pc = 0x187574u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187578: 0x91c20000
    ctx->pc = 0x187578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18757c: 0xd6a00
    ctx->pc = 0x18757cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187580: 0x25ce0001
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187584: 0x1a26825
    ctx->pc = 0x187584u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x187588: 0x91c30000
    ctx->pc = 0x187588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18758c: 0x25ce0001
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187590: 0xd6a00
    ctx->pc = 0x187590u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187594: 0x91c20000
    ctx->pc = 0x187594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187598: 0x1a36825
    ctx->pc = 0x187598u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x18759c: 0xd6a00
    ctx->pc = 0x18759cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1875a0: 0x25ce0001
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1875a4: 0x1000000d
    ctx->pc = 0x1875A4u;
    {
        const bool branch_taken_0x1875a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1875A8u;
        SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x1875a4) {
            ctx->pc = 0x1875DCu;
            goto label_1875dc;
        }
    }
    ctx->pc = 0x1875ACu;
label_1875ac:
    // 0x1875ac: 0x3c02ffff
    ctx->pc = 0x1875acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1875b0: 0xae430000
    ctx->pc = 0x1875b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1875b4: 0x3442fffd
    ctx->pc = 0x1875b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x1875b8: 0x8e030000
    ctx->pc = 0x1875b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1875bc: 0xae000000
    ctx->pc = 0x1875bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1875c0: 0x2831821
    ctx->pc = 0x1875c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1875c4: 0x10000073
    ctx->pc = 0x1875C4u;
    {
        const bool branch_taken_0x1875c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1875C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1875c4) {
            ctx->pc = 0x187794u;
            goto label_187794;
        }
    }
    ctx->pc = 0x1875CCu;
label_1875cc:
    // 0x1875cc: 0x10000060
    ctx->pc = 0x1875CCu;
    {
        const bool branch_taken_0x1875cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1875D0u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4));
        if (branch_taken_0x1875cc) {
            ctx->pc = 0x187750u;
            goto label_187750;
        }
    }
    ctx->pc = 0x1875D4u;
label_1875d4:
    // 0x1875d4: 0x27180003
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 3));
    // 0x1875d8: 0xf78c0
    ctx->pc = 0x1875d8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 3));
label_1875dc:
    // 0x1875dc: 0x2484ffff
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1875e0: 0x2402001b
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x1875e4: 0x24030001
    ctx->pc = 0x1875e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1875e8: 0x441023
    ctx->pc = 0x1875e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1875ec: 0x831804
    ctx->pc = 0x1875ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1875f0: 0xaca20008
    ctx->pc = 0x1875f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1875f4: 0xaca3000c
    ctx->pc = 0x1875f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1875f8: 0xaca40004
    ctx->pc = 0x1875f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1875fc: 0x8f220180
    ctx->pc = 0x1875fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 384)));
label_187600:
    // 0x187600: 0x24050014
    ctx->pc = 0x187600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x187604: 0x8f290178
    ctx->pc = 0x187604u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 25), 376)));
    // 0x187608: 0x240b0028
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 40));
    // 0x18760c: 0x38420003
    ctx->pc = 0x18760cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x187610: 0xa5080
    ctx->pc = 0x187610u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x187614: 0x2102b
    ctx->pc = 0x187614u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x187618: 0x12b6018
    ctx->pc = 0x187618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x18761c: 0x452018
    ctx->pc = 0x18761cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x187620: 0x3c07002c
    ctx->pc = 0x187620u;
    SET_GPR_U32(ctx, 7, ((uint32_t)44 << 16));
    // 0x187624: 0x3c08002c
    ctx->pc = 0x187624u;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x187628: 0x3c03002c
    ctx->pc = 0x187628u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x18762c: 0x3c05002c
    ctx->pc = 0x18762cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x187630: 0x3c06002c
    ctx->pc = 0x187630u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x187634: 0x24e7c940
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294953280));
    // 0x187638: 0x2508c968
    ctx->pc = 0x187638u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294953320));
    // 0x18763c: 0x8a1021
    ctx->pc = 0x18763cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x187640: 0x2463c888
    ctx->pc = 0x187640u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953096));
    // 0x187644: 0x3c04002c
    ctx->pc = 0x187644u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x187648: 0x1824821
    ctx->pc = 0x187648u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x18764c: 0x2484c8a0
    ctx->pc = 0x18764cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953120));
    // 0x187650: 0x24a5c8c8
    ctx->pc = 0x187650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953160));
    // 0x187654: 0x442021
    ctx->pc = 0x187654u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187658: 0x24c6c918
    ctx->pc = 0x187658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294953240));
    // 0x18765c: 0x484021
    ctx->pc = 0x18765cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x187660: 0x473821
    ctx->pc = 0x187660u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x187664: 0x1435021
    ctx->pc = 0x187664u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x187668: 0x461021
    ctx->pc = 0x187668u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18766c: 0x1254821
    ctx->pc = 0x18766cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x187670: 0x8c4c0000
    ctx->pc = 0x187670u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187674: 0x8d4b0000
    ctx->pc = 0x187674u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x187678: 0x3c030018
    ctx->pc = 0x187678u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x18767c: 0x8c850000
    ctx->pc = 0x18767cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187680: 0x3c020018
    ctx->pc = 0x187680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x187684: 0x8d2a0000
    ctx->pc = 0x187684u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x187688: 0x246332c8
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 13000));
    // 0x18768c: 0x8ce60000
    ctx->pc = 0x18768cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187690: 0x24423490
    ctx->pc = 0x187690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13456));
    // 0x187694: 0x8d040000
    ctx->pc = 0x187694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x187698: 0xaf2b022c
    ctx->pc = 0x187698u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 556), GPR_U32(ctx, 11));
    // 0x18769c: 0xaf250230
    ctx->pc = 0x18769cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 560), GPR_U32(ctx, 5));
    // 0x1876a0: 0xaf230234
    ctx->pc = 0x1876a0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 564), GPR_U32(ctx, 3));
    // 0x1876a4: 0xaf220238
    ctx->pc = 0x1876a4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 568), GPR_U32(ctx, 2));
    // 0x1876a8: 0xaf2a023c
    ctx->pc = 0x1876a8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 572), GPR_U32(ctx, 10));
    // 0x1876ac: 0xaf260244
    ctx->pc = 0x1876acu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 580), GPR_U32(ctx, 6));
    // 0x1876b0: 0xaf24024c
    ctx->pc = 0x1876b0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 588), GPR_U32(ctx, 4));
    // 0x1876b4: 0xaf2c0240
    ctx->pc = 0x1876b4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 576), GPR_U32(ctx, 12));
    // 0x1876b8: 0xaf2c0248
    ctx->pc = 0x1876b8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 584), GPR_U32(ctx, 12));
    // 0x1876bc: 0x1000001e
    ctx->pc = 0x1876BCu;
    {
        const bool branch_taken_0x1876bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1876C0u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x1876bc) {
            ctx->pc = 0x187738u;
            goto label_187738;
        }
    }
    ctx->pc = 0x1876C4u;
    // 0x1876c4: 0x0
    ctx->pc = 0x1876c4u;
    // NOP
label_1876c8:
    // 0x1876c8: 0x2b020020
    ctx->pc = 0x1876c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 32));
    // 0x1876cc: 0x14400011
    ctx->pc = 0x1876CCu;
    {
        const bool branch_taken_0x1876cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1876D0u;
        SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 9));
        if (branch_taken_0x1876cc) {
            ctx->pc = 0x187714u;
            goto label_187714;
        }
    }
    ctx->pc = 0x1876D4u;
    // 0x1876d4: 0x2718ffe0
    ctx->pc = 0x1876d4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967264));
    // 0x1876d8: 0x30d7804
    ctx->pc = 0x1876d8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
    // 0x1876dc: 0x81cd0000
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1876e0: 0x25ce0001
    ctx->pc = 0x1876e0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1876e4: 0x91c20000
    ctx->pc = 0x1876e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1876e8: 0xd6a00
    ctx->pc = 0x1876e8u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1876ec: 0x25ce0001
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1876f0: 0x1a26825
    ctx->pc = 0x1876f0u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1876f4: 0x91c30000
    ctx->pc = 0x1876f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1876f8: 0x25ce0001
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1876fc: 0xd6a00
    ctx->pc = 0x1876fcu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x187700: 0x91c20000
    ctx->pc = 0x187700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x187704: 0x1a36825
    ctx->pc = 0x187704u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x187708: 0xd6a00
    ctx->pc = 0x187708u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x18770c: 0x25ce0001
    ctx->pc = 0x18770cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
    // 0x187710: 0x1a26825
    ctx->pc = 0x187710u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_187714:
    // 0x187714: 0x27020007
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 7));
    // 0x187718: 0x8e030000
    ctx->pc = 0x187718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18771c: 0x210c3
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x187720: 0x2442fff8
    ctx->pc = 0x187720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x187724: 0x1c21021
    ctx->pc = 0x187724u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x187728: 0x514823
    ctx->pc = 0x187728u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18772c: 0x123102a
    ctx->pc = 0x18772cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x187730: 0x5040ff9e
    ctx->pc = 0x187730u;
    {
        const bool branch_taken_0x187730 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187730) {
            ctx->pc = 0x187734u;
            SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
            ctx->pc = 0x1875ACu;
            goto label_1875ac;
        }
    }
    ctx->pc = 0x187738u;
label_187738:
    // 0x187738: 0x5e2ffe3
    ctx->pc = 0x187738u;
    {
        const bool branch_taken_0x187738 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x187738) {
            ctx->pc = 0x18773Cu;
            SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 9));
            ctx->pc = 0x1876C8u;
            goto label_1876c8;
        }
    }
    ctx->pc = 0x187740u;
    // 0x187740: 0x27180001
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
    // 0x187744: 0x2b020020
    ctx->pc = 0x187744u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 24), 32));
    // 0x187748: 0x5040ffa0
    ctx->pc = 0x187748u;
    {
        const bool branch_taken_0x187748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187748) {
            ctx->pc = 0x18774Cu;
            SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967264));
            ctx->pc = 0x1875CCu;
            goto label_1875cc;
        }
    }
    ctx->pc = 0x187750u;
label_187750:
    // 0x187750: 0x27020007
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 7));
    // 0x187754: 0x320202d
    ctx->pc = 0x187754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187758: 0x210c3
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18775c: 0x260282d
    ctx->pc = 0x18775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187760: 0x2442fff8
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x187764: 0x200302d
    ctx->pc = 0x187764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187768: 0x1c21021
    ctx->pc = 0x187768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x18776c: 0x240382d
    ctx->pc = 0x18776cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187770: 0x514823
    ctx->pc = 0x187770u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x187774: 0xae620000
    ctx->pc = 0x187774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x187778: 0x1091821
    ctx->pc = 0x187778u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x18777c: 0xae430000
    ctx->pc = 0x18777cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x187780: 0x24080002
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x187784: 0x8e020000
    ctx->pc = 0x187784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187788: 0x491023
    ctx->pc = 0x187788u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18778c: 0xc061dee
    ctx->pc = 0x18778Cu;
    SET_GPR_U32(ctx, 31, 0x187794u);
    ctx->pc = 0x187790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1877B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_GoNextLayer_0x1877b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187794u; }
        else if (ctx->pc != 0x187794u) { ctx->pc = 0x187794u; }
    }
    if (ctx->pc != 0x187794u) { return; }
    ctx->pc = 0x187794u;
label_187794:
    // 0x187794: 0xdfbf0050
    ctx->pc = 0x187794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187798: 0xdfb40040
    ctx->pc = 0x187798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18779c: 0xdfb30030
    ctx->pc = 0x18779cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1877a0: 0xdfb20020
    ctx->pc = 0x1877a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1877a4: 0xdfb10010
    ctx->pc = 0x1877a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1877a8: 0xdfb00000
    ctx->pc = 0x1877a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1877ac: 0x3e00008
    ctx->pc = 0x1877ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1877B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18726Cu: goto label_18726c;
            case 0x187278u: goto label_187278;
            case 0x1872B4u: goto label_1872b4;
            case 0x1872C4u: goto label_1872c4;
            case 0x1872F4u: goto label_1872f4;
            case 0x1872F8u: goto label_1872f8;
            case 0x187334u: goto label_187334;
            case 0x18733Cu: goto label_18733c;
            case 0x187370u: goto label_187370;
            case 0x18737Cu: goto label_18737c;
            case 0x1873B8u: goto label_1873b8;
            case 0x1873C8u: goto label_1873c8;
            case 0x187430u: goto label_187430;
            case 0x187438u: goto label_187438;
            case 0x187468u: goto label_187468;
            case 0x18746Cu: goto label_18746c;
            case 0x1874A8u: goto label_1874a8;
            case 0x1874B0u: goto label_1874b0;
            case 0x1874D0u: goto label_1874d0;
            case 0x187534u: goto label_187534;
            case 0x18753Cu: goto label_18753c;
            case 0x18756Cu: goto label_18756c;
            case 0x187570u: goto label_187570;
            case 0x1875ACu: goto label_1875ac;
            case 0x1875CCu: goto label_1875cc;
            case 0x1875D4u: goto label_1875d4;
            case 0x1875DCu: goto label_1875dc;
            case 0x187600u: goto label_187600;
            case 0x1876C8u: goto label_1876c8;
            case 0x187714u: goto label_187714;
            case 0x187738u: goto label_187738;
            case 0x187750u: goto label_187750;
            case 0x187794u: goto label_187794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1877B4u;
}
