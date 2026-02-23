#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvbdec_IntraAc
// Address: 0x182fb8 - 0x1832c4
void mpvbdec_IntraAc_0x182fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvbdec_IntraAc");


    ctx->pc = 0x182fb8u;

    // 0x182fb8: 0x80582d
    ctx->pc = 0x182fb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fbc: 0xa0402d
    ctx->pc = 0x182fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fc0: 0x8d6d0000
    ctx->pc = 0x182fc0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182fc4: 0x240fffff
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182fc8: 0x8d690004
    ctx->pc = 0x182fc8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x182fcc: 0x240e0001
    ctx->pc = 0x182fccu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182fd0: 0x8d6c0008
    ctx->pc = 0x182fd0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x182fd4: 0x10000021
    ctx->pc = 0x182FD4u;
    {
        const bool branch_taken_0x182fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182FD8u;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 11), 12)));
        if (branch_taken_0x182fd4) {
            ctx->pc = 0x18305Cu;
            goto label_18305c;
        }
    }
    ctx->pc = 0x182FDCu;
    // 0x182fdc: 0x0
    ctx->pc = 0x182fdcu;
    // NOP
label_182fe0:
    // 0x182fe0: 0x24420001
    ctx->pc = 0x182fe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x182fe4: 0x8d050004
    ctx->pc = 0x182fe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x182fe8: 0x621821
    ctx->pc = 0x182fe8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182fec: 0x8d040030
    ctx->pc = 0x182fecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x182ff0: 0xad030018
    ctx->pc = 0x182ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x182ff4: 0x52840
    ctx->pc = 0x182ff4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x182ff8: 0x8d060024
    ctx->pc = 0x182ff8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x182ffc: 0xa42821
    ctx->pc = 0x182ffcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x183000: 0x80620000
    ctx->pc = 0x183000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183004: 0x8d040020
    ctx->pc = 0x183004u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x183008: 0xa62818
    ctx->pc = 0x183008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x18300c: 0xad020014
    ctx->pc = 0x18300cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x183010: 0x23040
    ctx->pc = 0x183010u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x183014: 0x822021
    ctx->pc = 0x183014u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x183018: 0x8d630034
    ctx->pc = 0x183018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x18301c: 0x90820000
    ctx->pc = 0x18301cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183020: 0xc31821
    ctx->pc = 0x183020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x183024: 0x8d070008
    ctx->pc = 0x183024u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x183028: 0xa22818
    ctx->pc = 0x183028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x18302c: 0x84640000
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183030: 0x8d02001c
    ctx->pc = 0x183030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x183034: 0xc23021
    ctx->pc = 0x183034u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x183038: 0x51103
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x18303c: 0x2442ffff
    ctx->pc = 0x18303cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183040: 0x34420001
    ctx->pc = 0x183040u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x183044: 0x21823
    ctx->pc = 0x183044u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x183048: 0x67100b
    ctx->pc = 0x183048u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x18304c: 0x442018
    ctx->pc = 0x18304cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x183050: 0x24840400
    ctx->pc = 0x183050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1024));
    // 0x183054: 0x422c3
    ctx->pc = 0x183054u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x183058: 0xa4c40000
    ctx->pc = 0x183058u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_18305c:
    // 0x18305c: 0x11800004
    ctx->pc = 0x18305Cu;
    {
        const bool branch_taken_0x18305c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x183060u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18305c) {
            ctx->pc = 0x183070u;
            goto label_183070;
        }
    }
    ctx->pc = 0x183064u;
    // 0x183064: 0xc1023
    ctx->pc = 0x183064u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x183068: 0x491006
    ctx->pc = 0x183068u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x18306c: 0x1a21025
    ctx->pc = 0x18306cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_183070:
    // 0x183070: 0x40282d
    ctx->pc = 0x183070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183074: 0x4a1000f
    ctx->pc = 0x183074u;
    {
        const bool branch_taken_0x183074 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x183078u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x183074) {
            ctx->pc = 0x1830B4u;
            goto label_1830b4;
        }
    }
    ctx->pc = 0x18307Cu;
    // 0x18307c: 0x4a00004
    ctx->pc = 0x18307Cu;
    {
        const bool branch_taken_0x18307c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x183080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x18307c) {
            ctx->pc = 0x183090u;
            goto label_183090;
        }
    }
    ctx->pc = 0x183084u;
    // 0x183084: 0xad0f0000
    ctx->pc = 0x183084u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x183088: 0x1000006a
    ctx->pc = 0x183088u;
    {
        const bool branch_taken_0x183088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18308Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x183088) {
            ctx->pc = 0x183234u;
            goto label_183234;
        }
    }
    ctx->pc = 0x183090u;
label_183090:
    // 0x183090: 0x52840
    ctx->pc = 0x183090u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x183094: 0x4a30002
    ctx->pc = 0x183094u;
    {
        const bool branch_taken_0x183094 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x183094) {
            ctx->pc = 0x183098u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x1830A0u;
            goto label_1830a0;
        }
    }
    ctx->pc = 0x18309Cu;
    // 0x18309c: 0xad0e0008
    ctx->pc = 0x18309cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 14));
label_1830a0:
    // 0x1830a0: 0x24020003
    ctx->pc = 0x1830a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1830a4: 0xad0e0004
    ctx->pc = 0x1830a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 14));
    // 0x1830a8: 0xad02000c
    ctx->pc = 0x1830a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1830ac: 0x10000061
    ctx->pc = 0x1830ACu;
    {
        const bool branch_taken_0x1830ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1830B0u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1830ac) {
            ctx->pc = 0x183234u;
            goto label_183234;
        }
    }
    ctx->pc = 0x1830B4u;
label_1830b4:
    // 0x1830b4: 0x53602
    ctx->pc = 0x1830b4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 5), 24));
    // 0x1830b8: 0x2cc20008
    ctx->pc = 0x1830b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x1830bc: 0x1440002b
    ctx->pc = 0x1830BCu;
    {
        const bool branch_taken_0x1830bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1830C0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1830bc) {
            ctx->pc = 0x18316Cu;
            goto label_18316c;
        }
    }
    ctx->pc = 0x1830C4u;
    // 0x1830c4: 0x8d630010
    ctx->pc = 0x1830c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1830c8: 0x51642
    ctx->pc = 0x1830c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 25));
    // 0x1830cc: 0x21080
    ctx->pc = 0x1830ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1830d0: 0x24040040
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1830d4: 0x431021
    ctx->pc = 0x1830d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1830d8: 0x8c460000
    ctx->pc = 0x1830d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1830dc: 0x30c300ff
    ctx->pc = 0x1830dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x1830e0: 0x1064000c
    ctx->pc = 0x1830E0u;
    {
        const bool branch_taken_0x1830e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1830E4u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1830e0) {
            ctx->pc = 0x183114u;
            goto label_183114;
        }
    }
    ctx->pc = 0x1830E8u;
    // 0x1830e8: 0x62402
    ctx->pc = 0x1830e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 6), 16));
    // 0x1830ec: 0x24020021
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1830f0: 0x441023
    ctx->pc = 0x1830f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1830f4: 0x61c00
    ctx->pc = 0x1830f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 16));
    // 0x1830f8: 0x452806
    ctx->pc = 0x1830f8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x1830fc: 0x31e03
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x183100: 0x30a20001
    ctx->pc = 0x183100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x183104: 0xad030004
    ctx->pc = 0x183104u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x183108: 0xad020008
    ctx->pc = 0x183108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x18310c: 0x10000049
    ctx->pc = 0x18310Cu;
    {
        const bool branch_taken_0x18310c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183110u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x18310c) {
            ctx->pc = 0x183234u;
            goto label_183234;
        }
    }
    ctx->pc = 0x183114u;
label_183114:
    // 0x183114: 0x51342
    ctx->pc = 0x183114u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 13));
    // 0x183118: 0x24030014
    ctx->pc = 0x183118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x18311c: 0x30463fff
    ctx->pc = 0x18311cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 16383));
    // 0x183120: 0xad03000c
    ctx->pc = 0x183120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x183124: 0x61600
    ctx->pc = 0x183124u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 24));
    // 0x183128: 0x61a02
    ctx->pc = 0x183128u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 8));
    // 0x18312c: 0x23603
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x183130: 0x30c2007f
    ctx->pc = 0x183130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 127));
    // 0x183134: 0x14400007
    ctx->pc = 0x183134u;
    {
        const bool branch_taken_0x183134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183138u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x183134) {
            ctx->pc = 0x183154u;
            goto label_183154;
        }
    }
    ctx->pc = 0x18313Cu;
    // 0x18313c: 0x51142
    ctx->pc = 0x18313cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 5));
    // 0x183140: 0x2403001c
    ctx->pc = 0x183140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x183144: 0x62040
    ctx->pc = 0x183144u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
    // 0x183148: 0x304200ff
    ctx->pc = 0x183148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x18314c: 0xad03000c
    ctx->pc = 0x18314cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x183150: 0x823025
    ctx->pc = 0x183150u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_183154:
    // 0x183154: 0x4c30003
    ctx->pc = 0x183154u;
    {
        const bool branch_taken_0x183154 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x183154) {
            ctx->pc = 0x183158u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x183164u;
            goto label_183164;
        }
    }
    ctx->pc = 0x18315Cu;
    // 0x18315c: 0x63023
    ctx->pc = 0x18315cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x183160: 0xad0e0008
    ctx->pc = 0x183160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 14));
label_183164:
    // 0x183164: 0x10000033
    ctx->pc = 0x183164u;
    {
        const bool branch_taken_0x183164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183168u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
        if (branch_taken_0x183164) {
            ctx->pc = 0x183234u;
            goto label_183234;
        }
    }
    ctx->pc = 0x18316Cu;
label_18316c:
    // 0x18316c: 0x14400007
    ctx->pc = 0x18316Cu;
    {
        const bool branch_taken_0x18316c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183170u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x18316c) {
            ctx->pc = 0x18318Cu;
            goto label_18318c;
        }
    }
    ctx->pc = 0x183174u;
    // 0x183174: 0x52d82
    ctx->pc = 0x183174u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 22));
    // 0x183178: 0x2402000b
    ctx->pc = 0x183178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x18317c: 0x8d640014
    ctx->pc = 0x18317cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x183180: 0x30a303fe
    ctx->pc = 0x183180u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1022));
    // 0x183184: 0x10000022
    ctx->pc = 0x183184u;
    {
        const bool branch_taken_0x183184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183188u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x183184) {
            ctx->pc = 0x183210u;
            goto label_183210;
        }
    }
    ctx->pc = 0x18318Cu;
label_18318c:
    // 0x18318c: 0x14400006
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183190u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x18318c) {
            ctx->pc = 0x1831A8u;
            goto label_1831a8;
        }
    }
    ctx->pc = 0x183194u;
    // 0x183194: 0x52d02
    ctx->pc = 0x183194u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 20));
    // 0x183198: 0x8d640018
    ctx->pc = 0x183198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x18319c: 0x30a30ffe
    ctx->pc = 0x18319cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4094));
    // 0x1831a0: 0x1000001b
    ctx->pc = 0x1831A0u;
    {
        const bool branch_taken_0x1831a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1831A4u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1831a0) {
            ctx->pc = 0x183210u;
            goto label_183210;
        }
    }
    ctx->pc = 0x1831A8u;
label_1831a8:
    // 0x1831a8: 0x54ce0007
    ctx->pc = 0x1831A8u;
    {
        const bool branch_taken_0x1831a8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 14));
        if (branch_taken_0x1831a8) {
            ctx->pc = 0x1831ACu;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
            ctx->pc = 0x1831C8u;
            goto label_1831c8;
        }
    }
    ctx->pc = 0x1831B0u;
    // 0x1831b0: 0x52cc2
    ctx->pc = 0x1831b0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 19));
    // 0x1831b4: 0x2402000e
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1831b8: 0x8d64001c
    ctx->pc = 0x1831b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x1831bc: 0x30a31ffe
    ctx->pc = 0x1831bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 8190));
    // 0x1831c0: 0x10000013
    ctx->pc = 0x1831C0u;
    {
        const bool branch_taken_0x1831c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1831C4u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1831c0) {
            ctx->pc = 0x183210u;
            goto label_183210;
        }
    }
    ctx->pc = 0x1831C8u;
label_1831c8:
    // 0x1831c8: 0x4a10005
    ctx->pc = 0x1831C8u;
    {
        const bool branch_taken_0x1831c8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1831CCu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1831c8) {
            ctx->pc = 0x1831E0u;
            goto label_1831e0;
        }
    }
    ctx->pc = 0x1831D0u;
    // 0x1831d0: 0x2402000f
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1831d4: 0x52ec2
    ctx->pc = 0x1831d4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x1831d8: 0x1000000b
    ctx->pc = 0x1831D8u;
    {
        const bool branch_taken_0x1831d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1831DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 32)));
        if (branch_taken_0x1831d8) {
            ctx->pc = 0x183208u;
            goto label_183208;
        }
    }
    ctx->pc = 0x1831E0u;
label_1831e0:
    // 0x1831e0: 0x4a30006
    ctx->pc = 0x1831E0u;
    {
        const bool branch_taken_0x1831e0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1831e0) {
            ctx->pc = 0x1831E4u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x1831FCu;
            goto label_1831fc;
        }
    }
    ctx->pc = 0x1831E8u;
    // 0x1831e8: 0x52840
    ctx->pc = 0x1831e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1831ec: 0x24020010
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1831f0: 0x52ec2
    ctx->pc = 0x1831f0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x1831f4: 0x10000004
    ctx->pc = 0x1831F4u;
    {
        const bool branch_taken_0x1831f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1831F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 36)));
        if (branch_taken_0x1831f4) {
            ctx->pc = 0x183208u;
            goto label_183208;
        }
    }
    ctx->pc = 0x1831FCu;
label_1831fc:
    // 0x1831fc: 0x24020011
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x183200: 0x52ec2
    ctx->pc = 0x183200u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x183204: 0x8d640028
    ctx->pc = 0x183204u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 40)));
label_183208:
    // 0x183208: 0xad02000c
    ctx->pc = 0x183208u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x18320c: 0x30a3001e
    ctx->pc = 0x18320cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 30));
label_183210:
    // 0x183210: 0x641821
    ctx->pc = 0x183210u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x183214: 0x84660000
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183218: 0x61400
    ctx->pc = 0x183218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x18321c: 0x30a40001
    ctx->pc = 0x18321cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 1));
    // 0x183220: 0x21603
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x183224: 0x30c300ff
    ctx->pc = 0x183224u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x183228: 0xad030000
    ctx->pc = 0x183228u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x18322c: 0xad020004
    ctx->pc = 0x18322cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x183230: 0xad040008
    ctx->pc = 0x183230u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_183234:
    // 0x183234: 0x8d03000c
    ctx->pc = 0x183234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x183238: 0x1836021
    ctx->pc = 0x183238u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x18323c: 0x29820020
    ctx->pc = 0x18323cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 32));
    // 0x183240: 0x14400011
    ctx->pc = 0x183240u;
    {
        const bool branch_taken_0x183240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183244u;
        SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x183240) {
            ctx->pc = 0x183288u;
            goto label_183288;
        }
    }
    ctx->pc = 0x183248u;
    // 0x183248: 0x258cffe0
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967264));
    // 0x18324c: 0x1896804
    ctx->pc = 0x18324cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x183250: 0x81490000
    ctx->pc = 0x183250u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x183254: 0x254a0001
    ctx->pc = 0x183254u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183258: 0x91420000
    ctx->pc = 0x183258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18325c: 0x94a00
    ctx->pc = 0x18325cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x183260: 0x254a0001
    ctx->pc = 0x183260u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183264: 0x1224825
    ctx->pc = 0x183264u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x183268: 0x91430000
    ctx->pc = 0x183268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18326c: 0x254a0001
    ctx->pc = 0x18326cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183270: 0x94a00
    ctx->pc = 0x183270u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x183274: 0x91420000
    ctx->pc = 0x183274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x183278: 0x1234825
    ctx->pc = 0x183278u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x18327c: 0x94a00
    ctx->pc = 0x18327cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x183280: 0x254a0001
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183284: 0x1224825
    ctx->pc = 0x183284u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_183288:
    // 0x183288: 0x8d020000
    ctx->pc = 0x183288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18328c: 0x544fff54
    ctx->pc = 0x18328Cu;
    {
        const bool branch_taken_0x18328c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 15));
        if (branch_taken_0x18328c) {
            ctx->pc = 0x183290u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->pc = 0x182FE0u;
            goto label_182fe0;
        }
    }
    ctx->pc = 0x183294u;
    // 0x183294: 0xad6d0000
    ctx->pc = 0x183294u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x183298: 0xad690004
    ctx->pc = 0x183298u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 9));
    // 0x18329c: 0xad6c0008
    ctx->pc = 0x18329cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 12));
    // 0x1832a0: 0xad6a000c
    ctx->pc = 0x1832a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
    // 0x1832a4: 0x8d030014
    ctx->pc = 0x1832a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1832a8: 0x8d020010
    ctx->pc = 0x1832a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1832ac: 0x10620003
    ctx->pc = 0x1832ACu;
    {
        const bool branch_taken_0x1832ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1832B0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x1832ac) {
            ctx->pc = 0x1832BCu;
            goto label_1832bc;
        }
    }
    ctx->pc = 0x1832B4u;
    // 0x1832b4: 0xad020014
    ctx->pc = 0x1832b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x1832b8: 0x40182d
    ctx->pc = 0x1832b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1832bc:
    // 0x1832bc: 0x3e00008
    ctx->pc = 0x1832BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182FE0u: goto label_182fe0;
            case 0x18305Cu: goto label_18305c;
            case 0x183070u: goto label_183070;
            case 0x183090u: goto label_183090;
            case 0x1830A0u: goto label_1830a0;
            case 0x1830B4u: goto label_1830b4;
            case 0x183114u: goto label_183114;
            case 0x183154u: goto label_183154;
            case 0x183164u: goto label_183164;
            case 0x18316Cu: goto label_18316c;
            case 0x18318Cu: goto label_18318c;
            case 0x1831A8u: goto label_1831a8;
            case 0x1831C8u: goto label_1831c8;
            case 0x1831E0u: goto label_1831e0;
            case 0x1831FCu: goto label_1831fc;
            case 0x183208u: goto label_183208;
            case 0x183210u: goto label_183210;
            case 0x183234u: goto label_183234;
            case 0x183288u: goto label_183288;
            case 0x1832BCu: goto label_1832bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1832C4u;
}
