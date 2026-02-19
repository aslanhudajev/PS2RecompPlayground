#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeInsert
// Address: 0x2cf990 - 0x2cf9f8
void MBNodeInsert_0x2cf990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf990u;

    // 0x2cf990: 0x27bdffe0
    ctx->pc = 0x2cf990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf994: 0xffbf0010
    ctx->pc = 0x2cf994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf998: 0xffb00000
    ctx->pc = 0x2cf998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf99c: 0x80802d
    ctx->pc = 0x2cf99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9a0: 0x14a00009
    ctx->pc = 0x2CF9A0u;
    {
        const bool branch_taken_0x2cf9a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
        if (branch_taken_0x2cf9a0) {
            ctx->pc = 0x2CF9C8u;
            goto label_2cf9c8;
        }
    }
    ctx->pc = 0x2CF9A8u;
    // 0x2cf9a8: 0x3c03003a
    ctx->pc = 0x2cf9a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf9ac: 0x8c620c94
    ctx->pc = 0x2cf9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3220)));
    // 0x2cf9b0: 0x14400003
    ctx->pc = 0x2CF9B0u;
    {
        const bool branch_taken_0x2cf9b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF9B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cf9b0) {
            ctx->pc = 0x2CF9C0u;
            goto label_2cf9c0;
        }
    }
    ctx->pc = 0x2CF9B8u;
    // 0x2cf9b8: 0x1000000b
    ctx->pc = 0x2CF9B8u;
    {
        const bool branch_taken_0x2cf9b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF9BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 3220), GPR_U32(ctx, 16));
        if (branch_taken_0x2cf9b8) {
            ctx->pc = 0x2CF9E8u;
            goto label_2cf9e8;
        }
    }
    ctx->pc = 0x2CF9C0u;
label_2cf9c0:
    // 0x2cf9c0: 0x10000006
    ctx->pc = 0x2CF9C0u;
    {
        const bool branch_taken_0x2cf9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF9C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3220)));
        if (branch_taken_0x2cf9c0) {
            ctx->pc = 0x2CF9DCu;
            goto label_2cf9dc;
        }
    }
    ctx->pc = 0x2CF9C8u;
label_2cf9c8:
    // 0x2cf9c8: 0x8ca40078
    ctx->pc = 0x2cf9c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x2cf9cc: 0x14800003
    ctx->pc = 0x2CF9CCu;
    {
        const bool branch_taken_0x2cf9cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf9cc) {
            ctx->pc = 0x2CF9DCu;
            goto label_2cf9dc;
        }
    }
    ctx->pc = 0x2CF9D4u;
    // 0x2cf9d4: 0x10000004
    ctx->pc = 0x2CF9D4u;
    {
        const bool branch_taken_0x2cf9d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF9D8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 16));
        if (branch_taken_0x2cf9d4) {
            ctx->pc = 0x2CF9E8u;
            goto label_2cf9e8;
        }
    }
    ctx->pc = 0x2CF9DCu;
label_2cf9dc:
    // 0x2cf9dc: 0xc0b3e54
    ctx->pc = 0x2CF9DCu;
    SET_GPR_U32(ctx, 31, 0x2CF9E4u);
    ctx->pc = 0x2CF950u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeLastSibling_0x2cf950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF9E4u; }
    }
    if (ctx->pc != 0x2CF9E4u) { return; }
    ctx->pc = 0x2CF9E4u;
    // 0x2cf9e4: 0xac50007c
    ctx->pc = 0x2cf9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 16));
label_2cf9e8:
    // 0x2cf9e8: 0xdfbf0010
    ctx->pc = 0x2cf9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf9ec: 0xdfb00000
    ctx->pc = 0x2cf9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9f0: 0x3e00008
    ctx->pc = 0x2CF9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF9C0u: goto label_2cf9c0;
            case 0x2CF9C8u: goto label_2cf9c8;
            case 0x2CF9DCu: goto label_2cf9dc;
            case 0x2CF9E8u: goto label_2cf9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF9F8u;
}
