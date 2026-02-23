#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: packLoad__13SoundMgrClassFiiii
// Address: 0x217cb0 - 0x217e10
void packLoad__13SoundMgrClassFiiii_0x217cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("packLoad__13SoundMgrClassFiiii");


    ctx->pc = 0x217cb0u;

    // 0x217cb0: 0x27bdffa0
    ctx->pc = 0x217cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217cb4: 0x7fbf0050
    ctx->pc = 0x217cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x217cb8: 0x7fb40040
    ctx->pc = 0x217cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x217cbc: 0x7fb30030
    ctx->pc = 0x217cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x217cc0: 0x7fb20020
    ctx->pc = 0x217cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x217cc4: 0x7fb10010
    ctx->pc = 0x217cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217cc8: 0x3c020029
    ctx->pc = 0x217cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x217ccc: 0x518c0
    ctx->pc = 0x217cccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x217cd0: 0x2442af40
    ctx->pc = 0x217cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x217cd4: 0x7fb00000
    ctx->pc = 0x217cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217cd8: 0x431021
    ctx->pc = 0x217cd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217cdc: 0x84500000
    ctx->pc = 0x217cdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217ce0: 0x71008e28
    ctx->pc = 0x217ce0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x217ce4: 0x7080a628
    ctx->pc = 0x217ce4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x217ce8: 0x70c09e28
    ctx->pc = 0x217ce8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x217cec: 0x24020001
    ctx->pc = 0x217cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217cf0: 0x12220030
    ctx->pc = 0x217CF0u;
    {
        const bool branch_taken_0x217cf0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x217CF4u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217cf0) {
            ctx->pc = 0x217DB4u;
            goto label_217db4;
        }
    }
    ctx->pc = 0x217CF8u;
    // 0x217cf8: 0x12200003
    ctx->pc = 0x217CF8u;
    {
        const bool branch_taken_0x217cf8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x217CFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x217cf8) {
            ctx->pc = 0x217D08u;
            goto label_217d08;
        }
    }
    ctx->pc = 0x217D00u;
    // 0x217d00: 0x1000003b
    ctx->pc = 0x217D00u;
    {
        const bool branch_taken_0x217d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217D04u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217d00) {
            ctx->pc = 0x217DF0u;
            goto label_217df0;
        }
    }
    ctx->pc = 0x217D08u;
label_217d08:
    // 0x217d08: 0x541021
    ctx->pc = 0x217d08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x217d0c: 0x8c420004
    ctx->pc = 0x217d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217d10: 0x10400003
    ctx->pc = 0x217D10u;
    {
        const bool branch_taken_0x217d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217D14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 644));
        if (branch_taken_0x217d10) {
            ctx->pc = 0x217D20u;
            goto label_217d20;
        }
    }
    ctx->pc = 0x217D18u;
    // 0x217d18: 0x10000034
    ctx->pc = 0x217D18u;
    {
        const bool branch_taken_0x217d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217D1Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217d18) {
            ctx->pc = 0x217DECu;
            goto label_217dec;
        }
    }
    ctx->pc = 0x217D20u;
label_217d20:
    // 0x217d20: 0xc05ad72
    ctx->pc = 0x217D20u;
    SET_GPR_U32(ctx, 31, 0x217D28u);
    ctx->pc = 0x217D24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D28u; }
        else if (ctx->pc != 0x217D28u) { ctx->pc = 0x217D28u; }
    }
    if (ctx->pc != 0x217D28u) { return; }
    ctx->pc = 0x217D28u;
    // 0x217d28: 0x14400002
    ctx->pc = 0x217D28u;
    {
        const bool branch_taken_0x217d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217D2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
        if (branch_taken_0x217d28) {
            ctx->pc = 0x217D34u;
            goto label_217d34;
        }
    }
    ctx->pc = 0x217D30u;
    // 0x217d30: 0xd
    ctx->pc = 0x217d30u;
    runtime->handleBreak(rdram, ctx);
label_217d34:
    // 0x217d34: 0xa690020e
    ctx->pc = 0x217d34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 526), (uint16_t)GPR_U32(ctx, 16));
    // 0x217d38: 0x3c020091
    ctx->pc = 0x217d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x217d3c: 0xa693020c
    ctx->pc = 0x217d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 524), (uint16_t)GPR_U32(ctx, 19));
    // 0x217d40: 0x24422d00
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x217d44: 0xae820210
    ctx->pc = 0x217d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 2));
    // 0x217d48: 0x3c020001
    ctx->pc = 0x217d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x217d4c: 0x34422000
    ctx->pc = 0x217d4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x217d50: 0xae820214
    ctx->pc = 0x217d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 2));
    // 0x217d54: 0x3c020091
    ctx->pc = 0x217d54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x217d58: 0x102080
    ctx->pc = 0x217d58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x217d5c: 0x24422760
    ctx->pc = 0x217d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10080));
    // 0x217d60: 0x441021
    ctx->pc = 0x217d60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x217d64: 0x8c430000
    ctx->pc = 0x217d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217d68: 0x3c010091
    ctx->pc = 0x217d68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x217d6c: 0x26310001
    ctx->pc = 0x217d6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x217d70: 0x901021
    ctx->pc = 0x217d70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x217d74: 0x220c0
    ctx->pc = 0x217d74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 3));
    // 0x217d78: 0x3c020091
    ctx->pc = 0x217d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x217d7c: 0x2442280c
    ctx->pc = 0x217d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10252));
    // 0x217d80: 0x441021
    ctx->pc = 0x217d80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x217d84: 0xae83022c
    ctx->pc = 0x217d84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 556), GPR_U32(ctx, 3));
    // 0x217d88: 0x8c430000
    ctx->pc = 0x217d88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217d8c: 0x3c020091
    ctx->pc = 0x217d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x217d90: 0x24422814
    ctx->pc = 0x217d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10260));
    // 0x217d94: 0x441021
    ctx->pc = 0x217d94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x217d98: 0xae830230
    ctx->pc = 0x217d98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 3));
    // 0x217d9c: 0x8c420000
    ctx->pc = 0x217d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217da0: 0xae820238
    ctx->pc = 0x217da0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 2));
    // 0x217da4: 0x8c2227e0
    ctx->pc = 0x217da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 10208)));
    // 0x217da8: 0xae820218
    ctx->pc = 0x217da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 2));
    // 0x217dac: 0xae92023c
    ctx->pc = 0x217dacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 572), GPR_U32(ctx, 18));
    // 0x217db0: 0xae800278
    ctx->pc = 0x217db0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 632), GPR_U32(ctx, 0));
label_217db4:
    // 0x217db4: 0x8e850278
    ctx->pc = 0x217db4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x217db8: 0xc06b4c0
    ctx->pc = 0x217DB8u;
    SET_GPR_U32(ctx, 31, 0x217DC0u);
    ctx->pc = 0x217DBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 524));
    ctx->pc = 0x1AD300u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndPackLoad_0x1ad300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DC0u; }
        else if (ctx->pc != 0x217DC0u) { ctx->pc = 0x217DC0u; }
    }
    if (ctx->pc != 0x217DC0u) { return; }
    ctx->pc = 0x217DC0u;
    // 0x217dc0: 0x1440000a
    ctx->pc = 0x217DC0u;
    {
        const bool branch_taken_0x217dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217DC4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 632), GPR_U32(ctx, 2));
        if (branch_taken_0x217dc0) {
            ctx->pc = 0x217DECu;
            goto label_217dec;
        }
    }
    ctx->pc = 0x217DC8u;
    // 0x217dc8: 0xc05ae0c
    ctx->pc = 0x217DC8u;
    SET_GPR_U32(ctx, 31, 0x217DD0u);
    ctx->pc = 0x217DCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 592)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DD0u; }
        else if (ctx->pc != 0x217DD0u) { ctx->pc = 0x217DD0u; }
    }
    if (ctx->pc != 0x217DD0u) { return; }
    ctx->pc = 0x217DD0u;
    // 0x217dd0: 0x1010c0
    ctx->pc = 0x217dd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x217dd4: 0x541821
    ctx->pc = 0x217dd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x217dd8: 0x8e82023c
    ctx->pc = 0x217dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 572)));
    // 0x217ddc: 0x70008e28
    ctx->pc = 0x217ddcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217de0: 0xac620004
    ctx->pc = 0x217de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x217de4: 0x8682020c
    ctx->pc = 0x217de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 524)));
    // 0x217de8: 0xa4620002
    ctx->pc = 0x217de8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_217dec:
    // 0x217dec: 0x72201628
    ctx->pc = 0x217decu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_217df0:
    // 0x217df0: 0x7bbf0050
    ctx->pc = 0x217df0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217df4: 0x7bb40040
    ctx->pc = 0x217df4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217df8: 0x7bb30030
    ctx->pc = 0x217df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217dfc: 0x7bb20020
    ctx->pc = 0x217dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e00: 0x7bb10010
    ctx->pc = 0x217e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e04: 0x7bb00000
    ctx->pc = 0x217e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e08: 0x3e00008
    ctx->pc = 0x217E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217D08u: goto label_217d08;
            case 0x217D20u: goto label_217d20;
            case 0x217D34u: goto label_217d34;
            case 0x217DB4u: goto label_217db4;
            case 0x217DECu: goto label_217dec;
            case 0x217DF0u: goto label_217df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217E10u;
}
