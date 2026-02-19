#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindWORLDOBJ
// Address: 0x21c2a8 - 0x21c34c
void FindWORLDOBJ_0x21c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c2a8u;

label_21c2a8:
    // 0x21c2a8: 0x27bdffb0
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c2ac: 0xffbf0040
    ctx->pc = 0x21c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c2b0: 0xffb30030
    ctx->pc = 0x21c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c2b4: 0xffb20020
    ctx->pc = 0x21c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c2b8: 0xffb10010
    ctx->pc = 0x21c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c2bc: 0xffb00000
    ctx->pc = 0x21c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c2c0: 0x80802d
    ctx->pc = 0x21c2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2c4: 0x12000019
    ctx->pc = 0x21C2C4u;
    {
        const bool branch_taken_0x21c2c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C2C8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c2c4) {
            ctx->pc = 0x21C32Cu;
            goto label_21c32c;
        }
    }
    ctx->pc = 0x21C2CCu;
    // 0x21c2cc: 0x3c130032
    ctx->pc = 0x21c2ccu;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x21c2d0: 0x2412003c
    ctx->pc = 0x21c2d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21c2d4: 0x220202d
    ctx->pc = 0x21c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c2d8:
    // 0x21c2d8: 0xc0bf270
    ctx->pc = 0x21C2D8u;
    SET_GPR_U32(ctx, 31, 0x21C2E0u);
    ctx->pc = 0x21C2DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2E0u; }
    }
    if (ctx->pc != 0x21C2E0u) { return; }
    ctx->pc = 0x21C2E0u;
    // 0x21c2e0: 0x54400003
    ctx->pc = 0x21C2E0u;
    {
        const bool branch_taken_0x21c2e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c2e0) {
            ctx->pc = 0x21C2E4u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->pc = 0x21C2F0u;
            goto label_21c2f0;
        }
    }
    ctx->pc = 0x21C2E8u;
    // 0x21c2e8: 0x10000011
    ctx->pc = 0x21C2E8u;
    {
        const bool branch_taken_0x21c2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C2ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c2e8) {
            ctx->pc = 0x21C330u;
            goto label_21c330;
        }
    }
    ctx->pc = 0x21C2F0u;
label_21c2f0:
    // 0x21c2f0: 0x4400007
    ctx->pc = 0x21C2F0u;
    {
        const bool branch_taken_0x21c2f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C2F4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21c2f0) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2F8u;
    // 0x21c2f8: 0x8e64fa9c
    ctx->pc = 0x21c2f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294965916)));
    // 0x21c2fc: 0x442021
    ctx->pc = 0x21c2fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c300: 0xc0870aa
    ctx->pc = 0x21C300u;
    SET_GPR_U32(ctx, 31, 0x21C308u);
    ctx->pc = 0x21C304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C2A8u;
    goto label_21c2a8;
    ctx->pc = 0x21C308u;
label_21c308:
    // 0x21c308: 0x1440000a
    ctx->pc = 0x21C308u;
    {
        const bool branch_taken_0x21c308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C30Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x21c308) {
            ctx->pc = 0x21C334u;
            goto label_21c334;
        }
    }
    ctx->pc = 0x21C310u;
label_21c310:
    // 0x21c310: 0x8602002c
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x21c314: 0x4400005
    ctx->pc = 0x21C314u;
    {
        const bool branch_taken_0x21c314 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C318u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21c314) {
            ctx->pc = 0x21C32Cu;
            goto label_21c32c;
        }
    }
    ctx->pc = 0x21C31Cu;
    // 0x21c31c: 0x8e63fa9c
    ctx->pc = 0x21c31cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294965916)));
    // 0x21c320: 0x438021
    ctx->pc = 0x21c320u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c324: 0x1600ffec
    ctx->pc = 0x21C324u;
    {
        const bool branch_taken_0x21c324 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C328u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c324) {
            ctx->pc = 0x21C2D8u;
            goto label_21c2d8;
        }
    }
    ctx->pc = 0x21C32Cu;
label_21c32c:
    // 0x21c32c: 0x102d
    ctx->pc = 0x21c32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c330:
    // 0x21c330: 0xdfbf0040
    ctx->pc = 0x21c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21c334:
    // 0x21c334: 0xdfb30030
    ctx->pc = 0x21c334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c338: 0xdfb20020
    ctx->pc = 0x21c338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c33c: 0xdfb10010
    ctx->pc = 0x21c33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c340: 0xdfb00000
    ctx->pc = 0x21c340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c344: 0x3e00008
    ctx->pc = 0x21C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C2A8u: goto label_21c2a8;
            case 0x21C2D8u: goto label_21c2d8;
            case 0x21C2F0u: goto label_21c2f0;
            case 0x21C308u: goto label_21c308;
            case 0x21C310u: goto label_21c310;
            case 0x21C32Cu: goto label_21c32c;
            case 0x21C330u: goto label_21c330;
            case 0x21C334u: goto label_21c334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C34Cu;
}
