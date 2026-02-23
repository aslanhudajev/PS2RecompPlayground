#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ShutdownThrdEx
// Address: 0x16d908 - 0x16d998
void ADXM_ShutdownThrdEx_0x16d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ShutdownThrdEx");


    ctx->pc = 0x16d908u;

    // 0x16d908: 0x8f82812c
    ctx->pc = 0x16d908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d90c: 0x27bdfff0
    ctx->pc = 0x16d90cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d910: 0xffbf0000
    ctx->pc = 0x16d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d914: 0x2442ffff
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16d918: 0x1440001c
    ctx->pc = 0x16D918u;
    {
        const bool branch_taken_0x16d918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D91Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934828), GPR_U32(ctx, 2));
        if (branch_taken_0x16d918) {
            ctx->pc = 0x16D98Cu;
            goto label_16d98c;
        }
    }
    ctx->pc = 0x16D920u;
    // 0x16d920: 0xc05b4c2
    ctx->pc = 0x16D920u;
    SET_GPR_U32(ctx, 31, 0x16D928u);
    ctx->pc = 0x16D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownUsrIdleThrd_0x16d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D928u; }
        else if (ctx->pc != 0x16D928u) { ctx->pc = 0x16D928u; }
    }
    if (ctx->pc != 0x16D928u) { return; }
    ctx->pc = 0x16D928u;
    // 0x16d928: 0xc05b4de
    ctx->pc = 0x16D928u;
    SET_GPR_U32(ctx, 31, 0x16D930u);
    ctx->pc = 0x16D378u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownMwIdleThrd_0x16d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D930u; }
        else if (ctx->pc != 0x16D930u) { ctx->pc = 0x16D930u; }
    }
    if (ctx->pc != 0x16D930u) { return; }
    ctx->pc = 0x16D930u;
    // 0x16d930: 0xc05b4fa
    ctx->pc = 0x16D930u;
    SET_GPR_U32(ctx, 31, 0x16D938u);
    ctx->pc = 0x16D3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownVsyncThrd_0x16d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D938u; }
        else if (ctx->pc != 0x16D938u) { ctx->pc = 0x16D938u; }
    }
    if (ctx->pc != 0x16D938u) { return; }
    ctx->pc = 0x16D938u;
    // 0x16d938: 0xc05b516
    ctx->pc = 0x16D938u;
    SET_GPR_U32(ctx, 31, 0x16D940u);
    ctx->pc = 0x16D458u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownUsrVsyncThrd_0x16d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D940u; }
        else if (ctx->pc != 0x16D940u) { ctx->pc = 0x16D940u; }
    }
    if (ctx->pc != 0x16D940u) { return; }
    ctx->pc = 0x16D940u;
    // 0x16d940: 0xc05b532
    ctx->pc = 0x16D940u;
    SET_GPR_U32(ctx, 31, 0x16D948u);
    ctx->pc = 0x16D4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownSafeThrd_0x16d4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D948u; }
        else if (ctx->pc != 0x16D948u) { ctx->pc = 0x16D948u; }
    }
    if (ctx->pc != 0x16D948u) { return; }
    ctx->pc = 0x16D948u;
    // 0x16d948: 0xc0551f4
    ctx->pc = 0x16D948u;
    SET_GPR_U32(ctx, 31, 0x16D950u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D950u; }
        else if (ctx->pc != 0x16D950u) { ctx->pc = 0x16D950u; }
    }
    if (ctx->pc != 0x16D950u) { return; }
    ctx->pc = 0x16D950u;
    // 0x16d950: 0xaf82817c
    ctx->pc = 0x16d950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 2));
    // 0x16d954: 0x8f8581ec
    ctx->pc = 0x16d954u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16d958: 0x8f84817c
    ctx->pc = 0x16d958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d95c: 0xc0551dc
    ctx->pc = 0x16D95Cu;
    SET_GPR_U32(ctx, 31, 0x16D964u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D964u; }
        else if (ctx->pc != 0x16D964u) { ctx->pc = 0x16D964u; }
    }
    if (ctx->pc != 0x16D964u) { return; }
    ctx->pc = 0x16D964u;
    // 0x16d964: 0x202d
    ctx->pc = 0x16d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d968: 0xc05f86c
    ctx->pc = 0x16D968u;
    SET_GPR_U32(ctx, 31, 0x16D970u);
    ctx->pc = 0x16D96Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbLock_0x17e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D970u; }
        else if (ctx->pc != 0x16D970u) { ctx->pc = 0x16D970u; }
    }
    if (ctx->pc != 0x16D970u) { return; }
    ctx->pc = 0x16D970u;
    // 0x16d970: 0x202d
    ctx->pc = 0x16d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d974: 0xc05f870
    ctx->pc = 0x16D974u;
    SET_GPR_U32(ctx, 31, 0x16D97Cu);
    ctx->pc = 0x16D978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbUnlock_0x17e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D97Cu; }
        else if (ctx->pc != 0x16D97Cu) { ctx->pc = 0x16D97Cu; }
    }
    if (ctx->pc != 0x16D97Cu) { return; }
    ctx->pc = 0x16D97Cu;
    // 0x16d97c: 0xdfbf0000
    ctx->pc = 0x16d97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d980: 0xaf808130
    ctx->pc = 0x16d980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934832), GPR_U32(ctx, 0));
    // 0x16d984: 0x805f942
    ctx->pc = 0x16D984u;
    ctx->pc = 0x16D988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E508u;
    SVM_Finish_0x17e508(rdram, ctx, runtime); return;
    ctx->pc = 0x16D98Cu;
label_16d98c:
    // 0x16d98c: 0xdfbf0000
    ctx->pc = 0x16d98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d990: 0x3e00008
    ctx->pc = 0x16D990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D98Cu: goto label_16d98c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D998u;
}
