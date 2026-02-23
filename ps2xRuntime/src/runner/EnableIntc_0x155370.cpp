#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EnableIntc
// Address: 0x155370 - 0x1553d8
void EnableIntc_0x155370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnableIntc");


    ctx->pc = 0x155370u;

    // 0x155370: 0x27bdffd0
    ctx->pc = 0x155370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155374: 0xffb10010
    ctx->pc = 0x155374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x155378: 0xffbf0020
    ctx->pc = 0x155378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15537c: 0x80882d
    ctx->pc = 0x15537cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155380: 0xffb00000
    ctx->pc = 0x155380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155384: 0x40106000
    ctx->pc = 0x155384u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x155388: 0x3c020001
    ctx->pc = 0x155388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x15538c: 0x2028024
    ctx->pc = 0x15538cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155390: 0x12000003
    ctx->pc = 0x155390u;
    {
        const bool branch_taken_0x155390 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x155390) {
            ctx->pc = 0x1553A0u;
            goto label_1553a0;
        }
    }
    ctx->pc = 0x155398u;
    // 0x155398: 0xc05725c
    ctx->pc = 0x155398u;
    SET_GPR_U32(ctx, 31, 0x1553A0u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553A0u; }
        else if (ctx->pc != 0x1553A0u) { ctx->pc = 0x1553A0u; }
    }
    if (ctx->pc != 0x1553A0u) { return; }
    ctx->pc = 0x1553A0u;
label_1553a0:
    // 0x1553a0: 0xc055188
    ctx->pc = 0x1553A0u;
    SET_GPR_U32(ctx, 31, 0x1553A8u);
    ctx->pc = 0x1553A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154620u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableIntc_0x154620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553A8u; }
        else if (ctx->pc != 0x1553A8u) { ctx->pc = 0x1553A8u; }
    }
    if (ctx->pc != 0x1553A8u) { return; }
    ctx->pc = 0x1553A8u;
    // 0x1553a8: 0x40882d
    ctx->pc = 0x1553a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553ac: 0xf
    ctx->pc = 0x1553acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1553b0: 0x12000004
    ctx->pc = 0x1553B0u;
    {
        const bool branch_taken_0x1553b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1553B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1553b0) {
            ctx->pc = 0x1553C4u;
            goto label_1553c4;
        }
    }
    ctx->pc = 0x1553B8u;
    // 0x1553b8: 0xc05726e
    ctx->pc = 0x1553B8u;
    SET_GPR_U32(ctx, 31, 0x1553C0u);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1553C0u; }
        else if (ctx->pc != 0x1553C0u) { ctx->pc = 0x1553C0u; }
    }
    if (ctx->pc != 0x1553C0u) { return; }
    ctx->pc = 0x1553C0u;
    // 0x1553c0: 0x220102d
    ctx->pc = 0x1553c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1553c4:
    // 0x1553c4: 0xdfbf0020
    ctx->pc = 0x1553c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1553c8: 0xdfb10010
    ctx->pc = 0x1553c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1553cc: 0xdfb00000
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1553d0: 0x3e00008
    ctx->pc = 0x1553D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1553A0u: goto label_1553a0;
            case 0x1553C4u: goto label_1553c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1553D8u;
}
