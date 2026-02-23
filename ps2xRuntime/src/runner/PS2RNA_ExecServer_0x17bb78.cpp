#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_ExecServer
// Address: 0x17bb78 - 0x17bbf0
void PS2RNA_ExecServer_0x17bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_ExecServer");


    ctx->pc = 0x17bb78u;

    // 0x17bb78: 0x27bdffc0
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bb7c: 0xffb20020
    ctx->pc = 0x17bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17bb80: 0xffb10010
    ctx->pc = 0x17bb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17bb84: 0xffb00000
    ctx->pc = 0x17bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bb88: 0xffbf0030
    ctx->pc = 0x17bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17bb8c: 0xc05efb0
    ctx->pc = 0x17BB8Cu;
    SET_GPR_U32(ctx, 31, 0x17BB94u);
    ctx->pc = 0x17BB90u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17BEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RNACRS_Lock_0x17bec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB94u; }
        else if (ctx->pc != 0x17BB94u) { ctx->pc = 0x17BB94u; }
    }
    if (ctx->pc != 0x17BB94u) { return; }
    ctx->pc = 0x17BB94u;
    // 0x17bb94: 0x3c020024
    ctx->pc = 0x17bb94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17bb98: 0x2450e0e0
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x17bb9c: 0x261102a0
    ctx->pc = 0x17bb9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 672));
    // 0x17bba0: 0x82020000
    ctx->pc = 0x17bba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17bba4: 0x0
    ctx->pc = 0x17bba4u;
    // NOP
label_17bba8:
    // 0x17bba8: 0x54520004
    ctx->pc = 0x17BBA8u;
    {
        const bool branch_taken_0x17bba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x17bba8) {
            ctx->pc = 0x17BBACu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 84));
            ctx->pc = 0x17BBBCu;
            goto label_17bbbc;
        }
    }
    ctx->pc = 0x17BBB0u;
    // 0x17bbb0: 0xc05ee8c
    ctx->pc = 0x17BBB0u;
    SET_GPR_U32(ctx, 31, 0x17BBB8u);
    ctx->pc = 0x17BBB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_ExecHndl_0x17ba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB8u; }
        else if (ctx->pc != 0x17BBB8u) { ctx->pc = 0x17BBB8u; }
    }
    if (ctx->pc != 0x17BBB8u) { return; }
    ctx->pc = 0x17BBB8u;
    // 0x17bbb8: 0x26100054
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 84));
label_17bbbc:
    // 0x17bbbc: 0x211102a
    ctx->pc = 0x17bbbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x17bbc0: 0x5440fff9
    ctx->pc = 0x17BBC0u;
    {
        const bool branch_taken_0x17bbc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17bbc0) {
            ctx->pc = 0x17BBC4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x17BBA8u;
            goto label_17bba8;
        }
    }
    ctx->pc = 0x17BBC8u;
    // 0x17bbc8: 0xc05efb4
    ctx->pc = 0x17BBC8u;
    SET_GPR_U32(ctx, 31, 0x17BBD0u);
    ctx->pc = 0x17BED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RNACRS_Unlock_0x17bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBD0u; }
        else if (ctx->pc != 0x17BBD0u) { ctx->pc = 0x17BBD0u; }
    }
    if (ctx->pc != 0x17BBD0u) { return; }
    ctx->pc = 0x17BBD0u;
    // 0x17bbd0: 0xc05da68
    ctx->pc = 0x17BBD0u;
    SET_GPR_U32(ctx, 31, 0x17BBD8u);
    ctx->pc = 0x1769A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_ExecServer_0x1769a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBD8u; }
        else if (ctx->pc != 0x17BBD8u) { ctx->pc = 0x17BBD8u; }
    }
    if (ctx->pc != 0x17BBD8u) { return; }
    ctx->pc = 0x17BBD8u;
    // 0x17bbd8: 0xdfbf0030
    ctx->pc = 0x17bbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bbdc: 0xdfb20020
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bbe0: 0xdfb10010
    ctx->pc = 0x17bbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbe4: 0xdfb00000
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbe8: 0x805f628
    ctx->pc = 0x17BBE8u;
    ctx->pc = 0x17BBECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17D8A0u;
    SJX_ExecServer_0x17d8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x17BBF0u;
}
