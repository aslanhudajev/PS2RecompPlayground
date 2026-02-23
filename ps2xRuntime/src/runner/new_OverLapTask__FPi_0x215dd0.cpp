#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_OverLapTask__FPi
// Address: 0x215dd0 - 0x215e48
void new_OverLapTask__FPi_0x215dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_OverLapTask__FPi");


    ctx->pc = 0x215dd0u;

    // 0x215dd0: 0x27bdffd0
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215dd4: 0x7fbf0020
    ctx->pc = 0x215dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x215dd8: 0x7fb10010
    ctx->pc = 0x215dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x215ddc: 0x7fb00000
    ctx->pc = 0x215ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215de0: 0x3c010051
    ctx->pc = 0x215de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x215de4: 0x8c3034d8
    ctx->pc = 0x215de4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 13528)));
    // 0x215de8: 0xc06903c
    ctx->pc = 0x215DE8u;
    SET_GPR_U32(ctx, 31, 0x215DF0u);
    ctx->pc = 0x215DECu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DF0u; }
        else if (ctx->pc != 0x215DF0u) { ctx->pc = 0x215DF0u; }
    }
    if (ctx->pc != 0x215DF0u) { return; }
    ctx->pc = 0x215DF0u;
    // 0x215df0: 0x8e070014
    ctx->pc = 0x215df0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x215df4: 0x24040060
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x215df8: 0x70002e28
    ctx->pc = 0x215df8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215dfc: 0x72003628
    ctx->pc = 0x215dfcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x215e00: 0xc069040
    ctx->pc = 0x215E00u;
    SET_GPR_U32(ctx, 31, 0x215E08u);
    ctx->pc = 0x215E04u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E08u; }
        else if (ctx->pc != 0x215E08u) { ctx->pc = 0x215E08u; }
    }
    if (ctx->pc != 0x215E08u) { return; }
    ctx->pc = 0x215E08u;
    // 0x215e08: 0x70402628
    ctx->pc = 0x215e08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x215e0c: 0x10800003
    ctx->pc = 0x215E0Cu;
    {
        const bool branch_taken_0x215e0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x215E10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x215e0c) {
            ctx->pc = 0x215E1Cu;
            goto label_215e1c;
        }
    }
    ctx->pc = 0x215E14u;
    // 0x215e14: 0xc085604
    ctx->pc = 0x215E14u;
    SET_GPR_U32(ctx, 31, 0x215E1Cu);
    ctx->pc = 0x215E18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11OverLapTaskFPi_0x215810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E1Cu; }
        else if (ctx->pc != 0x215E1Cu) { ctx->pc = 0x215E1Cu; }
    }
    if (ctx->pc != 0x215E1Cu) { return; }
    ctx->pc = 0x215E1Cu;
label_215e1c:
    // 0x215e1c: 0x8e240000
    ctx->pc = 0x215e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215e20: 0x24030002
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x215e24: 0x14830003
    ctx->pc = 0x215E24u;
    {
        const bool branch_taken_0x215e24 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x215e24) {
            ctx->pc = 0x215E34u;
            goto label_215e34;
        }
    }
    ctx->pc = 0x215E2Cu;
    // 0x215e2c: 0xc0806d4
    ctx->pc = 0x215E2Cu;
    SET_GPR_U32(ctx, 31, 0x215E34u);
    ctx->pc = 0x201B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartOverLap0__Fv_0x201b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E34u; }
        else if (ctx->pc != 0x215E34u) { ctx->pc = 0x215E34u; }
    }
    if (ctx->pc != 0x215E34u) { return; }
    ctx->pc = 0x215E34u;
label_215e34:
    // 0x215e34: 0x7bbf0020
    ctx->pc = 0x215e34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215e38: 0x7bb10010
    ctx->pc = 0x215e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e3c: 0x7bb00000
    ctx->pc = 0x215e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215e40: 0x3e00008
    ctx->pc = 0x215E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215E1Cu: goto label_215e1c;
            case 0x215E34u: goto label_215e34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215E48u;
}
