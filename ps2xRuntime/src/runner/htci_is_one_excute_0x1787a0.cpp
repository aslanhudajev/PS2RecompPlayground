#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_is_one_excute
// Address: 0x1787a0 - 0x1787f8
void htci_is_one_excute_0x1787a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_is_one_excute");


    ctx->pc = 0x1787a0u;

    // 0x1787a0: 0x27bdffd0
    ctx->pc = 0x1787a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1787a4: 0xffb10010
    ctx->pc = 0x1787a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1787a8: 0xffb00000
    ctx->pc = 0x1787a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1787ac: 0xffbf0020
    ctx->pc = 0x1787acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1787b0: 0xc05d95e
    ctx->pc = 0x1787B0u;
    SET_GPR_U32(ctx, 31, 0x1787B8u);
    ctx->pc = 0x1787B4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787B8u; }
        else if (ctx->pc != 0x1787B8u) { ctx->pc = 0x1787B8u; }
    }
    if (ctx->pc != 0x1787B8u) { return; }
    ctx->pc = 0x1787B8u;
    // 0x1787b8: 0x8e24000c
    ctx->pc = 0x1787b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1787bc: 0x24050001
    ctx->pc = 0x1787bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1787c0: 0xc05651a
    ctx->pc = 0x1787C0u;
    SET_GPR_U32(ctx, 31, 0x1787C8u);
    ctx->pc = 0x1787C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x159468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x159468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787C8u; }
        else if (ctx->pc != 0x1787C8u) { ctx->pc = 0x1787C8u; }
    }
    if (ctx->pc != 0x1787C8u) { return; }
    ctx->pc = 0x1787C8u;
    // 0x1787c8: 0xc05d966
    ctx->pc = 0x1787C8u;
    SET_GPR_U32(ctx, 31, 0x1787D0u);
    ctx->pc = 0x1787CCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787D0u; }
        else if (ctx->pc != 0x1787D0u) { ctx->pc = 0x1787D0u; }
    }
    if (ctx->pc != 0x1787D0u) { return; }
    ctx->pc = 0x1787D0u;
    // 0x1787d0: 0x6000004
    ctx->pc = 0x1787D0u;
    {
        const bool branch_taken_0x1787d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1787D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1787d0) {
            ctx->pc = 0x1787E4u;
            goto label_1787e4;
        }
    }
    ctx->pc = 0x1787D8u;
    // 0x1787d8: 0x8e220008
    ctx->pc = 0x1787d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1787dc: 0x38420001
    ctx->pc = 0x1787dcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1787e0: 0x2102b
    ctx->pc = 0x1787e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1787e4:
    // 0x1787e4: 0xdfbf0020
    ctx->pc = 0x1787e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1787e8: 0xdfb10010
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1787ec: 0xdfb00000
    ctx->pc = 0x1787ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1787f0: 0x3e00008
    ctx->pc = 0x1787F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1787F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1787E4u: goto label_1787e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1787F8u;
}
