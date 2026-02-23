#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsPrepEnd
// Address: 0x19af08 - 0x19afb8
void sfply_IsPrepEnd_0x19af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsPrepEnd");


    ctx->pc = 0x19af08u;

    // 0x19af08: 0x27bdffc0
    ctx->pc = 0x19af08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19af0c: 0x24050005
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19af10: 0xffb00000
    ctx->pc = 0x19af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19af14: 0x80802d
    ctx->pc = 0x19af14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af18: 0xffbf0030
    ctx->pc = 0x19af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19af1c: 0xffb20020
    ctx->pc = 0x19af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19af20: 0xc0674c2
    ctx->pc = 0x19AF20u;
    SET_GPR_U32(ctx, 31, 0x19AF28u);
    ctx->pc = 0x19AF24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF28u; }
        else if (ctx->pc != 0x19AF28u) { ctx->pc = 0x19AF28u; }
    }
    if (ctx->pc != 0x19AF28u) { return; }
    ctx->pc = 0x19AF28u;
    // 0x19af28: 0x14400003
    ctx->pc = 0x19AF28u;
    {
        const bool branch_taken_0x19af28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19AF2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19af28) {
            ctx->pc = 0x19AF38u;
            goto label_19af38;
        }
    }
    ctx->pc = 0x19AF30u;
    // 0x19af30: 0x10000009
    ctx->pc = 0x19AF30u;
    {
        const bool branch_taken_0x19af30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AF34u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19af30) {
            ctx->pc = 0x19AF58u;
            goto label_19af58;
        }
    }
    ctx->pc = 0x19AF38u;
label_19af38:
    // 0x19af38: 0xc067ce4
    ctx->pc = 0x19AF38u;
    SET_GPR_U32(ctx, 31, 0x19AF40u);
    ctx->pc = 0x19AF3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF40u; }
        else if (ctx->pc != 0x19AF40u) { ctx->pc = 0x19AF40u; }
    }
    if (ctx->pc != 0x19AF40u) { return; }
    ctx->pc = 0x19AF40u;
    // 0x19af40: 0x40902d
    ctx->pc = 0x19af40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af44: 0x200202d
    ctx->pc = 0x19af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af48: 0xc067cf0
    ctx->pc = 0x19AF48u;
    SET_GPR_U32(ctx, 31, 0x19AF50u);
    ctx->pc = 0x19AF4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF50u; }
        else if (ctx->pc != 0x19AF50u) { ctx->pc = 0x19AF50u; }
    }
    if (ctx->pc != 0x19AF50u) { return; }
    ctx->pc = 0x19AF50u;
    // 0x19af50: 0x2429025
    ctx->pc = 0x19af50u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19af54: 0x200202d
    ctx->pc = 0x19af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19af58:
    // 0x19af58: 0xc0674c2
    ctx->pc = 0x19AF58u;
    SET_GPR_U32(ctx, 31, 0x19AF60u);
    ctx->pc = 0x19AF5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF60u; }
        else if (ctx->pc != 0x19AF60u) { ctx->pc = 0x19AF60u; }
    }
    if (ctx->pc != 0x19AF60u) { return; }
    ctx->pc = 0x19AF60u;
    // 0x19af60: 0x14400003
    ctx->pc = 0x19AF60u;
    {
        const bool branch_taken_0x19af60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19AF64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19af60) {
            ctx->pc = 0x19AF70u;
            goto label_19af70;
        }
    }
    ctx->pc = 0x19AF68u;
    // 0x19af68: 0x10000008
    ctx->pc = 0x19AF68u;
    {
        const bool branch_taken_0x19af68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AF6Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19af68) {
            ctx->pc = 0x19AF8Cu;
            goto label_19af8c;
        }
    }
    ctx->pc = 0x19AF70u;
label_19af70:
    // 0x19af70: 0xc067ce4
    ctx->pc = 0x19AF70u;
    SET_GPR_U32(ctx, 31, 0x19AF78u);
    ctx->pc = 0x19AF74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF78u; }
        else if (ctx->pc != 0x19AF78u) { ctx->pc = 0x19AF78u; }
    }
    if (ctx->pc != 0x19AF78u) { return; }
    ctx->pc = 0x19AF78u;
    // 0x19af78: 0x40882d
    ctx->pc = 0x19af78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af7c: 0x200202d
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af80: 0xc067cf0
    ctx->pc = 0x19AF80u;
    SET_GPR_U32(ctx, 31, 0x19AF88u);
    ctx->pc = 0x19AF84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF88u; }
        else if (ctx->pc != 0x19AF88u) { ctx->pc = 0x19AF88u; }
    }
    if (ctx->pc != 0x19AF88u) { return; }
    ctx->pc = 0x19AF88u;
    // 0x19af88: 0x2228825
    ctx->pc = 0x19af88u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19af8c:
    // 0x19af8c: 0x12400004
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AF90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AFA0u;
            goto label_19afa0;
        }
    }
    ctx->pc = 0x19AF94u;
    // 0x19af94: 0x16200002
    ctx->pc = 0x19AF94u;
    {
        const bool branch_taken_0x19af94 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x19AF98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19af94) {
            ctx->pc = 0x19AFA0u;
            goto label_19afa0;
        }
    }
    ctx->pc = 0x19AF9Cu;
    // 0x19af9c: 0x102d
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19afa0:
    // 0x19afa0: 0xdfbf0030
    ctx->pc = 0x19afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19afa4: 0xdfb20020
    ctx->pc = 0x19afa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19afa8: 0xdfb10010
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19afac: 0xdfb00000
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19afb0: 0x3e00008
    ctx->pc = 0x19AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AF38u: goto label_19af38;
            case 0x19AF58u: goto label_19af58;
            case 0x19AF70u: goto label_19af70;
            case 0x19AF8Cu: goto label_19af8c;
            case 0x19AFA0u: goto label_19afa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AFB8u;
}
