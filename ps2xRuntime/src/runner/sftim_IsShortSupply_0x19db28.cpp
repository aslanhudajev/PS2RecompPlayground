#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsShortSupply
// Address: 0x19db28 - 0x19dbb0
void sftim_IsShortSupply_0x19db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsShortSupply");


    ctx->pc = 0x19db28u;

    // 0x19db28: 0x27bdffb0
    ctx->pc = 0x19db28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19db2c: 0x24050005
    ctx->pc = 0x19db2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19db30: 0xffb00010
    ctx->pc = 0x19db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19db34: 0xffbf0040
    ctx->pc = 0x19db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19db38: 0x80802d
    ctx->pc = 0x19db38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db3c: 0xffb20030
    ctx->pc = 0x19db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19db40: 0xffb10020
    ctx->pc = 0x19db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19db44: 0x8e110bac
    ctx->pc = 0x19db44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 2988)));
    // 0x19db48: 0xc0674c2
    ctx->pc = 0x19DB48u;
    SET_GPR_U32(ctx, 31, 0x19DB50u);
    ctx->pc = 0x19DB4Cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 2968)));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB50u; }
        else if (ctx->pc != 0x19DB50u) { ctx->pc = 0x19DB50u; }
    }
    if (ctx->pc != 0x19DB50u) { return; }
    ctx->pc = 0x19DB50u;
    // 0x19db50: 0x10400011
    ctx->pc = 0x19DB50u;
    {
        const bool branch_taken_0x19db50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19db50) {
            ctx->pc = 0x19DB98u;
            goto label_19db98;
        }
    }
    ctx->pc = 0x19DB58u;
    // 0x19db58: 0x8e020ad4
    ctx->pc = 0x19db58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x19db5c: 0x5440000e
    ctx->pc = 0x19DB5Cu;
    {
        const bool branch_taken_0x19db5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19db5c) {
            ctx->pc = 0x19DB60u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x19DB98u;
            goto label_19db98;
        }
    }
    ctx->pc = 0x19DB64u;
    // 0x19db64: 0x200202d
    ctx->pc = 0x19db64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db68: 0x3a0282d
    ctx->pc = 0x19db68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db6c: 0xc067832
    ctx->pc = 0x19DB6Cu;
    SET_GPR_U32(ctx, 31, 0x19DB74u);
    ctx->pc = 0x19DB70u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_GetTimeVsync_0x19e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB74u; }
        else if (ctx->pc != 0x19DB74u) { ctx->pc = 0x19DB74u; }
    }
    if (ctx->pc != 0x19DB74u) { return; }
    ctx->pc = 0x19DB74u;
    // 0x19db74: 0x8fa70004
    ctx->pc = 0x19db74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19db78: 0x220202d
    ctx->pc = 0x19db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db7c: 0x8fa60000
    ctx->pc = 0x19db7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db80: 0xc05f946
    ctx->pc = 0x19DB80u;
    SET_GPR_U32(ctx, 31, 0x19DB88u);
    ctx->pc = 0x19DB84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB88u; }
        else if (ctx->pc != 0x19DB88u) { ctx->pc = 0x19DB88u; }
    }
    if (ctx->pc != 0x19DB88u) { return; }
    ctx->pc = 0x19DB88u;
    // 0x19db88: 0x40182d
    ctx->pc = 0x19db88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db8c: 0x14600002
    ctx->pc = 0x19DB8Cu;
    {
        const bool branch_taken_0x19db8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DB90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19db8c) {
            ctx->pc = 0x19DB98u;
            goto label_19db98;
        }
    }
    ctx->pc = 0x19DB94u;
    // 0x19db94: 0x102d
    ctx->pc = 0x19db94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19db98:
    // 0x19db98: 0xdfbf0040
    ctx->pc = 0x19db98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19db9c: 0xdfb20030
    ctx->pc = 0x19db9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dba0: 0xdfb10020
    ctx->pc = 0x19dba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dba4: 0xdfb00010
    ctx->pc = 0x19dba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dba8: 0x3e00008
    ctx->pc = 0x19DBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DB98u: goto label_19db98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DBB0u;
}
