#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInit
// Address: 0x2c5d90 - 0x2c5e68
void MBInit_0x2c5d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5d90u;

    // 0x2c5d90: 0x27bdffe0
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5d94: 0xffbf0010
    ctx->pc = 0x2c5d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5d98: 0xffb00000
    ctx->pc = 0x2c5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5d9c: 0x3c02003a
    ctx->pc = 0x2c5d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c5da0: 0xac400c18
    ctx->pc = 0x2c5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3096), GPR_U32(ctx, 0));
    // 0x2c5da4: 0x3c100038
    ctx->pc = 0x2c5da4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2c5da8: 0x8e02b180
    ctx->pc = 0x2c5da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294947200)));
    // 0x2c5dac: 0x10400016
    ctx->pc = 0x2C5DACu;
    {
        const bool branch_taken_0x2c5dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c5dac) {
            ctx->pc = 0x2C5E08u;
            goto label_2c5e08;
        }
    }
    ctx->pc = 0x2C5DB4u;
    // 0x2c5db4: 0xc0a8aa4
    ctx->pc = 0x2C5DB4u;
    SET_GPR_U32(ctx, 31, 0x2C5DBCu);
    ctx->pc = 0x2A2A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitGlobal_0x2a2a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DBCu; }
    }
    if (ctx->pc != 0x2C5DBCu) { return; }
    ctx->pc = 0x2C5DBCu;
    // 0x2c5dbc: 0xc0acbf8
    ctx->pc = 0x2C5DBCu;
    SET_GPR_U32(ctx, 31, 0x2C5DC4u);
    ctx->pc = 0x2B2FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitVu1JumpTable_0x2b2fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DC4u; }
    }
    if (ctx->pc != 0x2C5DC4u) { return; }
    ctx->pc = 0x2C5DC4u;
    // 0x2c5dc4: 0x24040145
    ctx->pc = 0x2c5dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 325));
    // 0x2c5dc8: 0x3c050031
    ctx->pc = 0x2c5dc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2c5dcc: 0x24a5b750
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948688));
    // 0x2c5dd0: 0xc0a9a32
    ctx->pc = 0x2C5DD0u;
    SET_GPR_U32(ctx, 31, 0x2C5DD8u);
    ctx->pc = 0x2C5DD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DD8u; }
    }
    if (ctx->pc != 0x2C5DD8u) { return; }
    ctx->pc = 0x2C5DD8u;
    // 0x2c5dd8: 0x202d
    ctx->pc = 0x2c5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ddc: 0x282d
    ctx->pc = 0x2c5ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5de0: 0xc0b1734
    ctx->pc = 0x2C5DE0u;
    SET_GPR_U32(ctx, 31, 0x2C5DE8u);
    ctx->pc = 0x2C5DE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DE8u; }
    }
    if (ctx->pc != 0x2C5DE8u) { return; }
    ctx->pc = 0x2C5DE8u;
    // 0x2c5de8: 0x3c040037
    ctx->pc = 0x2c5de8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c5dec: 0x2484ba40
    ctx->pc = 0x2c5decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x2c5df0: 0x24050001
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5df4: 0x24060001
    ctx->pc = 0x2c5df4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5df8: 0xc0ad004
    ctx->pc = 0x2C5DF8u;
    SET_GPR_U32(ctx, 31, 0x2C5E00u);
    ctx->pc = 0x2C5DFCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E00u; }
    }
    if (ctx->pc != 0x2C5E00u) { return; }
    ctx->pc = 0x2C5E00u;
    // 0x2c5e00: 0x10000003
    ctx->pc = 0x2C5E00u;
    {
        const bool branch_taken_0x2c5e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5E04u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947200), GPR_U32(ctx, 0));
        if (branch_taken_0x2c5e00) {
            ctx->pc = 0x2C5E10u;
            goto label_2c5e10;
        }
    }
    ctx->pc = 0x2C5E08u;
label_2c5e08:
    // 0x2c5e08: 0xc0a8afe
    ctx->pc = 0x2C5E08u;
    SET_GPR_U32(ctx, 31, 0x2C5E10u);
    ctx->pc = 0x2A2BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetGlobal_0x2a2bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E10u; }
    }
    if (ctx->pc != 0x2C5E10u) { return; }
    ctx->pc = 0x2C5E10u;
label_2c5e10:
    // 0x2c5e10: 0xc0b1758
    ctx->pc = 0x2C5E10u;
    SET_GPR_U32(ctx, 31, 0x2C5E18u);
    ctx->pc = 0x2C5D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitStuff_0x2c5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E18u; }
    }
    if (ctx->pc != 0x2C5E18u) { return; }
    ctx->pc = 0x2C5E18u;
    // 0x2c5e18: 0x3c014400
    ctx->pc = 0x2c5e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17408 << 16));
    // 0x2c5e1c: 0x44816000
    ctx->pc = 0x2c5e1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c5e20: 0x3c0143c0
    ctx->pc = 0x2c5e20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17344 << 16));
    // 0x2c5e24: 0x44816800
    ctx->pc = 0x2c5e24u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2c5e28: 0xc0aa416
    ctx->pc = 0x2C5E28u;
    SET_GPR_U32(ctx, 31, 0x2C5E30u);
    ctx->pc = 0x2A9058u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVirtualScreenSize_0x2a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E30u; }
    }
    if (ctx->pc != 0x2C5E30u) { return; }
    ctx->pc = 0x2C5E30u;
    // 0x2c5e30: 0xc0b1bc0
    ctx->pc = 0x2C5E30u;
    SET_GPR_U32(ctx, 31, 0x2C5E38u);
    ctx->pc = 0x2C6F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetModels_0x2c6f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E38u; }
    }
    if (ctx->pc != 0x2C5E38u) { return; }
    ctx->pc = 0x2C5E38u;
    // 0x2c5e38: 0xc0b4026
    ctx->pc = 0x2C5E38u;
    SET_GPR_U32(ctx, 31, 0x2C5E40u);
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E40u; }
    }
    if (ctx->pc != 0x2C5E40u) { return; }
    ctx->pc = 0x2C5E40u;
    // 0x2c5e40: 0xc0b439e
    ctx->pc = 0x2C5E40u;
    SET_GPR_U32(ctx, 31, 0x2C5E48u);
    ctx->pc = 0x2D0E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitWindows_0x2d0e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E48u; }
    }
    if (ctx->pc != 0x2C5E48u) { return; }
    ctx->pc = 0x2C5E48u;
    // 0x2c5e48: 0xc0b172e
    ctx->pc = 0x2C5E48u;
    SET_GPR_U32(ctx, 31, 0x2C5E50u);
    ctx->pc = 0x2C5CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitLights_0x2c5cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E50u; }
    }
    if (ctx->pc != 0x2C5E50u) { return; }
    ctx->pc = 0x2C5E50u;
    // 0x2c5e50: 0xc0b11c4
    ctx->pc = 0x2C5E50u;
    SET_GPR_U32(ctx, 31, 0x2C5E58u);
    ctx->pc = 0x2C4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBResetFontData_0x2c4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E58u; }
    }
    if (ctx->pc != 0x2C5E58u) { return; }
    ctx->pc = 0x2C5E58u;
    // 0x2c5e58: 0xdfbf0010
    ctx->pc = 0x2c5e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5e5c: 0xdfb00000
    ctx->pc = 0x2c5e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5e60: 0x80aff44
    ctx->pc = 0x2C5E60u;
    ctx->pc = 0x2C5E64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2BFD10u;
    pbInitDORegs_0x2bfd10(rdram, ctx, runtime); return;
    ctx->pc = 0x2C5E68u;
}
