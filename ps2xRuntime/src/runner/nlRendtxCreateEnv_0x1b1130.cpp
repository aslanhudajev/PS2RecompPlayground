#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRendtxCreateEnv
// Address: 0x1b1130 - 0x1b1234
void nlRendtxCreateEnv_0x1b1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRendtxCreateEnv");


    ctx->pc = 0x1b1130u;

    // 0x1b1130: 0x27bdffd0
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1134: 0x7fbf0020
    ctx->pc = 0x1b1134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b1138: 0x7fb10010
    ctx->pc = 0x1b1138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b113c: 0x7fb00000
    ctx->pc = 0x1b113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1140: 0x8c830018
    ctx->pc = 0x1b1140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b1144: 0x24020001
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1148: 0x14620003
    ctx->pc = 0x1B1148u;
    {
        const bool branch_taken_0x1b1148 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B114Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1148) {
            ctx->pc = 0x1B1158u;
            goto label_1b1158;
        }
    }
    ctx->pc = 0x1B1150u;
label_1b1150:
    // 0x1b1150: 0x1000ffff
    ctx->pc = 0x1B1150u;
    {
        const bool branch_taken_0x1b1150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1150) {
            ctx->pc = 0x1B1150u;
            goto label_1b1150;
        }
    }
    ctx->pc = 0x1B1158u;
label_1b1158:
    // 0x1b1158: 0x8e300000
    ctx->pc = 0x1b1158u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b115c: 0xae000000
    ctx->pc = 0x1b115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1160: 0x86250004
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b1164: 0x86260006
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1b1168: 0x86270008
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b116c: 0x8628000a
    ctx->pc = 0x1b116cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1b1170: 0x8629000c
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b1174: 0xc054c0a
    ctx->pc = 0x1B1174u;
    SET_GPR_U32(ctx, 31, 0x1B117Cu);
    ctx->pc = 0x1B1178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x153028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDrawEnv_0x153028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B117Cu; }
        else if (ctx->pc != 0x1B117Cu) { ctx->pc = 0x1B117Cu; }
    }
    if (ctx->pc != 0x1B117Cu) { return; }
    ctx->pc = 0x1B117Cu;
    // 0x1b117c: 0x3c020026
    ctx->pc = 0x1b117cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1b1180: 0x26040010
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b1184: 0x2445f9c0
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294965696));
    // 0x1b1188: 0xc06ac36
    ctx->pc = 0x1B1188u;
    SET_GPR_U32(ctx, 31, 0x1B1190u);
    ctx->pc = 0x1B118Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1190u; }
        else if (ctx->pc != 0x1B1190u) { ctx->pc = 0x1B1190u; }
    }
    if (ctx->pc != 0x1B1190u) { return; }
    ctx->pc = 0x1B1190u;
    // 0x1b1190: 0x86230006
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1b1194: 0xa6030004
    ctx->pc = 0x1b1194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1198: 0x86230008
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b119c: 0xa6030006
    ctx->pc = 0x1b119cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b11a0: 0x8e240014
    ctx->pc = 0x1b11a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b11a4: 0x480000c
    ctx->pc = 0x1B11A4u;
    {
        const bool branch_taken_0x1b11a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B11A8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1b11a4) {
            ctx->pc = 0x1B11D8u;
            goto label_1b11d8;
        }
    }
    ctx->pc = 0x1B11ACu;
    // 0x1b11ac: 0x4810003
    ctx->pc = 0x1B11ACu;
    {
        const bool branch_taken_0x1b11ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B11B0u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 13));
        if (branch_taken_0x1b11ac) {
            ctx->pc = 0x1B11BCu;
            goto label_1b11bc;
        }
    }
    ctx->pc = 0x1B11B4u;
    // 0x1b11b4: 0x24831fff
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 8191));
    // 0x1b11b8: 0x31b43
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
label_1b11bc:
    // 0x1b11bc: 0x96050030
    ctx->pc = 0x1b11bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b11c0: 0x306401ff
    ctx->pc = 0x1b11c0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 511));
    // 0x1b11c4: 0x2403fe00
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1b11c8: 0xa31824
    ctx->pc = 0x1b11c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b11cc: 0x641825
    ctx->pc = 0x1b11ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b11d0: 0x10000008
    ctx->pc = 0x1B11D0u;
    {
        const bool branch_taken_0x1b11d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B11D4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b11d0) {
            ctx->pc = 0x1B11F4u;
            goto label_1b11f4;
        }
    }
    ctx->pc = 0x1B11D8u;
label_1b11d8:
    // 0x1b11d8: 0x94253780
    ctx->pc = 0x1b11d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 14208)));
    // 0x1b11dc: 0x96040030
    ctx->pc = 0x1b11dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b11e0: 0x2403fe00
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1b11e4: 0x30a501ff
    ctx->pc = 0x1b11e4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 511));
    // 0x1b11e8: 0x831824
    ctx->pc = 0x1b11e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b11ec: 0x651825
    ctx->pc = 0x1b11ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b11f0: 0xa6030030
    ctx->pc = 0x1b11f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
label_1b11f4:
    // 0x1b11f4: 0x8e240010
    ctx->pc = 0x1b11f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b11f8: 0x4810003
    ctx->pc = 0x1B11F8u;
    {
        const bool branch_taken_0x1b11f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B11FCu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 13));
        if (branch_taken_0x1b11f8) {
            ctx->pc = 0x1B1208u;
            goto label_1b1208;
        }
    }
    ctx->pc = 0x1B1200u;
    // 0x1b1200: 0x24831fff
    ctx->pc = 0x1b1200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 8191));
    // 0x1b1204: 0x31b43
    ctx->pc = 0x1b1204u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
label_1b1208:
    // 0x1b1208: 0x96050020
    ctx->pc = 0x1b1208u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b120c: 0x306401ff
    ctx->pc = 0x1b120cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 511));
    // 0x1b1210: 0x2403fe00
    ctx->pc = 0x1b1210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1b1214: 0xa31824
    ctx->pc = 0x1b1214u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b1218: 0x641825
    ctx->pc = 0x1b1218u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b121c: 0xa6030020
    ctx->pc = 0x1b121cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1220: 0x7bbf0020
    ctx->pc = 0x1b1220u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1224: 0x7bb10010
    ctx->pc = 0x1b1224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1228: 0x7bb00000
    ctx->pc = 0x1b1228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b122c: 0x3e00008
    ctx->pc = 0x1B122Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1150u: goto label_1b1150;
            case 0x1B1158u: goto label_1b1158;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11D8u: goto label_1b11d8;
            case 0x1B11F4u: goto label_1b11f4;
            case 0x1B1208u: goto label_1b1208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1234u;
}
