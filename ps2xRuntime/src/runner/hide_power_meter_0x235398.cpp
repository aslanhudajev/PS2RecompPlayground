#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hide_power_meter
// Address: 0x235398 - 0x235404
void hide_power_meter_0x235398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x235398u;

    // 0x235398: 0x27bdffc0
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23539c: 0xffbf0030
    ctx->pc = 0x23539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2353a0: 0xffb20020
    ctx->pc = 0x2353a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2353a4: 0xffb10010
    ctx->pc = 0x2353a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2353a8: 0xffb00000
    ctx->pc = 0x2353a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2353ac: 0x802d
    ctx->pc = 0x2353acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353b0: 0x3c020033
    ctx->pc = 0x2353b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2353b4: 0x2452cae8
    ctx->pc = 0x2353b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x2353b8: 0x2402001c
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2353bc: 0x828818
    ctx->pc = 0x2353bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2353c0: 0x101080
    ctx->pc = 0x2353c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2353c4: 0x0
    ctx->pc = 0x2353c4u;
    // NOP
label_2353c8:
    // 0x2353c8: 0x511021
    ctx->pc = 0x2353c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2353cc: 0x521021
    ctx->pc = 0x2353ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2353d0: 0x8c440000
    ctx->pc = 0x2353d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2353d4: 0xc0b0ce8
    ctx->pc = 0x2353D4u;
    SET_GPR_U32(ctx, 31, 0x2353DCu);
    ctx->pc = 0x2353D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353DCu; }
    }
    if (ctx->pc != 0x2353DCu) { return; }
    ctx->pc = 0x2353DCu;
    // 0x2353dc: 0x26100001
    ctx->pc = 0x2353dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2353e0: 0x2a020007
    ctx->pc = 0x2353e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x2353e4: 0x5440fff8
    ctx->pc = 0x2353E4u;
    {
        const bool branch_taken_0x2353e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2353e4) {
            ctx->pc = 0x2353E8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2353ECu;
    // 0x2353ec: 0xdfbf0030
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2353f0: 0xdfb20020
    ctx->pc = 0x2353f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2353f4: 0xdfb10010
    ctx->pc = 0x2353f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2353f8: 0xdfb00000
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2353fc: 0x3e00008
    ctx->pc = 0x2353FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235400u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2353C8u: goto label_2353c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235404u;
}
