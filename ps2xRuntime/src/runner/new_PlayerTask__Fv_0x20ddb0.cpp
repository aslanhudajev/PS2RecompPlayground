#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PlayerTask__Fv
// Address: 0x20ddb0 - 0x20de38
void new_PlayerTask__Fv_0x20ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PlayerTask__Fv");


    ctx->pc = 0x20ddb0u;

    // 0x20ddb0: 0x27bdffc0
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ddb4: 0x7fbf0030
    ctx->pc = 0x20ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20ddb8: 0x7fb20020
    ctx->pc = 0x20ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20ddbc: 0x7fb10010
    ctx->pc = 0x20ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ddc0: 0x7fb00000
    ctx->pc = 0x20ddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ddc4: 0x70009628
    ctx->pc = 0x20ddc4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ddc8:
    // 0x20ddc8: 0xc06903c
    ctx->pc = 0x20DDC8u;
    SET_GPR_U32(ctx, 31, 0x20DDD0u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD0u; }
        else if (ctx->pc != 0x20DDD0u) { ctx->pc = 0x20DDD0u; }
    }
    if (ctx->pc != 0x20DDD0u) { return; }
    ctx->pc = 0x20DDD0u;
    // 0x20ddd0: 0xc06903c
    ctx->pc = 0x20DDD0u;
    SET_GPR_U32(ctx, 31, 0x20DDD8u);
    ctx->pc = 0x20DDD4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD8u; }
        else if (ctx->pc != 0x20DDD8u) { ctx->pc = 0x20DDD8u; }
    }
    if (ctx->pc != 0x20DDD8u) { return; }
    ctx->pc = 0x20DDD8u;
    // 0x20ddd8: 0xc06903c
    ctx->pc = 0x20DDD8u;
    SET_GPR_U32(ctx, 31, 0x20DDE0u);
    ctx->pc = 0x20DDDCu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDE0u; }
        else if (ctx->pc != 0x20DDE0u) { ctx->pc = 0x20DDE0u; }
    }
    if (ctx->pc != 0x20DDE0u) { return; }
    ctx->pc = 0x20DDE0u;
    // 0x20dde0: 0x8e260010
    ctx->pc = 0x20dde0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20dde4: 0x8e070014
    ctx->pc = 0x20dde4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20dde8: 0x240428c0
    ctx->pc = 0x20dde8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10432));
    // 0x20ddec: 0x70002e28
    ctx->pc = 0x20ddecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ddf0: 0xc069040
    ctx->pc = 0x20DDF0u;
    SET_GPR_U32(ctx, 31, 0x20DDF8u);
    ctx->pc = 0x20DDF4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDF8u; }
        else if (ctx->pc != 0x20DDF8u) { ctx->pc = 0x20DDF8u; }
    }
    if (ctx->pc != 0x20DDF8u) { return; }
    ctx->pc = 0x20DDF8u;
    // 0x20ddf8: 0x70402628
    ctx->pc = 0x20ddf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ddfc: 0x50800005
    ctx->pc = 0x20DDFCu;
    {
        const bool branch_taken_0x20ddfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ddfc) {
            ctx->pc = 0x20DE00u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x20DE14u;
            goto label_20de14;
        }
    }
    ctx->pc = 0x20DE04u;
    // 0x20de04: 0x24050001
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de08: 0xc083790
    ctx->pc = 0x20DE08u;
    SET_GPR_U32(ctx, 31, 0x20DE10u);
    ctx->pc = 0x20DE0Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20DE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PlayerTaskFi_0x20de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE10u; }
        else if (ctx->pc != 0x20DE10u) { ctx->pc = 0x20DE10u; }
    }
    if (ctx->pc != 0x20DE10u) { return; }
    ctx->pc = 0x20DE10u;
    // 0x20de10: 0x26520001
    ctx->pc = 0x20de10u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_20de14:
    // 0x20de14: 0x2a430002
    ctx->pc = 0x20de14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 2));
    // 0x20de18: 0x1460ffeb
    ctx->pc = 0x20DE18u;
    {
        const bool branch_taken_0x20de18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20de18) {
            ctx->pc = 0x20DDC8u;
            goto label_20ddc8;
        }
    }
    ctx->pc = 0x20DE20u;
    // 0x20de20: 0x7bbf0030
    ctx->pc = 0x20de20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20de24: 0x7bb20020
    ctx->pc = 0x20de24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de28: 0x7bb10010
    ctx->pc = 0x20de28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20de2c: 0x7bb00000
    ctx->pc = 0x20de2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20de30: 0x3e00008
    ctx->pc = 0x20DE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DE34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DE14u: goto label_20de14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DE38u;
}
