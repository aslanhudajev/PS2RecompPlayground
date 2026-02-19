#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: verify_vmu_file_ok
// Address: 0x286870 - 0x2868e8
void verify_vmu_file_ok_0x286870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286870u;

    // 0x286870: 0x8c882ae8
    ctx->pc = 0x286870u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 10984)));
    // 0x286874: 0x8c872aec
    ctx->pc = 0x286874u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 10988)));
    // 0x286878: 0x302d
    ctx->pc = 0x286878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28687c: 0x24092b00
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x286880: 0x3c020032
    ctx->pc = 0x286880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x286884: 0x244a1bc0
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x286888: 0xc91018
    ctx->pc = 0x286888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28688c: 0x0
    ctx->pc = 0x28688cu;
    // NOP
label_286890:
    // 0x286890: 0x4a1821
    ctx->pc = 0x286890u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x286894: 0x5064000f
    ctx->pc = 0x286894u;
    {
        const bool branch_taken_0x286894 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x286894) {
            ctx->pc = 0x286898u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2868D4u;
            goto label_2868d4;
        }
    }
    ctx->pc = 0x28689Cu;
    // 0x28689c: 0x8c6200fc
    ctx->pc = 0x28689cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2868a0: 0x5040000c
    ctx->pc = 0x2868A0u;
    {
        const bool branch_taken_0x2868a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2868a0) {
            ctx->pc = 0x2868A4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2868D4u;
            goto label_2868d4;
        }
    }
    ctx->pc = 0x2868A8u;
    // 0x2868a8: 0x8c622ae8
    ctx->pc = 0x2868a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10984)));
    // 0x2868ac: 0x14480009
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x2868B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x2868D4u;
            goto label_2868d4;
        }
    }
    ctx->pc = 0x2868B4u;
    // 0x2868b4: 0x8c622aec
    ctx->pc = 0x2868b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10988)));
    // 0x2868b8: 0x14470006
    ctx->pc = 0x2868B8u;
    {
        const bool branch_taken_0x2868b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x2868b8) {
            ctx->pc = 0x2868D4u;
            goto label_2868d4;
        }
    }
    ctx->pc = 0x2868C0u;
    // 0x2868c0: 0x8c622af4
    ctx->pc = 0x2868c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10996)));
    // 0x2868c4: 0x14450004
    ctx->pc = 0x2868C4u;
    {
        const bool branch_taken_0x2868c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x2868C8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
        if (branch_taken_0x2868c4) {
            ctx->pc = 0x2868D8u;
            goto label_2868d8;
        }
    }
    ctx->pc = 0x2868CCu;
    // 0x2868cc: 0x3e00008
    ctx->pc = 0x2868CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286890u: goto label_286890;
            case 0x2868D4u: goto label_2868d4;
            case 0x2868D8u: goto label_2868d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2868D4u;
label_2868d4:
    // 0x2868d4: 0x28c20004
    ctx->pc = 0x2868d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_2868d8:
    // 0x2868d8: 0x1440ffed
    ctx->pc = 0x2868D8u;
    {
        const bool branch_taken_0x2868d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2868DCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2868d8) {
            ctx->pc = 0x286890u;
            goto label_286890;
        }
    }
    ctx->pc = 0x2868E0u;
    // 0x2868e0: 0x3e00008
    ctx->pc = 0x2868E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286890u: goto label_286890;
            case 0x2868D4u: goto label_2868d4;
            case 0x2868D8u: goto label_2868d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2868E8u;
}
