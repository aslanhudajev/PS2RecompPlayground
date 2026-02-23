#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_Init
// Address: 0x187ea8 - 0x187f7c
void MPV_Init_0x187ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_Init");


    ctx->pc = 0x187ea8u;

    // 0x187ea8: 0x27bdffd0
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187eac: 0xffb10010
    ctx->pc = 0x187eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x187eb0: 0xffb00000
    ctx->pc = 0x187eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187eb4: 0x80882d
    ctx->pc = 0x187eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187eb8: 0xffbf0020
    ctx->pc = 0x187eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187ebc: 0xc061fe0
    ctx->pc = 0x187EBCu;
    SET_GPR_U32(ctx, 31, 0x187EC4u);
    ctx->pc = 0x187EC0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_ChkFatal_0x187f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EC4u; }
        else if (ctx->pc != 0x187EC4u) { ctx->pc = 0x187EC4u; }
    }
    if (ctx->pc != 0x187EC4u) { return; }
    ctx->pc = 0x187EC4u;
    // 0x187ec4: 0x40182d
    ctx->pc = 0x187ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ec8: 0x10600010
    ctx->pc = 0x187EC8u;
    {
        const bool branch_taken_0x187ec8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x187ec8) {
            ctx->pc = 0x187F0Cu;
            goto label_187f0c;
        }
    }
    ctx->pc = 0x187ED0u;
    // 0x187ed0: 0x3c02ff03
    ctx->pc = 0x187ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65283 << 16));
    // 0x187ed4: 0x3442ff05
    ctx->pc = 0x187ed4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65285));
    // 0x187ed8: 0x14620006
    ctx->pc = 0x187ED8u;
    {
        const bool branch_taken_0x187ed8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x187ed8) {
            ctx->pc = 0x187EF4u;
            goto label_187ef4;
        }
    }
    ctx->pc = 0x187EE0u;
    // 0x187ee0: 0x3c02ff03
    ctx->pc = 0x187ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65283 << 16));
    // 0x187ee4: 0x10000020
    ctx->pc = 0x187EE4u;
    {
        const bool branch_taken_0x187ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187EE8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65285));
        if (branch_taken_0x187ee4) {
            ctx->pc = 0x187F68u;
            goto label_187f68;
        }
    }
    ctx->pc = 0x187EECu;
    // 0x187eec: 0x0
    ctx->pc = 0x187eecu;
    // NOP
label_187ef0:
    // 0x187ef0: 0x0
    ctx->pc = 0x187ef0u;
    // NOP
label_187ef4:
    // 0x187ef4: 0x0
    ctx->pc = 0x187ef4u;
    // NOP
    // 0x187ef8: 0x0
    ctx->pc = 0x187ef8u;
    // NOP
    // 0x187efc: 0x0
    ctx->pc = 0x187efcu;
    // NOP
    // 0x187f00: 0x0
    ctx->pc = 0x187f00u;
    // NOP
    // 0x187f04: 0x1000fffa
    ctx->pc = 0x187F04u;
    {
        const bool branch_taken_0x187f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x187f04) {
            ctx->pc = 0x187EF0u;
            goto label_187ef0;
        }
    }
    ctx->pc = 0x187F0Cu;
label_187f0c:
    // 0x187f0c: 0xc061ffa
    ctx->pc = 0x187F0Cu;
    SET_GPR_U32(ctx, 31, 0x187F14u);
    ctx->pc = 0x187FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_ChkCacheMode_0x187fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F14u; }
        else if (ctx->pc != 0x187F14u) { ctx->pc = 0x187F14u; }
    }
    if (ctx->pc != 0x187F14u) { return; }
    ctx->pc = 0x187F14u;
    // 0x187f14: 0xc062004
    ctx->pc = 0x187F14u;
    SET_GPR_U32(ctx, 31, 0x187F1Cu);
    ctx->pc = 0x187F18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188010u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_ConvOix_0x188010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F1Cu; }
        else if (ctx->pc != 0x187F1Cu) { ctx->pc = 0x187F1Cu; }
    }
    if (ctx->pc != 0x187F1Cu) { return; }
    ctx->pc = 0x187F1Cu;
    // 0x187f1c: 0x40282d
    ctx->pc = 0x187f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f20: 0xc06206c
    ctx->pc = 0x187F20u;
    SET_GPR_U32(ctx, 31, 0x187F28u);
    ctx->pc = 0x187F24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1881B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitWork_0x1881b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F28u; }
        else if (ctx->pc != 0x187F28u) { ctx->pc = 0x187F28u; }
    }
    if (ctx->pc != 0x187F28u) { return; }
    ctx->pc = 0x187F28u;
    // 0x187f28: 0x3c02002e
    ctx->pc = 0x187f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x187f2c: 0xc061804
    ctx->pc = 0x187F2Cu;
    SET_GPR_U32(ctx, 31, 0x187F34u);
    ctx->pc = 0x187F30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 17088)));
    ctx->pc = 0x186010u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_Init_0x186010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F34u; }
        else if (ctx->pc != 0x187F34u) { ctx->pc = 0x187F34u; }
    }
    if (ctx->pc != 0x187F34u) { return; }
    ctx->pc = 0x187F34u;
    // 0x187f34: 0xc0618f6
    ctx->pc = 0x187F34u;
    SET_GPR_U32(ctx, 31, 0x187F3Cu);
    ctx->pc = 0x1863D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVFRM_Init_0x1863d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F3Cu; }
        else if (ctx->pc != 0x187F3Cu) { ctx->pc = 0x187F3Cu; }
    }
    if (ctx->pc != 0x187F3Cu) { return; }
    ctx->pc = 0x187F3Cu;
    // 0x187f3c: 0xc06270e
    ctx->pc = 0x187F3Cu;
    SET_GPR_U32(ctx, 31, 0x187F44u);
    ctx->pc = 0x187F40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 240));
    ctx->pc = 0x189C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVVLC_Init_0x189c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F44u; }
        else if (ctx->pc != 0x187F44u) { ctx->pc = 0x187F44u; }
    }
    if (ctx->pc != 0x187F44u) { return; }
    ctx->pc = 0x187F44u;
    // 0x187f44: 0xc060a6a
    ctx->pc = 0x187F44u;
    SET_GPR_U32(ctx, 31, 0x187F4Cu);
    ctx->pc = 0x187F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1829A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_Init_0x1829a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F4Cu; }
        else if (ctx->pc != 0x187F4Cu) { ctx->pc = 0x187F4Cu; }
    }
    if (ctx->pc != 0x187F4Cu) { return; }
    ctx->pc = 0x187F4Cu;
    // 0x187f4c: 0xc060d64
    ctx->pc = 0x187F4Cu;
    SET_GPR_U32(ctx, 31, 0x187F54u);
    ctx->pc = 0x187F50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1696));
    ctx->pc = 0x183590u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVCMC_Init_0x183590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F54u; }
        else if (ctx->pc != 0x187F54u) { ctx->pc = 0x187F54u; }
    }
    if (ctx->pc != 0x187F54u) { return; }
    ctx->pc = 0x187F54u;
    // 0x187f54: 0xc06200c
    ctx->pc = 0x187F54u;
    SET_GPR_U32(ctx, 31, 0x187F5Cu);
    ctx->pc = 0x188030u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitObjTbl_0x188030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F5Cu; }
        else if (ctx->pc != 0x187F5Cu) { ctx->pc = 0x187F5Cu; }
    }
    if (ctx->pc != 0x187F5Cu) { return; }
    ctx->pc = 0x187F5Cu;
    // 0x187f5c: 0xc062062
    ctx->pc = 0x187F5Cu;
    SET_GPR_U32(ctx, 31, 0x187F64u);
    ctx->pc = 0x187F60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188188u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitUseLib_0x188188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F64u; }
        else if (ctx->pc != 0x187F64u) { ctx->pc = 0x187F64u; }
    }
    if (ctx->pc != 0x187F64u) { return; }
    ctx->pc = 0x187F64u;
    // 0x187f64: 0x102d
    ctx->pc = 0x187f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187f68:
    // 0x187f68: 0xdfbf0020
    ctx->pc = 0x187f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187f6c: 0xdfb10010
    ctx->pc = 0x187f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187f70: 0xdfb00000
    ctx->pc = 0x187f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f74: 0x3e00008
    ctx->pc = 0x187F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187F78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187EF0u: goto label_187ef0;
            case 0x187EF4u: goto label_187ef4;
            case 0x187F0Cu: goto label_187f0c;
            case 0x187F68u: goto label_187f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187F7Cu;
}
