#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: waitInit__10PlayerTaskFv
// Address: 0x20efb0 - 0x20efdc
void waitInit__10PlayerTaskFv_0x20efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("waitInit__10PlayerTaskFv");


    ctx->pc = 0x20efb0u;

    // 0x20efb0: 0x27bdfff0
    ctx->pc = 0x20efb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20efb4: 0x3c020027
    ctx->pc = 0x20efb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20efb8: 0x7fbf0000
    ctx->pc = 0x20efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20efbc: 0x70803628
    ctx->pc = 0x20efbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20efc0: 0x24423368
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13160));
    // 0x20efc4: 0x8c841cb4
    ctx->pc = 0x20efc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7348)));
    // 0x20efc8: 0xc068fd8
    ctx->pc = 0x20EFC8u;
    SET_GPR_U32(ctx, 31, 0x20EFD0u);
    ctx->pc = 0x20EFCCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EFD0u; }
        else if (ctx->pc != 0x20EFD0u) { ctx->pc = 0x20EFD0u; }
    }
    if (ctx->pc != 0x20EFD0u) { return; }
    ctx->pc = 0x20EFD0u;
    // 0x20efd0: 0x7bbf0000
    ctx->pc = 0x20efd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20efd4: 0x3e00008
    ctx->pc = 0x20EFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EFD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20EFDCu;
}
