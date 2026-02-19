#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1RegNum
// Address: 0x2b3140 - 0x2b3238
void pbGetVu1RegNum_0x2b3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3140u;

    // 0x2b3140: 0x27bdffb0
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b3144: 0xffbf0040
    ctx->pc = 0x2b3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b3148: 0xffb30030
    ctx->pc = 0x2b3148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b314c: 0xffb20020
    ctx->pc = 0x2b314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3150: 0xffb10010
    ctx->pc = 0x2b3150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b3154: 0xffb00000
    ctx->pc = 0x2b3154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3158: 0xa0802d
    ctx->pc = 0x2b3158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b315c: 0x8c82000c
    ctx->pc = 0x2b315cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b3160: 0x288c0
    ctx->pc = 0x2b3160u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b3164: 0x8e020000
    ctx->pc = 0x2b3164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3168: 0x4400027
    ctx->pc = 0x2B3168u;
    {
        const bool branch_taken_0x2b3168 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B316Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3168) {
            ctx->pc = 0x2B3208u;
            goto label_2b3208;
        }
    }
    ctx->pc = 0x2B3170u;
    // 0x2b3170: 0x3c120037
    ctx->pc = 0x2b3170u;
    SET_GPR_U32(ctx, 18, ((uint32_t)55 << 16));
    // 0x2b3174: 0x260202d
    ctx->pc = 0x2b3174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3178:
    // 0x2b3178: 0xc0bf270
    ctx->pc = 0x2B3178u;
    SET_GPR_U32(ctx, 31, 0x2B3180u);
    ctx->pc = 0x2B317Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3180u; }
    }
    if (ctx->pc != 0x2B3180u) { return; }
    ctx->pc = 0x2B3180u;
    // 0x2b3180: 0x54400018
    ctx->pc = 0x2B3180u;
    {
        const bool branch_taken_0x2b3180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3180) {
            ctx->pc = 0x2B3184u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x2B31E4u;
            goto label_2b31e4;
        }
    }
    ctx->pc = 0x2B3188u;
    // 0x2b3188: 0x8e030000
    ctx->pc = 0x2b3188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b318c: 0x24040001
    ctx->pc = 0x2b318cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3190: 0x8e020008
    ctx->pc = 0x2b3190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b3194: 0x0
    ctx->pc = 0x2b3194u;
    // NOP
label_2b3198:
    // 0x2b3198: 0x222102a
    ctx->pc = 0x2b3198u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2b319c: 0x54400005
    ctx->pc = 0x2B319Cu;
    {
        const bool branch_taken_0x2b319c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b319c) {
            ctx->pc = 0x2B31A0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x2B31B4u;
            goto label_2b31b4;
        }
    }
    ctx->pc = 0x2B31A4u;
    // 0x2b31a4: 0x8e02000c
    ctx->pc = 0x2b31a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b31a8: 0x222102a
    ctx->pc = 0x2b31a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2b31ac: 0x14400009
    ctx->pc = 0x2B31ACu;
    {
        const bool branch_taken_0x2b31ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B31B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2b31ac) {
            ctx->pc = 0x2B31D4u;
            goto label_2b31d4;
        }
    }
    ctx->pc = 0x2B31B4u;
label_2b31b4:
    // 0x2b31b4: 0x8e020004
    ctx->pc = 0x2b31b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b31b8: 0x5040fff7
    ctx->pc = 0x2B31B8u;
    {
        const bool branch_taken_0x2b31b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b31b8) {
            ctx->pc = 0x2B31BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2B3198u;
            goto label_2b3198;
        }
    }
    ctx->pc = 0x2B31C0u;
label_2b31c0:
    // 0x2b31c0: 0x8e4220b0
    ctx->pc = 0x2b31c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8368)));
    // 0x2b31c4: 0x821025
    ctx->pc = 0x2b31c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b31c8: 0xae4220b0
    ctx->pc = 0x2b31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8368), GPR_U32(ctx, 2));
    // 0x2b31cc: 0x10000013
    ctx->pc = 0x2B31CCu;
    {
        const bool branch_taken_0x2b31cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B31D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b31cc) {
            ctx->pc = 0x2B321Cu;
            goto label_2b321c;
        }
    }
    ctx->pc = 0x2B31D4u;
label_2b31d4:
    // 0x2b31d4: 0x1000fffa
    ctx->pc = 0x2B31D4u;
    {
        const bool branch_taken_0x2b31d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B31D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b31d4) {
            ctx->pc = 0x2B31C0u;
            goto label_2b31c0;
        }
    }
    ctx->pc = 0x2B31DCu;
    // 0x2b31dc: 0x0
    ctx->pc = 0x2b31dcu;
    // NOP
label_2b31e0:
    // 0x2b31e0: 0x26100010
    ctx->pc = 0x2b31e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_2b31e4:
    // 0x2b31e4: 0x8e020004
    ctx->pc = 0x2b31e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b31e8: 0x0
    ctx->pc = 0x2b31e8u;
    // NOP
    // 0x2b31ec: 0x0
    ctx->pc = 0x2b31ecu;
    // NOP
    // 0x2b31f0: 0x0
    ctx->pc = 0x2b31f0u;
    // NOP
    // 0x2b31f4: 0x1040fffa
    ctx->pc = 0x2B31F4u;
    {
        const bool branch_taken_0x2b31f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b31f4) {
            ctx->pc = 0x2B31E0u;
            goto label_2b31e0;
        }
    }
    ctx->pc = 0x2B31FCu;
    // 0x2b31fc: 0x8e020000
    ctx->pc = 0x2b31fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3200: 0x441ffdd
    ctx->pc = 0x2B3200u;
    {
        const bool branch_taken_0x2b3200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B3204u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3200) {
            ctx->pc = 0x2B3178u;
            goto label_2b3178;
        }
    }
    ctx->pc = 0x2B3208u;
label_2b3208:
    // 0x2b3208: 0x3c030037
    ctx->pc = 0x2b3208u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b320c: 0x8c6220b0
    ctx->pc = 0x2b320cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8368)));
    // 0x2b3210: 0x34420002
    ctx->pc = 0x2b3210u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b3214: 0xac6220b0
    ctx->pc = 0x2b3214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8368), GPR_U32(ctx, 2));
    // 0x2b3218: 0x2402fffe
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b321c:
    // 0x2b321c: 0xdfbf0040
    ctx->pc = 0x2b321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3220: 0xdfb30030
    ctx->pc = 0x2b3220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3224: 0xdfb20020
    ctx->pc = 0x2b3224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3228: 0xdfb10010
    ctx->pc = 0x2b3228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b322c: 0xdfb00000
    ctx->pc = 0x2b322cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3230: 0x3e00008
    ctx->pc = 0x2B3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3178u: goto label_2b3178;
            case 0x2B3198u: goto label_2b3198;
            case 0x2B31B4u: goto label_2b31b4;
            case 0x2B31C0u: goto label_2b31c0;
            case 0x2B31D4u: goto label_2b31d4;
            case 0x2B31E0u: goto label_2b31e0;
            case 0x2B31E4u: goto label_2b31e4;
            case 0x2B3208u: goto label_2b3208;
            case 0x2B321Cu: goto label_2b321c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3238u;
}
