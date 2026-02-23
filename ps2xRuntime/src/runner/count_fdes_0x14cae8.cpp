#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: count_fdes
// Address: 0x14cae8 - 0x14cb30
void count_fdes_0x14cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("count_fdes");


    ctx->pc = 0x14cae8u;

    // 0x14cae8: 0x8c850000
    ctx->pc = 0x14cae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14caec: 0x10a0000e
    ctx->pc = 0x14CAECu;
    {
        const bool branch_taken_0x14caec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CAF0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14caec) {
            ctx->pc = 0x14CB28u;
            goto label_14cb28;
        }
    }
    ctx->pc = 0x14CAF4u;
    // 0x14caf4: 0x10000004
    ctx->pc = 0x14CAF4u;
    {
        const bool branch_taken_0x14caf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CAF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x14caf4) {
            ctx->pc = 0x14CB08u;
            goto label_14cb08;
        }
    }
    ctx->pc = 0x14CAFCu;
    // 0x14cafc: 0x0
    ctx->pc = 0x14cafcu;
    // NOP
label_14cb00:
    // 0x14cb00: 0x60282d
    ctx->pc = 0x14cb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb04: 0x8c820004
    ctx->pc = 0x14cb04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14cb08:
    // 0x14cb08: 0x10400003
    ctx->pc = 0x14CB08u;
    {
        const bool branch_taken_0x14cb08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CB0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x14cb08) {
            ctx->pc = 0x14CB18u;
            goto label_14cb18;
        }
    }
    ctx->pc = 0x14CB10u;
    // 0x14cb10: 0x8c830008
    ctx->pc = 0x14cb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14cb14: 0x43300b
    ctx->pc = 0x14cb14u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_14cb18:
    // 0x14cb18: 0x851021
    ctx->pc = 0x14cb18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cb1c: 0x8c430004
    ctx->pc = 0x14cb1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14cb20: 0x1460fff7
    ctx->pc = 0x14CB20u;
    {
        const bool branch_taken_0x14cb20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CB24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x14cb20) {
            ctx->pc = 0x14CB00u;
            goto label_14cb00;
        }
    }
    ctx->pc = 0x14CB28u;
label_14cb28:
    // 0x14cb28: 0x3e00008
    ctx->pc = 0x14CB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CB00u: goto label_14cb00;
            case 0x14CB08u: goto label_14cb08;
            case 0x14CB18u: goto label_14cb18;
            case 0x14CB28u: goto label_14cb28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CB30u;
}
