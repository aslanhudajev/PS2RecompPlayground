#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_Destroy
// Address: 0x16ddf8 - 0x16de58
void ADXSJD_Destroy_0x16ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Destroy");


    ctx->pc = 0x16ddf8u;

    // 0x16ddf8: 0x27bdffe0
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ddfc: 0xffb00000
    ctx->pc = 0x16ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16de00: 0x80802d
    ctx->pc = 0x16de00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de04: 0x12000010
    ctx->pc = 0x16DE04u;
    {
        const bool branch_taken_0x16de04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DE08u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x16de04) {
            ctx->pc = 0x16DE48u;
            goto label_16de48;
        }
    }
    ctx->pc = 0x16DE0Cu;
    // 0x16de0c: 0x8e040004
    ctx->pc = 0x16de0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16de10: 0x10800003
    ctx->pc = 0x16DE10u;
    {
        const bool branch_taken_0x16de10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x16de10) {
            ctx->pc = 0x16DE20u;
            goto label_16de20;
        }
    }
    ctx->pc = 0x16DE18u;
    // 0x16de18: 0xc059f3c
    ctx->pc = 0x16DE18u;
    SET_GPR_U32(ctx, 31, 0x16DE20u);
    ctx->pc = 0x167CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Destroy_0x167cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        else if (ctx->pc != 0x16DE20u) { ctx->pc = 0x16DE20u; }
    }
    if (ctx->pc != 0x16DE20u) { return; }
    ctx->pc = 0x16DE20u;
label_16de20:
    // 0x16de20: 0xc05a4e4
    ctx->pc = 0x16DE20u;
    SET_GPR_U32(ctx, 31, 0x16DE28u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE28u; }
        else if (ctx->pc != 0x16DE28u) { ctx->pc = 0x16DE28u; }
    }
    if (ctx->pc != 0x16DE28u) { return; }
    ctx->pc = 0x16DE28u;
    // 0x16de28: 0x200202d
    ctx->pc = 0x16de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de2c: 0x282d
    ctx->pc = 0x16de2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de30: 0xc050cfe
    ctx->pc = 0x16DE30u;
    SET_GPR_U32(ctx, 31, 0x16DE38u);
    ctx->pc = 0x16DE34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 156));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE38u; }
        else if (ctx->pc != 0x16DE38u) { ctx->pc = 0x16DE38u; }
    }
    if (ctx->pc != 0x16DE38u) { return; }
    ctx->pc = 0x16DE38u;
    // 0x16de38: 0xdfbf0010
    ctx->pc = 0x16de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16de3c: 0xdfb00000
    ctx->pc = 0x16de3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de40: 0x805a4f0
    ctx->pc = 0x16DE40u;
    ctx->pc = 0x16DE44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x16DE48u;
label_16de48:
    // 0x16de48: 0xdfbf0010
    ctx->pc = 0x16de48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16de4c: 0xdfb00000
    ctx->pc = 0x16de4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de50: 0x3e00008
    ctx->pc = 0x16DE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DE20u: goto label_16de20;
            case 0x16DE48u: goto label_16de48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DE58u;
}
