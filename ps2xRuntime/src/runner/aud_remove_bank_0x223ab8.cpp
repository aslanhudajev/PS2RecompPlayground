#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_remove_bank
// Address: 0x223ab8 - 0x223b14
void aud_remove_bank_0x223ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223ab8u;

    // 0x223ab8: 0x27bdffe0
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223abc: 0xffbf0010
    ctx->pc = 0x223abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223ac0: 0xffb00000
    ctx->pc = 0x223ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223ac4: 0xc088cb6
    ctx->pc = 0x223AC4u;
    SET_GPR_U32(ctx, 31, 0x223ACCu);
    ctx->pc = 0x223AC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223ACCu; }
    }
    if (ctx->pc != 0x223ACCu) { return; }
    ctx->pc = 0x223ACCu;
    // 0x223acc: 0x3c02003c
    ctx->pc = 0x223accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223ad0: 0xac500ac0
    ctx->pc = 0x223ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x223ad4: 0x3c02003c
    ctx->pc = 0x223ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223ad8: 0x8c420f68
    ctx->pc = 0x223ad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3944)));
    // 0x223adc: 0x14400009
    ctx->pc = 0x223ADCu;
    {
        const bool branch_taken_0x223adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223AE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223adc) {
            ctx->pc = 0x223B04u;
            goto label_223b04;
        }
    }
    ctx->pc = 0x223AE4u;
    // 0x223ae4: 0x24040018
    ctx->pc = 0x223ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x223ae8: 0xc088ce8
    ctx->pc = 0x223AE8u;
    SET_GPR_U32(ctx, 31, 0x223AF0u);
    ctx->pc = 0x223AECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AF0u; }
    }
    if (ctx->pc != 0x223AF0u) { return; }
    ctx->pc = 0x223AF0u;
    // 0x223af0: 0x4400003
    ctx->pc = 0x223AF0u;
    {
        const bool branch_taken_0x223af0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223AF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223af0) {
            ctx->pc = 0x223B00u;
            goto label_223b00;
        }
    }
    ctx->pc = 0x223AF8u;
    // 0x223af8: 0x10000002
    ctx->pc = 0x223AF8u;
    {
        const bool branch_taken_0x223af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223AFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
        if (branch_taken_0x223af8) {
            ctx->pc = 0x223B04u;
            goto label_223b04;
        }
    }
    ctx->pc = 0x223B00u;
label_223b00:
    // 0x223b00: 0x102d
    ctx->pc = 0x223b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223b04:
    // 0x223b04: 0xdfbf0010
    ctx->pc = 0x223b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b08: 0xdfb00000
    ctx->pc = 0x223b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b0c: 0x3e00008
    ctx->pc = 0x223B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223B00u: goto label_223b00;
            case 0x223B04u: goto label_223b04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223B14u;
}
