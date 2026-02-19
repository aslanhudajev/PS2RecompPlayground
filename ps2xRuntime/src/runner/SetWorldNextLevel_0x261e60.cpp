#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetWorldNextLevel
// Address: 0x261e60 - 0x261f10
void SetWorldNextLevel_0x261e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261e60u;

    // 0x261e60: 0x3c020034
    ctx->pc = 0x261e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261e64: 0x8c43e7c0
    ctx->pc = 0x261e64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261e68: 0x84650016
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x261e6c: 0x1080001d
    ctx->pc = 0x261E6Cu;
    {
        const bool branch_taken_0x261e6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x261E70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x261e6c) {
            ctx->pc = 0x261EE4u;
            goto label_261ee4;
        }
    }
    ctx->pc = 0x261E74u;
    // 0x261e74: 0x84620018
    ctx->pc = 0x261e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x261e78: 0xa2102a
    ctx->pc = 0x261e78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x261e7c: 0x10400022
    ctx->pc = 0x261E7Cu;
    {
        const bool branch_taken_0x261e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x261e7c) {
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261E84u;
    // 0x261e84: 0x8c62001c
    ctx->pc = 0x261e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x261e88: 0x2403010c
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261e8c: 0xa31818
    ctx->pc = 0x261e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261e90: 0x621821
    ctx->pc = 0x261e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261e94: 0x84620004
    ctx->pc = 0x261e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261e98: 0x441024
    ctx->pc = 0x261e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261e9c: 0x14400010
    ctx->pc = 0x261E9Cu;
    {
        const bool branch_taken_0x261e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261EA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x261e9c) {
            ctx->pc = 0x261EE0u;
            goto label_261ee0;
        }
    }
    ctx->pc = 0x261EA4u;
    // 0x261ea4: 0x8c46e7c0
    ctx->pc = 0x261ea4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261ea8: 0x84c70018
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x261eac: 0x2408010c
    ctx->pc = 0x261eacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261eb0: 0x24a50001
    ctx->pc = 0x261eb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x261eb4: 0x0
    ctx->pc = 0x261eb4u;
    // NOP
label_261eb8:
    // 0x261eb8: 0xa7102a
    ctx->pc = 0x261eb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x261ebc: 0x10400012
    ctx->pc = 0x261EBCu;
    {
        const bool branch_taken_0x261ebc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261EC0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x261ebc) {
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261EC4u;
    // 0x261ec4: 0x8cc2001c
    ctx->pc = 0x261ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x261ec8: 0x621821
    ctx->pc = 0x261ec8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261ecc: 0x84620004
    ctx->pc = 0x261eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261ed0: 0x441024
    ctx->pc = 0x261ed0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261ed4: 0x5040fff8
    ctx->pc = 0x261ED4u;
    {
        const bool branch_taken_0x261ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x261ed4) {
            ctx->pc = 0x261ED8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x261EB8u;
            goto label_261eb8;
        }
    }
    ctx->pc = 0x261EDCu;
    // 0x261edc: 0x3c020034
    ctx->pc = 0x261edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_261ee0:
    // 0x261ee0: 0x8c43e7c0
    ctx->pc = 0x261ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
label_261ee4:
    // 0x261ee4: 0x84620018
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x261ee8: 0xa2102a
    ctx->pc = 0x261ee8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x261eec: 0x10400006
    ctx->pc = 0x261EECu;
    {
        const bool branch_taken_0x261eec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261EF0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x261eec) {
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261EF4u;
    // 0x261ef4: 0x2402010c
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 268));
    // 0x261ef8: 0xa21018
    ctx->pc = 0x261ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261efc: 0x8c63001c
    ctx->pc = 0x261efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x261f00: 0x431021
    ctx->pc = 0x261f00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f04: 0xac82e7cc
    ctx->pc = 0x261f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961100), GPR_U32(ctx, 2));
label_261f08:
    // 0x261f08: 0x3e00008
    ctx->pc = 0x261F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261EB8u: goto label_261eb8;
            case 0x261EE0u: goto label_261ee0;
            case 0x261EE4u: goto label_261ee4;
            case 0x261F08u: goto label_261f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261F10u;
}
