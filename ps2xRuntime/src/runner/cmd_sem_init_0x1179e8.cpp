#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cmd_sem_init
// Address: 0x1179e8 - 0x117a7c
void cmd_sem_init_0x1179e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1179e8u;

    // 0x1179e8: 0x27bdffb0
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1179ec: 0x2403ffff
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1179f0: 0xffb10030
    ctx->pc = 0x1179f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1179f4: 0x3c110017
    ctx->pc = 0x1179f4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1179f8: 0xffbf0040
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1179fc: 0x8e22fca8
    ctx->pc = 0x1179fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966440)));
    // 0x117a00: 0x10430007
    ctx->pc = 0x117A00u;
    {
        const bool branch_taken_0x117a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x117A04u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x117a00) {
            ctx->pc = 0x117A20u;
            goto label_117a20;
        }
    }
    ctx->pc = 0x117A08u;
    // 0x117a08: 0x3c100017
    ctx->pc = 0x117a08u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x117a0c: 0x8e02fcac
    ctx->pc = 0x117a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966444)));
    // 0x117a10: 0x14430016
    ctx->pc = 0x117A10u;
    {
        const bool branch_taken_0x117a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x117A14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x117a10) {
            ctx->pc = 0x117A6Cu;
            goto label_117a6c;
        }
    }
    ctx->pc = 0x117A18u;
    // 0x117a18: 0x10000003
    ctx->pc = 0x117A18u;
    {
        const bool branch_taken_0x117a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117A1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x117a18) {
            ctx->pc = 0x117A28u;
            goto label_117a28;
        }
    }
    ctx->pc = 0x117A20u;
label_117a20:
    // 0x117a20: 0x3c100017
    ctx->pc = 0x117a20u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x117a24: 0x24020001
    ctx->pc = 0x117a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_117a28:
    // 0x117a28: 0xafa00014
    ctx->pc = 0x117a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x117a2c: 0xafa20004
    ctx->pc = 0x117a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x117a30: 0x3a0202d
    ctx->pc = 0x117a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a34: 0xc0438a8
    ctx->pc = 0x117A34u;
    SET_GPR_U32(ctx, 31, 0x117A3Cu);
    ctx->pc = 0x117A38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A3Cu; }
    }
    if (ctx->pc != 0x117A3Cu) { return; }
    ctx->pc = 0x117A3Cu;
    // 0x117a3c: 0x3a0202d
    ctx->pc = 0x117a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a40: 0xc0438a8
    ctx->pc = 0x117A40u;
    SET_GPR_U32(ctx, 31, 0x117A48u);
    ctx->pc = 0x117A44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966440), GPR_U32(ctx, 2));
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A48u; }
    }
    if (ctx->pc != 0x117A48u) { return; }
    ctx->pc = 0x117A48u;
    // 0x117a48: 0xae02fcac
    ctx->pc = 0x117a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966444), GPR_U32(ctx, 2));
    // 0x117a4c: 0x3a0202d
    ctx->pc = 0x117a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a50: 0xc0438a8
    ctx->pc = 0x117A50u;
    SET_GPR_U32(ctx, 31, 0x117A58u);
    ctx->pc = 0x117A54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A58u; }
    }
    if (ctx->pc != 0x117A58u) { return; }
    ctx->pc = 0x117A58u;
    // 0x117a58: 0x3c030017
    ctx->pc = 0x117a58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x117a5c: 0xac62fca0
    ctx->pc = 0x117a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966432), GPR_U32(ctx, 2));
    // 0x117a60: 0x3c020017
    ctx->pc = 0x117a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x117a64: 0xac40fcb0
    ctx->pc = 0x117a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966448), GPR_U32(ctx, 0));
    // 0x117a68: 0xdfbf0040
    ctx->pc = 0x117a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117a6c:
    // 0x117a6c: 0xdfb10030
    ctx->pc = 0x117a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a70: 0xdfb00020
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a74: 0x3e00008
    ctx->pc = 0x117A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117A20u: goto label_117a20;
            case 0x117A28u: goto label_117a28;
            case 0x117A6Cu: goto label_117a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117A7Cu;
}
