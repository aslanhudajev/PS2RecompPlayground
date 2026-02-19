#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: translatePortAndSlot
// Address: 0x2079c8 - 0x207a34
void translatePortAndSlot_0x2079c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2079c8u;

    // 0x2079c8: 0x27bdffe0
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2079cc: 0xffbe0010
    ctx->pc = 0x2079ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2079d0: 0x3a0f02d
    ctx->pc = 0x2079d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079d4: 0xafc40000
    ctx->pc = 0x2079d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2079d8: 0xafc50004
    ctx->pc = 0x2079d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2079dc: 0x8fc20000
    ctx->pc = 0x2079dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2079e0: 0x8c430000
    ctx->pc = 0x2079e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2079e4: 0x4600008
    ctx->pc = 0x2079E4u;
    {
        const bool branch_taken_0x2079e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2079e4) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x2079ECu;
    // 0x2079ec: 0x8fc20000
    ctx->pc = 0x2079ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2079f0: 0x8c430000
    ctx->pc = 0x2079f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2079f4: 0x28620002
    ctx->pc = 0x2079f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2079f8: 0x10400003
    ctx->pc = 0x2079F8u;
    {
        const bool branch_taken_0x2079f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2079f8) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x207A00u;
    // 0x207a00: 0x10000004
    ctx->pc = 0x207A00u;
    {
        const bool branch_taken_0x207a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207a00) {
            ctx->pc = 0x207A14u;
            goto label_207a14;
        }
    }
    ctx->pc = 0x207A08u;
label_207a08:
    // 0x207a08: 0x102d
    ctx->pc = 0x207a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a0c: 0x10000004
    ctx->pc = 0x207A0Cu;
    {
        const bool branch_taken_0x207a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207a0c) {
            ctx->pc = 0x207A20u;
            goto label_207a20;
        }
    }
    ctx->pc = 0x207A14u;
label_207a14:
    // 0x207a14: 0x24020001
    ctx->pc = 0x207a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a18: 0x10000001
    ctx->pc = 0x207A18u;
    {
        const bool branch_taken_0x207a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207a18) {
            ctx->pc = 0x207A20u;
            goto label_207a20;
        }
    }
    ctx->pc = 0x207A20u;
label_207a20:
    // 0x207a20: 0x3c0e82d
    ctx->pc = 0x207a20u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a24: 0xdfbe0010
    ctx->pc = 0x207a24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a28: 0x27bd0020
    ctx->pc = 0x207a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x207a2c: 0x3e00008
    ctx->pc = 0x207A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207A08u: goto label_207a08;
            case 0x207A14u: goto label_207a14;
            case 0x207A20u: goto label_207a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207A34u;
}
